# Fleetmanager voor Project Robot Vloot (Groep A3)

## Uitleg
Dit project is voor de fleetmanager van ons robot-vloot project. Het project bestaat uit 3 packages, een interface library, een fleetmanager server en een fleetmanager client.

### Interface
De interface is bedoeld zodat de server en de client altijd dezelfde functionaliteit en definitie van bepaalde berichten hebben.

### Server
Dit is de package die op de Raspberry Pi van de fleetmanager runt.

### Client
Dit is de client die op elke robot runt.

## Benodigdheden
### Software
* [ROS2 (Jazzy)](https://docs.ros.org/en/jazzy/index.html)
### Hardware
* [Raspberry Pi](https://www.raspberrypi.com/)

## Uitvoeren
### 1. Verbinding maken met de fleetmanager
Om met de fleetmanager te kunnen verbinden vanuit je laptop runt er een SSH-server op waar we mee kunnen verbinden. Deze verbinding kun je leggen door de volgende command uit te voeren:
```bash
ssh rens@<ip_fleetmanager>
```
Hierbij vervang je ```<ip_fleetmanager>``` door het IPv4 adres van je fleetmanager.

### 2. Opzetten van het project
Om het project op te zetten voer je de volgende commando uit:
```bash
bash ./scripts/build_all.sh
```
Als je specifiek alle bestanden wilt herbouwen gebruik je de volgende commando:
```bash
bash ./scripts/rebuild_all.sh
```

### 3. Uitvoeren van de fleetmanager
Dit commando voer je uit op de Raspberry Pi van de fleetmanager:
```bash
bash ./scripts/run_fleetmanager.sh
```

### 4. Uitvoeren van de fleetmanager client
Dit commando voer je uit op elke robot waarop je de fleetmanager client wilt runnen.
```bash
bash ./scripts/run_fleetmanager_client.sh
```
