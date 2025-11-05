## Utilisation : formater + vérifier avec Betty

But : appliquer un format automatique (clang-format) puis exécuter Betty pour afficher les violations restantes.

Fichiers ajoutés :
- `./.vscode/tasks.json` : 3 tâches — `Betty: Style check current file`, `Format: clang-format current file`, `Format+Betty: format then check`.
- `./.vscode/settings.json` : paramètres workspace (formatteur C par défaut).

Pré-requis :
- Avoir le script `Betty/betty-style.pl` présent (il l'est dans ce repo).
- Installer `clang-format` et l'extension C/C++ de Microsoft (`ms-vscode.cpptools`) si tu veux un formateur intégré.

Installer `clang-format` (Debian/Ubuntu) :

```bash
sudo apt update
sudo apt install -y clang-format
```

Comment lancer la tâche dans VS Code :
- Ouvre le fichier C que tu veux vérifier.
- Ouvre la palette de commandes (Ctrl+Shift+P) → "Tasks: Run Task" → choisis `Format+Betty: format then check`.

Remarque importante :
- Betty est un validateur (linter). Il ne corrige pas automatiquement tout. `clang-format` applique un style automatique qui corrige beaucoup de problèmes d'indentation/espaces, mais ne garantit pas que Betty passera tout seul.
- Après `Format+Betty`, corrige manuellement les violations indiquées par Betty.

Suggestion pour un raccourci clavier :
Copie le bloc suivant dans ton `keybindings.json` utilisateur (Ctrl+K Ctrl+S → open keyboard shortcuts file) pour lier une combinaison à la tâche :

```json
{
  "key": "ctrl+alt+b",
  "command": "workbench.action.tasks.runTask",
  "args": "Format+Betty: format then check"
}
```

Si tu veux, je peux :
- activer `editor.formatOnSave` pour C (modification workspace settings),
- ou créer un petit script qui exécute clang-format puis betty sur tous les fichiers `*.c`.

Dis-moi ce que tu veux que je fasse ensuite.
