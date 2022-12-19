# Programmablaufplan (PAP)
# Flussdiagramm

- Genormte (DIN 66001) grafische Dartstellung eines Algorithmus

- Einsatz in Entwurfsphase

- Kommunikations- / Diskussionswerkzeug

- Kann unabh&auml;ngig von konkreter Programmiersprache sein

- Enth&auml;lt Start- und Endknoten

- <h1>Pr&uuml;fungsrelevanz!<h1>

  # &Uuml;bung

  - Erstellen Sie einen Ablauf ihrer Zahnpflegeroutine als PAP (EA, 3).

```
1. Zahnbuerste nass machen
2. Zahnpasta drauf
3. 3 Minuten zaehne putzen
```



# Einschub "Boolischer Ausdruck"

- Bedingungen = Boolscher Ausdruck

- Wert ist "wahr" (_true_, 1) oder _"falsch"_ (_false_, 0)

- Vergleichsoperatoren:

  ```
  ==,!=, >, >=, <=, <
  ```

- Verkn&uuml;pfungsoperatoren:
```
 && (logisches UND)
 || (logisches ODER)
 Not bzw-! (logisches NICHT)
```



# &Uuml;bung



```kotlin
fun main() {
  if(Montag || Mittwoch || Freitag) {
     routine() + useZahnseide()
  } else {
    routine()
  }
}

fun regular() {
  val routine = "Zahnbuerste nass machen" +
  				"Zahncreme auf Zahnpasta" +
  				"Zaehne 3 Minuten putzen" +
  				"Utensilien reinigen"
  return routine
}
```



# &Uuml;bung

Die Summe ueber i von i=1 bis n lautet:

Summe = 1 + 2 + 3 + ... + (n-1) + n

Dies kann man auch als folgende Gleichung ausdrücken:

Summe = (1 + n) * n / 2

Die erste Gleichung ist die explizite Formel für die Summe, während die zweite Gleichung die implizite Formel ist. Die implizite Formel ist oft nützlich, wenn man die Summe für große Werte von n berechnen möchte, da sie weniger Rechenschritte erfordert.

Beispiel: Wenn n=5, dann lautet die Summe:

Summe = 1 + 2 + 3 + 4 + 5 = 15

Die implizite Formel liefert das gleiche Ergebnis:

Summe = (1 + 5) * 5 / 2 = 15



<h1>TODO</h1>



Um einen Programm Ablauf Plan für 99 Tage zu erstellen, in denen du jeweils 2 Tage arbeitest und 1 Tag frei hast, und bei dem jedes "3.frei" von einem Tag auf zwei Tage erweitert wird, könntest du folgendermaßen vorgehen:

1. Definiere das Ziel des Programms genau. Was möchtest du erreichen? Was sind die Hauptaufgaben und -verantwortungen?
2. Erstelle eine Liste aller erforderlichen Aufgaben. Was muss in welcher Reihenfolge erledigt werden, um das Ziel zu erreichen?
3. Ordne die Aufgaben in der richtigen Reihenfolge an. Berücksichtige dabei die zeitlichen Anforderungen und Abhängigkeiten zwischen den einzelnen Aufgaben.
4. Erstelle einen Zeitplan. Beginne mit dem ersten Arbeitstag und trage jeden folgenden Tag in der richtigen Reihenfolge ein. Berücksichtige dabei, dass du jedes "3.frei" von einem auf zwei Tage erweiterst.
5. Füge Informationen wie Ressourcenbedarf und Verantwortlichkeiten hinzu. Welche Ressourcen (z.B. Material, Personal) sind für jeden Schritt erforderlich und wer ist für die Durchführung der Aufgaben verantwortlich?
6. Prüfe und aktualisiere den Plan regelmäßig. Stelle sicher, dass der Plan realistisch und erreichbar ist und passe ihn an veränderte Bedingungen an.

Ich hoffe, dies gibt dir eine gute Anleitung, um deinen Programm Ablauf Plan zu erstellen. Wenn du weitere Fragen hast oder mehr Unterstützung brauchst, zögere nicht, mich zu fragen.
