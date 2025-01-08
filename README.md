# POO-Proiect-1
Acest proiect este o simulare a managementului angajaților și a costurilor într-o companie. Scopul proiectului este dezvoltarea unei aplicații software care să permită introducerea, gestionarea și afișarea informațiilor despre angajați, manageri și diferite tipuri de cheltuieli. Programul folosește clase și moștenire în limbajul C++ pentru a simula lucrul cu date despre angajați, manageri și costuri dintr-o organizație.

Clase si functionalitati:
Angajat: o clasă care reprezintă angajații individuali dintr-o companie, inclusiv date precum numele și salariul. Angajații pot fi adăugați în echipa de management și își pot afișa informațiile de bază.

Manager: O clasă care moștenește din clasa Angajat și adaugă capacitatea de a gestiona o echipă. Un manager poate adăuga angajați în echipa sa și poate afișa informații despre echipa sa și salariul acestora.

Cost: O clasă abstractă care reprezintă costurile de bază ale unei companii. Clasele moștenite reprezintă diferite tipuri de costuri:

Salariu (SalaryCost): Reprezintă costul salariilor pentru toți angajații din companie.
Cost fix (FixedCost): Reprezintă costuri constante, cum ar fi costurile administrative sau operaționale, care nu se modifică.
Costul de închiriere (RentCost): Reprezintă costul aferent închirierii spațiului de lucru.
Introducerea datelor: Programul permite utilizatorilor să introducă date despre angajați (nume și salariu), manager, precum și membri ai echipei managerului. De asemenea, utilizatorul introduce costuri pentru salarii, costuri fixe și costuri de închiriere.

Afișarea datelor: După introducerea datelor, programul afișează toate informațiile despre angajați, manageri, echipele acestora, precum și costurile totale pentru salarii, costuri fixe și chirie.

Însumarea costurilor: Programul permite însumarea salariilor tuturor angajaților, inclusiv managerului și membrilor echipei, pentru a obține costul total pentru salariile din companie.

Tehnologii:
Proiectul a fost implementat folosind limbajul de programare C++, cu accent pe lucrul cu clase, moștenire și polimorfism. Programul folosește vectori pentru a stoca în mod dinamic obiectele angajaților și echipei, precum și clase abstracte pentru a implementa diferite tipuri de cheltuieli.

Scopul proiectului:
Scopul acestui proiect este de a oferi o simulare a managementului angajaților, managerilor și costurilor într-o organizație, folosind principiile de programare orientată pe obiecte. Proiectul permite o mai bună organizare și gestionare a datelor privind angajații și costurile, care pot fi utile pentru planificarea bugetului și a resurselor într-o situație reală de afaceri.
