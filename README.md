# Bracket checker

C++ console app.  
It checks if given brackets are in correct order. All other characters than brackets are ignored.  


| Examples            |         |
|---------------------|---------|
| [ { } ( ( < > ) ) ] | valid   |
| { { { } } } [ ]     | valid   |
| { something }       | valid   |
| { ) [ ]             | invalid |
| < > { yo }          | valid   |
