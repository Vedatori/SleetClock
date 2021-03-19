V této kapitole je návod pro osazení desky plošných spojů pro SleetClock.
___
# Obsah
* [Seznam součástek](#seznam)
* [Pohled na PCB externího senzoru](#pohled)
* [Osazení rezistorů](#R)
* [Osazení schottkyho diody](#shottky)
* [Osazení stabilizátoru AMS1117](#stabil)
* [Osazení tlačítek](#tlac)
* [Osazení dutinkové lišty 4x2](#dutinka)
* [Osazení teplotního senzoru DALLAS DS18B20](#dallas)
* [Osazení dutinkové lišty](#dutinka2)
* [Osazení svorkovnice](#svorkovnice)
* [Osazení kondenzátoru](#C)
* [Lakování desky pasivačním lakem](#lakovani)
* [Vložení ESP01](#vlozeni)
* [Výroba propojovacího kabelu](#propojka)
___

## <a name = "seznam">Seznam součástek</a>
+ Druhá část PCB
+ SMD Rezistory vel. 1206 (před závorkou je uvedena hodnota, v závorce kódové označení na rezistoru)
    + 2x 330 Ω (331)
    + 4x 4,7 KΩ (472)
+ Schottkyho dioda LM5819
+ 2x teplotní senzor DS18B20
+ 2x mikrotlačítko
+ Dutinková lišta
+ Dutinková lišta 4x2
+ Svorkovnice DC
+ Kondenzátor 100 μF/min. 5 V
+ Sabilizátor AMS1117
+ ESP01

Součástky můžete vidět na následujícím obrázku.
![alt](SupportFiles/dsc_0341.jpg)

#### <a name = "pohled">Pohled na PCB externího senzoru</a>
Toto je pohled na PCB zepředu.
![alt](SupportFiles/IMG_002_2.jpg)

Takto vypadá PCB zezadu.
![alt](SupportFiles/IMG_003.jpg) 

## <a name = "R">Osazení rezistorů</a>
SMD rezistory pájejte stejným způsobem jako na hlavní desce.
1. Na pozice označené R1 a R2 připájejte rezistory 330 Ω, ozn. 331.\
![alt](SupportFiles/dsc_0345.jpg) 
1. Na pozice označené R4 až R26 připájejte rezistory 4,7 KΩ, ozn. 472.\
![alt](SupportFiles/dsc_0346.jpg)

## <a name = "shottky">Osazení schottkyho diody</a>
1. Schottkyho diodu umístěte na pozici D1 tak, že pruh na diodě směřuje stejným směrem, jakým ukazuje šipka na DPS.\
1. Diodu zapájejte stejným způsobem jako SMD rezistory.\
![alt](SupportFiles/dsc_0351.jpg)
    
## <a name = "stabil">Osazení stabilizátoru AMS1117</a>
Stabilizátor je na desce umístěn vedle diody D1. Footprint obsahuje čtyři vývody.
1. Plošku pro velký vývod (je určený pro případné chlazení) nahřejte a naneste na ni cín.\
1. Uchopte stabilizátor do pinzety a umístěte ho na jeho místo na desce. Neustále ho přidržuje pinzetou a roztavte cín nanesený na plošce pro chlazení. Na tuto plošku odpovídající vývod stabilizátoru připájejte.\
![alt](SupportFiles/dsc_0352.jpg)
1. Připájejte tři další vývody stabilizátoru.\
![alt](SupportFiles/dsc_0355.jpg)

## <a name = "tlac">Osazení tlačítek</a>
1. Z horní strany desky umístěte tlačítka a jejich vývody prostrčte deskou. Tlačítka by měla v desce sama držet.\
1. Ze spodní strany tlačítka zapájejte.\
![alt](SupportFiles/dsc_0359.jpg)

## <a name = "dutinka">Osazení dutinkové lišty 4x2</a>
Tuto dutinkovou lištu nemusíte narozdíl od předchozích zkracovat. Je vyrobena na míru pro externí senzor, obsahuje dvě řady po čtyřech pinech.
1. Dutinkovou lištu nasuňte z horní strany DPS a ze zadní strany zapájejte.\
![alt](SupportFiles/dsc_0362.jpg)

## <a name = "dallas">Osazení teplotního senzoru DALLAS DS18B20</a>
1. Zkontrolujte, že součástka, kterou se chystáte osadit, je teplotní senzor DALLAS (nesmí na ní být napsáno BC547).\
1. Teplotní senzor umístěte do levé části desky a zkontrolujte, zda-li odpovídá nákresu na DPS.\
![alt](SupportFiles/dsc_0360.jpg)
1. Horní stranu senzoru umístěte do výšky dutinkové lišty.\
1. Zapájejte stejným způsobem jako u hlavní desky.\
![alt](SupportFiles/dsc_0363.jpg)

## <a name = "dutinka2">Osazení dutinkové lišty</a>
1. Stejným způsobem jako u hlavní desky vyrobte dutinkovou lištu se 4 piny.\
1. Zapájejte na místo s popisky GND, RX, TX, 5V.\

## <a name = "svorkovnice">Osazení svorkovnice</a>
1. Nasaďte svorkovnici z přední strany desky a ze zadní napájejte.
Svorkovnice musí být úplně doražená k DPS.\
![alt](SupportFiles/dsc_0364.jpg)

## <a name = "C">Osazení kondenzátoru</a>
1. Nasaďte elektrolytický kondenzátor z přední strany desky a ze zadní napájejte.\
![alt](SupportFiles/IMG_004.jpg)

## <a name = "lakovani">Lakování desky pasivačním lakem</a>
1. Osazenou DPS nalakujte pasivačním lakem.\

## <a name = "vlozeni">Vložení ESP01</a>
1. Do připravené svorkovnice 4x2 vložte ESP01.\
![alt](SupportFiles/IMG_006.jpg)

## <a name = "propojka">Výroba propojovacího kabelu</a>
1. Odizolujte všechny konce napájecího kabelu v délce asi 7 mm.\
![alt](SupportFiles/dsc_0372.jpg)
1. Zacínujte všechna lanka na koncích drátu.\
![alt](SupportFiles/dsc_0419.jpg)
Pokud není cínování rovnoměrné, cín stáhněte ke konci odizolovaného kabelu do kuličky a poté ji z drátu odstřihněte kleštěmi.\
![alt](SupportFiles/dsc_0389.jpg)
1. Na jednom konci napájejte oba vodiče do USB konektoru. Nejdříve naneste malé množství cínu do krajních kontaktů konektoru.\
![alt](SupportFiles/dsc_0391.jpg)
Poté připájejte kabely tak, aby drát s červeným pruhem směřoval k pravé hraně konektoru, když se na něj díváte směrem od pájecích plošek (a část konektoru, která se zasunuje do nabíječky směřuje směrem od vás). Správnost zapojení kabelu ověřte na obrázku.\
![alt](SupportFiles/dsc_0404.jpg)
1. Nasuňte konektor do jeho plastového krytu a jemně ho stiskněte, aby se uzavřel.\
![alt](SupportFiles/dsc_0407.jpg)
1. Druhý konec kabelu upevněte ve svorkovnici na desce externího senzoru. Dbejte na to, aby drát s červeným pruhem byl upnutý ve svorce +VDC.\
![alt](SupportFiles/IMG_005.jpg)