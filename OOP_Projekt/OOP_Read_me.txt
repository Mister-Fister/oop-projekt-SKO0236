Hlavná funkcia aplikácie je možnosť pridávať hry(fizické/digitálne), zamestnancov , zákazníkov a objednávky taktiež ich výpisy.
Program obsahuje abstraktnú triedu: GameInfo podľa ktorej sa "riadia" classy: Game, PhysicalGame, DigitalGame. 
Taktiež obsahuje class Order ktorá žiada Classy: Games a Customers.
Zamestancy majú taktiež vlastný class kde sa cez static variable kontroluje ich počet.
Všetky classy sa spájajú v Classe Store ktorá sa následne používa v Main.
Táto classa taktiež obsahuje metódy na Get na všetky dostupné informácie.

