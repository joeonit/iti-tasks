## Essential concepts and terms

| Term | Definition  |
| --- | --- |
| Stable version  | Sum of the phases of development and maturity for computer software |
| Version Control | A system for tracking and managing changes to file whatever type of file it is.  |
| git | Git is a version control or history book to track all the changes to a project thru a repo |
| Working directory or working tree | the file dirctory = working tree |
| repo | the repository = version control |
| object | the objects tracked by git |
| blob | the file and its metadata  |
| tree | the folder and its metadata  |
| Hash function |  is any function that can be used to map data of arbitrary size to fixed-size values |
| deterministic hash function  | when we pass the same input to the hash function, it always generates the same output hash code |
| SHA-1 | In cryptography, SHA-1 is a hash function which takes an input and produces a 160-bit hash value known as a message digest – typically rendered as 40 hexadecimal digits. you can use it linux shasum |
| staging area | also known as the index, is a temporary area in Git where you can prepare changes to your files before committing them. |
| commit |  |
| untracked file to tracked  | untracked file are not recognised by git  |
| Patch | A small piece of code or software update applied to fix issues or add features in an existing program. |
| root-commit |  |
| git branch  | a linere sequence to a commit |
| three way merge |  |
| remote |  is a reference to a repository hosted on a different server |
|  |  |

## Popular git command and its function

| command  | function  |
| --- | --- |
| git add | Initialise the file into the index or the staging area |
| git commit | approve the file and moving it from the staging area to the repo |
| git init |  initialises git inside the folder |
| git status | see which files are tracked and untracked on the staging area |
| git ls-files | view tracked files in the staging area |
| git log or git log —oneline | log of commits |
| git diff | changes between your current working directory and your staging area |
| git reset head | move the head file to the staging area |
| git branch | make branches  |
| git switch  | switch a branch  |
| git show head | info about the head  |
| git merge  | merge the changes  |
| git remote | inform about the current remote  or add one |
| git fetch (remote) | get the latest updates upstream from the remote repo usually followed by git merge  |
| git pull (remote) | do fetch and merge command  |
| git push (remote) | push the latest edits to the remote repo |
| git clone (url) |  |

# Notes

### General questions

- Types of version control
    - local version control
    - central version control CVC
    - distributed version control  like git
        
        ![Screenshot 2023-11-05 at 6.38.36 AM.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/d01024d7-6263-42a2-8153-1237e48747ec/c67f7ead-b40a-4622-b1bf-0d0c848a9cb8/Screenshot_2023-11-05_at_6.38.36_AM.png)
        

---

### Architecture

- differential version control
    
    ![Screenshot 2023-11-05 at 7.08.23 AM.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/d01024d7-6263-42a2-8153-1237e48747ec/4391912e-d85c-44d0-9bbe-87f40bd869ed/Screenshot_2023-11-05_at_7.08.23_AM.png)
    
- snapshot version control
    
    ![Screenshot 2023-11-05 at 7.19.30 AM.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/d01024d7-6263-42a2-8153-1237e48747ec/56469692-376a-4ad4-a99f-b1cf6c31b420/Screenshot_2023-11-05_at_7.19.30_AM.png)
    

Rather than the differential version control git takes a snapshot of the entire file that has been changed, one may think that the former solution was more efficient which is true but the difference is negligible to the storage in modern days

---

### key factors in determining the git architecture

- What are the requirements you need in a version control = git
    - **Track Everything**
        - use git objects
    - **OS Independent**
        - make a simple folder structure and the repo exists inside the folder “.git”
        - types of objects that git tracks (git object)
            
            blob: the file and its metadata 
            
            tree : the folder and its metadata 
            
            commet : 
            
            taged annotations :  
            
    - **Unique Id** : solve this by using a deterministic hash function like SHA-1
        - but here a question my arise why would we use a deterministic function to give a unique id to each file and folder inside git? git using other values to calculate the sha algorithm like metadata, size, type and other null values
    - Track History
        
        ![Screenshot 2023-11-07 at 4.09.26 AM.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/d01024d7-6263-42a2-8153-1237e48747ec/9737874f-4ce7-44c6-98e6-7dd46df80905/Screenshot_2023-11-07_at_4.09.26_AM.png)
        
    - No Content change
    
    ---
    
    - Git objects hierarchy
        
        ![git higherarchy.png]([https://prod-files-secure.s3.us-west-2.amazonaws.com/d01024d7-6263-42a2-8153-1237e48747ec/32018f70-e0f6-447c-8a93-01e9a9547e66/git_higherarchy.png](https://drive.google.com/file/d/1Fl3VWx8P0v9z7dZU4VZGFjkfXOPTkgbe/view?usp=drive_link))
        
    - Commands architecture in details
        
        https://marklodato.github.io/visual-git-guide/index-en.html
        
    - The difference between download and clown
        
        Downloading retrieves a single snapshot of a Git repository, while cloning creates a complete copy of the repository with its entire version history.
