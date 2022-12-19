# LF5 


##  UML Diagramme

###  Steckbrief Use Case Diagramm

#### 1. Verwendung:
   - modellieren Anwendungsf&auml;lle (Funktionalit&auml;ten) eines Systems
   - hohes Abstraktionsniveau / Black-Box-Sicht (nur das jeweils wichtige dargestellt wird)
   - Anwedungsf&auml;lle k&ouml;nnen von externen Akteuren wahrnehmen und genutzt werden

   <br>
   <br>

####  2. Aufbau: 
   ##### 2.1 Akteure
Hier folgt ein Diagramm
 <<Actor>> Ausbildungsbetrieb:
	
- Akteure modellieren Typen oder Rollen, die eine externer Benutzer oder ein System einnehmen
- Darstellung Akteure
	  - "nat&uuml;rlich" => "M&auml;nnchen"
	  - "unnat&uuml;rlich" => "Rechteck"

##### 2.2 System	

  Hier folgt ein Diagramm

  <<Actor>>​ Ausbildungsbetrieb:

  - Systeme werden als Rechteck dargestellt
  - Systemname zwingend
  - Reckteck = Systemgrenze
  - Akteure befinden sich ausserhalb des Systems

  ##### 2.3 Anwendungsfall:

  Hier folgt ein Diagramm

  Anwendungsf&auml;lle modellieren _ausf&uuml;hrbar_ Funktionalit&auml;ten eines Systems

  - Das "was" steht im Vordergrund


  ##### 2.4 Assoziationen

	Hier folgt ein Diagramm

  - Assoziation ist eine Bezeichnung zwischen Akteuren und Anwendungsf&auml;llen
  - Ungerichtete Assoziation => Akteur is Aufrufer
  - _gerichtete Assoziation_ => Betroffener, der Anwendungsfall nicht aktiv aufrufen kann
  - Verwendung analog Klassendiagramm (z.Bsp.: Multiplizit&auml;ten)



Sch&uuml;ler

```kotlin
name: String
vorname: String
```

##### 2.5 Generalisierung - Vor&uuml;berlegungen

  Hier folgt ein Diagramm

  - von "oben nach unten" wird es immer "spezieller"
  - von "unten nach oben wird es immer "genereller" (allgemeiner)


  ##### 2.6 `include` Beziehung

   ```
   Hier folgt ein Diagramm
   ```

   - Inkludierter Anwendungsfall wird in Basis-Anwendungsfall _eingebunden_, _unbedingt ben&ouml;tigt_ und ausgef&uuml;hrt.
   - Inkludierter Anwendungsfall kann auch seperat ausgef&uuml;rt werden.

  ##### 2.7 `extend`-Beziehung
   - Erweiternder Anwendungsfall _kann_ in den Basis-Anwendungsfall eingebunden werden.
   - Basis-Anwendungsfall entscheidet &uuml;ber die Ausf&uuml;hrung (ggf. mithilfe eines `extensions points``)
   - Erweiternder Anwendungsfall kann seperat ausgef&uuml;hrt werden