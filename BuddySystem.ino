int led = D7;

// const char *RECEIVED_EVENT = "Deakin_RIOT_SIT210_Argon_Buddy";
const char *RESPONSE_EVENT = "Deakin_RIOT_SIT210_Photon_Buddy";

void setup() {
    pinMode(led, OUTPUT);
    Particle.subscribe(RESPONSE_EVENT, handler);
}

void handler(const char *event, const char *data) {
    if (strcmp(data, "wave") == 0) {
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
     } 
     else if (strcmp(data, "pat") == 0) {
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
    } 
    String message = String::format("Completed: %s event", data);
    Particle.publish(RESPONSE_EVENT, data);
}

void loop() {
    
}
