1.git --version=check which git version present
2.pwd=in which path the current project is present in my system
3.git init=to make the folder into a git repo
4.ls=to see all files and folder present in my current project
5.ls -Force or Get-ChildItem -Force=his will show:1.hidden files2.system files3.normal files
6.cd .git ->ls=to go inside git file
7.cd ..=to get out of git file
8.cls=It removes all the previous commands and output so you get a clean screen again
9.git status=It shows:which files were changed,which files are staged,which files are not yet added,which files are new,which branch you are on
//Branch of developments through doing git commit is called main/master
git status shows the state of each file in your project.
//The main statuses you will see are these 👇
1️⃣ Untracked file
Means Git does not know this file yet.
Example:
Untracked files:
   script.js
That means:
the file exists in your folder
but Git is not tracking it
To track it:
git add script.js
2️⃣ Modified (not staged)
Means the file is already tracked, but you changed it.
Example:
Changes not staged for commit:
   modified: index.html
That means:
Git knows the file
you edited it
but you did NOT add it again
To move it to the next step:
git add index.html
3️⃣ Staged (ready to commit)
Means the file is ready to be saved in Git history.
Example:
Changes to be committed:
   modified: index.html
Now you can save it permanently:
git commit -m "updated index file" 
//here -m means message.Git asks you to write a short description of what you changed."updated index file"
This is the message you wrote.Save the changes and write the message: updated index file
10.git rm --cached <file>...=use to unstage the file
11.git branch -m new-branch-name =to change branch name if you are already inside the branch
git branch -m old-name new-name=to change branch name if you are outside the  branch
12.git remote add origin <repo link> = connect local project to GitHub repo
13.git push -u origin main = you are uploading your project to GitHub and linking the branch for future pushes
//change in working area-git add-git commit-git push
14.git log=check git commit history
