Are you tired of debugging with `printf`? Do you feel confused by the vscode debug configuration files? Have you had painful experiences with cumbersome `include` and `DL_LIBRARY` configurations? Have you spent countless nights staring at the ugly gdb interface in the terminal? Have you repeatedly modified configuration files just to change an `args`? If so, you should try **attach debugging**.

## What is Attach Debugging?

Attach debugging allows you to directly attach the debugger to the current debugger server. It’s similar to attaching to a process, but with a key advantage: the server can pause the program’s execution until the debugger successfully attaches.

## Why Use Attach Debugging?

- **Smooth Interface**: Vscode’s smooth and clear interface protects your fingers and eyes from outdated technology developed 30 years ago.
- **Breakpoint Management**: It remembers your breakpoints, eliminating the need to manually read that cursed breakpoint file every time.
- **Elegant and Convenient**: The graphical interface and mouse-following variable inspection mean you no longer need to repeatedly use “p value.”
- **Terminal Flexibility**: If necessary, you can still write magical expressions in the terminal to debug.

Enjoy.
