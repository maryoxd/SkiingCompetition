# 🎿 Ski Race Simulation – C++ Skiing Competition  

**Ski Race Simulation** is a **C++ console-based simulation** of a skiing race. Skiers are loaded from an input file and assigned random results, including a completion time or special event (e.g., disqualification). The results are sorted and displayed in a leaderboard format.  

---

## 🏆 How the Simulation Works  
1. **Load skiers** from a text file.  
2. **Generate random results** for each skier:  
   - Finished race (time between **52.00 and 59.99 seconds**).  
   - **Disqualified (DSQ)**.  
   - **Did Not Finish (DNF)**.  
   - **Crashed (DNF!)**.  
3. **Sort results** by race time. Special event skiers are listed at the end.  
4. **Print the leaderboard** to the console and save it to `vystup.txt`.  

---

## 📌 Features  
- **Randomized race results** – Skiers finish with a race time or special event.  
- **Leaderboard ranking** – Sorted by time, with DSQ/DNF skiers displayed at the end.  
- **Console output & file saving** – Results are printed and stored in `vystup.txt`.  
- **Event categorization** – Disqualified skiers (DSQ) and non-finishers (DNF) are clearly labeled.  

---

## 🛠️ Technologies Used  
- **C++ (Standard Library & File Handling)**  
- **Random Number Generation (srand, time-based seed)**  
- **Sorting Algorithm for Leaderboard Ranking**  
- **Console & File Output Handling**  

---
