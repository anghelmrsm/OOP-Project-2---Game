Desigur! Uite versiunea rezumatului fără emojiuri:

---

## Sistem: Joc „Corabia” – Simulare Party Game în C++ cu Interfață Grafică (SFML)

---

### Descriere Generală

Acest proiect implementează o versiune digitală a jocului de societate „Corabia”, dezvoltat în C++ folosind principii solide de Programare Orientată pe Obiect (OOP) și o interfață grafică construită cu SFML.

Aplicația este modulară, cu separarea clară a logicii de joc față de interfața grafică și este extensibilă pentru jucători umani sau AI.

---

### Regulile Jocului „Corabia”

- Fiecare jucător extrage o carte → cel cu cea mai mică valoare intră în „corabie”.
- Jucătorul din corabie parcurge 4 niveluri, în care trebuie să ghicească:
  1. Culoarea cărții (roșu/negru)
  2. Dacă următoarea carte e mai mare sau mai mică
  3. Dacă este între sau în afara celor două cărți anterioare
  4. Simbolul exact al ultimei cărți (Hearts, Diamonds etc.)
- Dacă greșește → este resetat și trebuie să reînceapă
- Dacă reușește toate cele 4 niveluri → iese din corabie cu succes

---

## Structură OOP

---

### Clasa `Card`

Reprezintă o carte de joc.

**Atribute:**
- `int value` – valoarea cărții (2-14, unde 11=J, 12=Q, 13=K, 14=A)
- `std::string suit` – simbolul (Hearts, Diamonds, Clubs, Spades)

**Funcționalități:**
- Constructori / Destructor
- Gettere: `getColor()`, `getValue()`, `getSuit()`
- `toString()` – afișează cartea în format text

---

### Clasa `Deck`

Reprezintă un pachet de cărți de 52.

**Atribute:**
- `std::vector<Card> cards`

**Funcționalități:**
- Constructor: generează pachetul complet
- `draw()` – extrage o carte aleatoriu și o elimină
- `reset()` – reface pachetul
- `shuffle()` – amestecă pachetul

---

### Clasa `Player`

Reprezintă un jucător uman.

**Atribute:**
- `std::string name`
- `std::vector<Card> cards` – cărțile extrase
- `int level`, `int fails` – progres și încercări

**Funcționalități:**
- `addCard()`, `advanceLevel()`, `reset()`, `incrementFails()`
- Gettere pentru `cards`, `name`, `level`, `fails`

---

### Clasa `AIPlayer` (moștenește Player)

Un jucător controlat automat.

**Funcționalități:**
- `decideColor()`, `decideComparison()`, `decideRange()`, `decideSuit()` – alegeri automate pentru fiecare nivel

---

### Clasa `Game`

Controlează logica principală a jocului (variantă consolă).

**Funcționalități:**
- `start()`, `resetGame()`
- `level1()` – ghicire culoare
- `level2()` – comparare valori
- `level3()` – între/in afara
- `level4()` – ghicire simbol

---

### Clasa `GameGUI`

Variantă grafică completă, cu meniuri și butoane.

**Funcționalități:**
- `run()`, `setupPlayers()`, `selectPlayer()`
- `playLevel1()` până la `playLevel4()` – fiecare nivel cu butoane vizuale
- Afișare rezultat și contor încercări

---

## Funcționalități Cheie

- Suport pentru jucători multipli
- Afișare interactivă cu butoane (via SFML)
- AI jucători cu comportament automat
- Eliminarea cărților dacă jucătorul greșește
- Reset complet de stare între încercări
- Modularizare ușoară pentru adăugarea altor reguli sau extensii
- Contor pentru runde eșuate și afișare scor final

---

Dorești să exportăm acest rezumat într-un fișier `.txt` sau `.pdf` pentru documentație sau predare?
