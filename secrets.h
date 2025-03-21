#include <pgmspace.h>
 
#define SECRET
 
const char WIFI_SSID[] = "****";               
const char WIFI_PASSWORD[] = "****";           
 
#define THINGNAME "AWS_DHT_11"
 
int8_t TIME_ZONE = -5; //NYC(USA): -5 UTC
 
const char MQTT_HOST[] = "endpoint";
 

// Copy contents from Root-CA-certificate.pem here ▼
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";
 
 
// Copy contents from Device-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)KEY";
 
 
// Copy contents from  private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY----- 
)KEY";
