#define VISUINO_ESP32

#include <OpenWire.h>
#include <Mitov.h>
#include <Arduino.h>
#include <Mitov_ESP32.h>
#include <Mitov_ESP32_WiFi.h>
#include <WiFi.h>
#define protected public
#define private public
#include <WiFiClientSecure.h>
#undef private
#undef protected
#define private public
#ifdef SEEEDUINO_WIO_TERMINAL
#else
#endif
#undef private
#include <Mitov_Brightness_ESP32_ST77XX_Display.h>
#include <Mitov_Display_ST7789_135_240.h>
#include <Mitov_Graphics.h>
#include <Mitov_Graphics_Color.h>
#include <Fonts\Fixed\GraphicsFont5x7.h>
#include <SPI.h>
#include <Mitov_Arduino_SPI.h>
#include <Mitov_SPI1.h>
#include <Arduino_ESP32_SPI_Class.h>
#include <Mitov_HTTP_Client.h>
#include <Mitov_JSON.h>
#include <Mitov_Timing.h>
#include <Mitov_Converters.h>


// Shared Component Member Variables

namespace ComponentVariables
{
class
{
public:
  bool Value1 : 1;
  uint32_t Value2 : 2;
  bool Value3 : 1;
  bool Value4 : 1;
  bool Value5 : 1;
  uint32_t Value6 : 16;
  bool Value7 : 1;
  bool Value8 : 1;
  bool Value9 : 1;
  uint32_t Value10 : 2;
  uint32_t Value11 : 32;
  bool Value12 : 1;
  bool Value13 : 1;
  bool Value14 : 1;
  bool Value15 : 1;
  bool Value16 : 1;
  bool Value17 : 1;
  bool Value18 : 1;
  bool Value19 : 1;
  bool Value20 : 1;
  bool Value21 : 1;
  bool Value22 : 1;
  bool Value23 : 1;
  bool Value24 : 1;
  bool Value25 : 1;
  bool Value26 : 1;
  bool Value27 : 1;
  bool Value28 : 1;
  uint32_t Value29 : 11;
  bool Value30 : 1;
  bool Value31 : 1;
  bool Value32 : 1;

} BitFields;

class Variable1
{
public:
  inline static bool GetValue() { return BitFields.Value1; }
  inline static void SetValue( bool AValue ) { BitFields.Value1 = AValue; }

};

class Variable2
{
public:
  inline static uint32_t GetValue() { return BitFields.Value2; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value2 = AValue; }

};

class Variable3
{
public:
  inline static bool GetValue() { return BitFields.Value3; }
  inline static void SetValue( bool AValue ) { BitFields.Value3 = AValue; }

};

class Variable4
{
public:
  inline static bool GetValue() { return BitFields.Value4; }
  inline static void SetValue( bool AValue ) { BitFields.Value4 = AValue; }

};

class Variable5
{
public:
  inline static bool GetValue() { return BitFields.Value5; }
  inline static void SetValue( bool AValue ) { BitFields.Value5 = AValue; }

};

class Variable6
{
public:
  inline static uint32_t GetValue() { return BitFields.Value6; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value6 = AValue; }

};

class Variable7
{
public:
  inline static bool GetValue() { return BitFields.Value7; }
  inline static void SetValue( bool AValue ) { BitFields.Value7 = AValue; }

};

class Variable8
{
public:
  inline static bool GetValue() { return BitFields.Value8; }
  inline static void SetValue( bool AValue ) { BitFields.Value8 = AValue; }

};

class Variable9
{
public:
  inline static bool GetValue() { return BitFields.Value9; }
  inline static void SetValue( bool AValue ) { BitFields.Value9 = AValue; }

};

class Variable10
{
public:
  inline static uint32_t GetValue() { return BitFields.Value10; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value10 = AValue; }

};

class Variable11
{
public:
  inline static uint32_t GetValue() { return BitFields.Value11; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value11 = AValue; }

};

class Variable12
{
public:
  inline static bool GetValue() { return BitFields.Value12; }
  inline static void SetValue( bool AValue ) { BitFields.Value12 = AValue; }

};

class Variable13
{
public:
  inline static bool GetValue() { return BitFields.Value13; }
  inline static void SetValue( bool AValue ) { BitFields.Value13 = AValue; }

};

class Variable14
{
public:
  inline static bool GetValue() { return BitFields.Value14; }
  inline static void SetValue( bool AValue ) { BitFields.Value14 = AValue; }

};

class Variable15
{
public:
  inline static bool GetValue() { return BitFields.Value15; }
  inline static void SetValue( bool AValue ) { BitFields.Value15 = AValue; }

};

class Variable16
{
public:
  inline static bool GetValue() { return BitFields.Value16; }
  inline static void SetValue( bool AValue ) { BitFields.Value16 = AValue; }

};

class Variable17
{
public:
  inline static bool GetValue() { return BitFields.Value17; }
  inline static void SetValue( bool AValue ) { BitFields.Value17 = AValue; }

};

class Variable18
{
public:
  inline static bool GetValue() { return BitFields.Value18; }
  inline static void SetValue( bool AValue ) { BitFields.Value18 = AValue; }

};

class Variable19
{
public:
  inline static bool GetValue() { return BitFields.Value19; }
  inline static void SetValue( bool AValue ) { BitFields.Value19 = AValue; }

};

class Variable20
{
public:
  inline static bool GetValue() { return BitFields.Value20; }
  inline static void SetValue( bool AValue ) { BitFields.Value20 = AValue; }

};

class Variable21
{
public:
  inline static bool GetValue() { return BitFields.Value21; }
  inline static void SetValue( bool AValue ) { BitFields.Value21 = AValue; }

};

class Variable22
{
public:
  inline static bool GetValue() { return BitFields.Value22; }
  inline static void SetValue( bool AValue ) { BitFields.Value22 = AValue; }

};

class Variable23
{
public:
  inline static bool GetValue() { return BitFields.Value23; }
  inline static void SetValue( bool AValue ) { BitFields.Value23 = AValue; }

};

class Variable24
{
public:
  inline static bool GetValue() { return BitFields.Value24; }
  inline static void SetValue( bool AValue ) { BitFields.Value24 = AValue; }

};

class Variable25
{
public:
  inline static bool GetValue() { return BitFields.Value25; }
  inline static void SetValue( bool AValue ) { BitFields.Value25 = AValue; }

};

class Variable26
{
public:
  inline static bool GetValue() { return BitFields.Value26; }
  inline static void SetValue( bool AValue ) { BitFields.Value26 = AValue; }

};

class Variable27
{
public:
  inline static bool GetValue() { return BitFields.Value27; }
  inline static void SetValue( bool AValue ) { BitFields.Value27 = AValue; }

};

class Variable28
{
public:
  inline static bool GetValue() { return BitFields.Value28; }
  inline static void SetValue( bool AValue ) { BitFields.Value28 = AValue; }

};

class Variable29
{
public:
  inline static uint32_t GetValue() { return BitFields.Value29; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value29 = AValue; }

};

class Variable30
{
public:
  inline static bool GetValue() { return BitFields.Value30; }
  inline static void SetValue( bool AValue ) { BitFields.Value30 = AValue; }

};

class Variable31
{
public:
  inline static bool GetValue() { return BitFields.Value31; }
  inline static void SetValue( bool AValue ) { BitFields.Value31 = AValue; }

};

class Variable32
{
public:
  inline static bool GetValue() { return BitFields.Value32; }
  inline static void SetValue( bool AValue ) { BitFields.Value32 = AValue; }

};

} // ComponentVariables

// Arduino Constant Declarations

namespace VisuinoConstants
{
class FloatValue2
{
public:
    inline static constexpr float GetValue() { return 0.200000002980232; }
};

class FloatValue0
{
public:
    inline static constexpr float GetValue() { return 19.5; }
};

class FloatValue1
{
public:
    inline static constexpr float GetValue() { return 1; }
};

class TextValue16
{
public:
    inline static constexpr const char *GetValue() { return "percent_change_24"; }
};

class TextValue4
{
public:
    inline static constexpr const char *GetValue() { return "naolembro31"; }
};

class TextValue19
{
public:
    inline static constexpr const char *GetValue() { return "low"; }
};

class TextValue24
{
public:
    inline static constexpr const char *GetValue() { return "open_24"; }
};

class TextValue1
{
public:
    inline static constexpr const char *GetValue() { return "Marina.Thiago.2G"; }
};

class TextValue5
{
public:
    inline static constexpr const char *GetValue() { return "www.bitstamp.net"; }
};

class TextValue26
{
public:
    inline static constexpr const char *GetValue() { return "ask"; }
};

class TextValue14
{
public:
    inline static constexpr const char *GetValue() { return "close"; }
};

class TextValue3
{
public:
    inline static constexpr const char *GetValue() { return "thianog.eth"; }
};

class TextValue15
{
public:
    inline static constexpr const char *GetValue() { return "/api/v2/ticker/btcusd/"; }
};

class TextValue20
{
public:
    inline static constexpr const char *GetValue() { return "bid"; }
};

class TextValue7
{
public:
    inline static constexpr const char *GetValue() { return "MIN.24H"; }
};

class TextValue9
{
public:
    inline static constexpr const char *GetValue() { return "% 24h"; }
};

class TextValue11
{
public:
    inline static constexpr const char *GetValue() { return "HTTP/1.1"; }
};

class TextValue18
{
public:
    inline static constexpr const char *GetValue() { return "volume"; }
};

class TextValue23
{
public:
    inline static constexpr const char *GetValue() { return "last"; }
};

class TextValue8
{
public:
    inline static constexpr const char *GetValue() { return "VALOR"; }
};

class TextValue6
{
public:
    inline static constexpr const char *GetValue() { return "\011-----BEGIN CERTIFICATE-----\r\nMIIEtjCCA56gAwIBAgIQDHmpRLCMEZUgkmFf4msdgzANBgkqhkiG9w0BAQsFADBs\r\nMQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\r\nd3cuZGlnaWNlcnQuY29tMSswKQYDVQQDEyJEaWdpQ2VydCBIaWdoIEFzc3VyYW5j\r\nZSBFViBSb290IENBMB4XDTEzMTAyMjEyMDAwMFoXDTI4MTAyMjEyMDAwMFowdTEL\r\nMAkGA1UEBhMCVVMxFTATBgNVBAoTDERpZ2lDZXJ0IEluYzEZMBcGA1UECxMQd3d3\r\nLmRpZ2ljZXJ0LmNvbTE0MDIGA1UEAxMrRGlnaUNlcnQgU0hBMiBFeHRlbmRlZCBW\r\nYWxpZGF0aW9uIFNlcnZlciBDQTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoC\r\nggEBANdTpARR+JmmFkhLZyeqk0nQOe0MsLAAh/FnKIaFjI5j2ryxQDji0/XspQUY\r\nuD0+xZkXMuwYjPrxDKZkIYXLBxA0sFKIKx9om9KxjxKws9LniB8f7zh3VFNfgHk/\r\nLhqqqB5LKw2rt2O5Nbd9FLxZS99RStKh4gzikIKHaq7q12TWmFXo/a8aUGxUvBHy\r\n/Urynbt/DvTVvo4WiRJV2MBxNO723C3sxIclho3YIeSwTQyJ3DkmF93215SF2AQh\r\ncJ1vb/9cuhnhRctWVyh+HA1BV6q3uCe7seT6Ku8hI3UarS2bhjWMnHe1c63YlC3k\r\n8wyd7sFOYn4XwHGeLN7x+RAoGTMCAwEAAaOCAUkwggFFMBIGA1UdEwEB/wQIMAYB\r\nAf8CAQAwDgYDVR0PAQH/BAQDAgGGMB0GA1UdJQQWMBQGCCsGAQUFBwMBBggrBgEF\r\nBQcDAjA0BggrBgEFBQcBAQQoMCYwJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLmRp\r\nZ2ljZXJ0LmNvbTBLBgNVHR8ERDBCMECgPqA8hjpodHRwOi8vY3JsNC5kaWdpY2Vy\r\ndC5jb20vRGlnaUNlcnRIaWdoQXNzdXJhbmNlRVZSb290Q0EuY3JsMD0GA1UdIAQ2\r\nMDQwMgYEVR0gADAqMCgGCCsGAQUFBwIBFhxodHRwczovL3d3dy5kaWdpY2VydC5j\r\nb20vQ1BTMB0GA1UdDgQWBBQ901Cl1qCt7vNKYApl0yHU+PjWDzAfBgNVHSMEGDAW\r\ngBSxPsNpA/i/RwHUmCYaCALvY2QrwzANBgkqhkiG9w0BAQsFAAOCAQEAnbbQkIbh\r\nhgLtxaDwNBx0wY12zIYKqPBKikLWP8ipTa18CK3mtlC4ohpNiAexKSHc59rGPCHg\r\n4xFJcKx6HQGkyhE6V6t9VypAdP3THYUYUN9XR3WhfVUgLkc3UHKMf4Ib0mKPLQNa\r\n2sPIoc4sUqIAY+tzunHISScjl2SFnjgOrWNoPLpSgVh5oywM395t6zHyuqB8bPEs\r\n1OG9d4Q3A84ytciagRpKkk47RpqF/oOi+Z6Mo8wNXrM9zwR4jxQUezKcxwCmXMS1\r\noVWNWlZopCJwqjyBcdmdqEU79OX2olHdx3ti6G8MdOu42vi/hw15UJGQmxg7kVkn\r\n8TUoE6smftX3eg==\r\n-----END CERTIFICATE-----"; }
};

class TextValue0
{
public:
    inline static constexpr const char *GetValue() { return ""; }
};

class TextValue12
{
public:
    inline static constexpr const char *GetValue() { return "text/html"; }
};

class TextValue17
{
public:
    inline static constexpr const char *GetValue() { return "vwap"; }
};

class TextValue10
{
public:
    inline static constexpr const char *GetValue() { return "MAX.24H"; }
};

class TextValue2
{
public:
    inline static constexpr const char *GetValue() { return "20122020"; }
};

class TextValue21
{
public:
    inline static constexpr const char *GetValue() { return "high"; }
};

class TextValue13
{
public:
    inline static constexpr const char *GetValue() { return "no-cache"; }
};

class TextValue22
{
public:
    inline static constexpr const char *GetValue() { return "timestamp"; }
};

class TextValue25
{
public:
    inline static constexpr const char *GetValue() { return "open"; }
};

  constexpr PROGMEM const uint8_t ArrayValue0[] = { 142,0,0,0,0,0,0,0,32,0,24,129,0,57,98,0,81,226,0,98,67,0,114,163,0,114,163,0,98,67,0,81,226,0,57,66,0,16,129,0,0,32,0,0,0,102,0,0,0,0,0,0,32,225,0,82,3,0,139,100,0,204,165,0,229,69,0,253,229,0,254,37,0,254,102,1,254,134,0,254,102,0,254,69,0,253,229,0,229,69,0,204,165,0,147,132,0,82,3,0,32,193,0,0,0,97,0,0,0,0,0,0,73,227,0,155,196,0,229,101,0,254,102,0,254,229,0,255,6,0,254,230,0,254,165,0,254,101,0,254,37,1,254,5,0,254,37,0,254,101,0,254,133,0,254,230,0,255,6,0,254,230,0,254,102,0,229,101,0,155,164,0,73,195,0,0,0,93,0,0,0,0,1,0,90,67,0,204,197,0,254,69,0,254,197,0,254,229,0,254,101,0,237,132,0,180,68,0,147,67,0,106,130,0,73,193,0,57,65,1,49,1,0,57,65,0,73,161,0,106,98,0,147,66,0,180,35,0,229,100,0,254,101,0,254,229,0,254,197,0,254,70,0,196,165,0,82,3,0,0,0,90,0,0,0,49,66,0,180,101,0,254,102,0,254,197,0,254,165,0,245,197,0,172,3,0,98,66,0,40,225,11,0,0,0,40,224,0,98,33,0,163,195,0,245,165,0,254,165,0,254,229,0,254,102,0,180,101,0,41,34,0,0,0,86,0,0,0,0,0,0,131,68,0,254,38,0,254,197,0,254,165,0,245,133,0,139,67,0,40,224,17,0,0,0,32,192,0,130,226,0,229,68,0,254,165,0,254,229,0,254,38,0,131,36,0,0,0,84,0,0,0,24,130,0,180,101,0,254,166,0,254,165,0,254,5,0,155,163,0,41,1,21,0,0,0,32,160,0,147,66,0,253,197,0,254,197,0,254,198,0,180,101,0,24,129,82,0,0,0,32,194,0,213,38,0,254,197,0,254,133,0,229,68,0,81,225,25,0,0,0,65,129,0,212,228,0,254,133,0,254,197,0,205,38,0,32,194,80,0,0,0,41,2,0,229,166,0,254,165,0,254,101,0,180,3,0,16,128,8,0,0,0,24,160,0,73,193,0,114,162,0,139,67,1,155,131,0,139,67,0,114,194,0,81,226,0,32,192,0,0,0,7,0,0,0,8,64,0,163,163,0,254,101,0,254,197,0,229,134,0,41,2,78,0,0,0,24,162,0,213,38,0,254,165,0,254,101,0,163,195,7,0,0,0,24,128,0,106,98,0,180,67,0,237,68,0,253,229,0,254,37,0,254,69,0,254,101,0,254,101,0,254,69,0,254,37,0,254,5,0,245,101,0,188,100,0,114,130,0,32,192,7,0,0,0,139,67,0,254,101,0,254,197,0,213,37,0,24,162,76,0,0,0,0,0,0,204,197,0,254,197,0,254,133,0,155,131,6,0,0,0,24,128,0,139,67,0,237,133,0,254,101,0,254,101,0,254,133,0,254,101,0,254,69,0,253,197,0,253,133,0,254,5,1,254,69,0,254,5,0,253,229,0,254,69,0,254,133,0,245,165,0,155,163,0,32,193,6,0,0,0,131,2,0,254,133,0,254,197,0,204,197,0,0,33,75,0,0,0,139,67,0,254,165,0,254,165,0,163,227,0,0,0,5,0,0,0,106,130,0,229,100,0,254,133,0,254,37,0,253,197,0,253,165,0,221,4,0,196,196,0,213,4,0,245,133,0,253,197,0,237,100,0,204,196,0,204,196,0,237,69,0,253,197,0,253,165,0,253,165,0,254,5,0,254,133,0,237,165,0,122,226,0,0,0,5,0,0,0,147,99,0,254,165,0,254,165,0,147,133,0,0,0,73,0,0,0,73,162,0,254,69,0,254,198,0,212,228,0,8,32,4,0,0,0,8,32,0,163,227,0,254,133,0,254,37,0,253,165,0,253,165,0,254,5,0,245,133,0,57,65,0,0,0,0,24,128,0,204,164,0,254,230,0,122,227,0,0,0,0,0,0,0,131,2,0,254,101,0,253,165,0,253,165,1,253,165,0,254,5,0,254,165,0,180,100,0,24,128,5,0,0,0,188,100,0,254,197,0,254,102,0,82,3,13,0,0,0,82,170,5,214,154,0,82,170,0,132,48,0,214,154,2,0,0,0,148,178,0,189,247,0,214,154,0,173,117,0,82,170,1,0,0,0,214,154,0,132,48,1,0,0,0,82,170,0,214,154,0,165,20,0,0,0,5,214,154,0,0,0,0,132,48,2,214,154,0,206,89,0,165,20,0,82,170,16,0,0,0,24,161,0,229,69,0,254,198,0,237,165,0,40,225,4,0,0,0,32,192,0,213,4,0,254,166,0,253,229,0,253,165,0,253,165,0,253,165,0,254,5,0,245,133,0,32,193,1,0,0,0,196,163,0,255,6,0,106,130,1,0,0,0,114,161,0,254,133,0,253,165,2,253,165,0,253,165,0,253,197,0,254,165,0,229,100,0,49,33,4,0,0,0,24,128,0,221,68,0,254,229,0,229,101,0,24,161,12,0,0,0,66,8,1,165,20,0,214,154,0,239,93,1,165,20,0,66,8,0,165,20,0,255,255,1,0,0,0,189,247,0,247,190,0,165,20,0,115,174,0,206,89,0,247,190,0,82,170,0,0,0,0,255,255,0,165,20,0,0,0,0,82,170,0,247,190,0,214,154,0,41,69,0,0,0,0,255,255,0,189,247,3,165,20,0,0,0,0,165,20,0,255,255,1,99,44,0,148,178,0,222,251,0,247,190,0,41,69,15,0,0,0,131,3,0,254,166,0,254,165,0,106,98,4,0,0,0,16,96,0,213,68,0,254,133,0,253,165,0,253,165,1,253,165,0,253,165,0,253,229,0,245,133,0,49,33,0,0,0,0,8,32,0,204,164,0,254,230,0,122,194,1,0,0,0,122,226,0,254,101,0,253,165,3,253,165,0,253,165,0,253,165,0,254,133,0,229,165,0,40,225,4,0,0,0,81,225,0,254,133,0,254,197,0,147,100,0,0,0,14,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,82,170,0,255,255,0,99,44,2,0,0,0,189,247,0,132,48,0,0,0,0,255,255,0,165,20,0,132,48,0,247,190,0,189,247,2,0,0,0,255,255,0,99,44,4,0,0,0,165,20,0,255,255,2,0,0,0,99,44,0,255,255,0,99,44,14,0,0,0,24,128,0,245,132,0,255,6,0,204,164,4,0,0,0,8,64,0,204,196,0,254,165,0,253,165,0,253,165,0,254,37,0,254,69,0,254,69,0,254,37,0,254,134,0,254,37,0,57,33,0,0,0,0,8,64,0,221,36,0,255,198,0,131,35,1,0,0,0,131,34,0,254,230,0,253,229,0,253,197,0,253,165,3,253,165,0,253,165,0,254,133,0,221,100,0,24,160,4,0,0,0,172,3,0,254,229,0,253,229,0,32,194,14,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,148,178,0,247,190,6,0,0,0,255,255,0,222,251,0,255,255,0,222,251,3,0,0,0,255,255,0,222,251,2,214,154,0,173,117,0,0,0,0,165,20,0,255,255,2,165,20,0,239,93,0,222,251,15,0,0,0,130,194,0,254,198,0,254,69,0,65,129,4,0,0,0,163,227,0,254,198,0,253,165,0,253,165,0,253,165,0,221,4,0,204,196,1,212,228,0,221,68,0,212,228,0,40,225,0,0,0,0,8,32,0,155,195,0,213,133,0,90,34,1,0,0,0,106,130,0,238,5,0,245,197,0,254,69,0,254,101,0,253,229,0,253,165,1,253,165,0,253,165,0,253,165,0,254,166,0,188,100,4,0,0,0,41,0,0,245,197,0,254,229,0,147,100,0,0,0,13,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,148,178,0,255,255,6,0,0,0,255,255,0,247,190,0,165,20,0,255,255,0,173,117,2,0,0,0,255,255,0,189,247,2,165,20,0,132,48,0,0,0,0,165,20,0,255,255,0,165,20,0,189,247,0,255,255,0,214,154,15,0,0,0,16,64,0,229,36,0,255,6,0,188,68,4,0,0,0,81,225,0,254,165,0,253,229,0,253,165,0,254,5,0,245,165,0,40,225,0,0,0,0,8,32,0,8,32,0,8,64,0,8,32,0,0,0,1,0,0,0,0,0,0,8,0,2,0,0,0,0,0,0,32,160,0,65,129,0,122,194,0,196,164,0,254,69,0,254,37,0,253,165,1,253,165,0,253,165,0,253,197,0,254,165,0,106,130,4,0,0,0,163,163,0,255,6,0,237,133,0,32,193,13,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,99,44,0,255,255,0,82,170,2,0,0,0,214,154,0,189,247,0,0,0,0,255,255,0,165,20,0,0,0,0,148,178,0,255,255,0,132,48,1,0,0,0,255,255,0,99,44,4,0,0,0,165,20,0,255,255,1,0,0,0,115,174,0,255,255,0,165,20,14,0,0,0,114,195,0,254,133,0,254,69,0,73,161,3,0,0,0,16,96,0,229,100,0,254,101,0,253,133,0,253,165,0,254,5,0,245,165,0,16,128,16,0,0,0,0,0,0,90,2,0,245,165,0,254,37,0,253,165,1,253,165,0,253,133,0,254,69,0,245,229,0,32,192,3,0,0,0,49,33,0,254,5,0,254,166,0,122,195,13,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,1,0,0,0,189,247,0,247,190,0,148,178,0,115,174,0,206,89,0,255,255,0,82,170,0,0,0,0,255,255,0,165,20,1,0,0,0,189,247,0,247,190,0,82,170,0,0,0,0,255,255,0,148,178,3,99,44,0,41,69,0,165,20,0,255,255,2,0,0,0,165,20,0,255,255,0,99,44,12,0,0,0,0,0,0,196,165,0,255,6,0,220,228,0,8,32,3,0,0,0,114,194,0,254,166,2,253,165,0,254,5,0,245,165,0,32,193,0,0,0,17,0,0,0,73,161,0,253,229,0,253,229,0,253,165,1,253,165,0,253,165,0,254,165,0,139,99,3,0,0,0,0,0,0,196,132,0,255,6,0,196,133,0,0,0,12,0,0,0,132,48,0,173,117,2,0,0,0,132,48,0,214,154,2,0,0,0,148,178,0,206,89,0,214,154,0,173,117,0,99,44,1,0,0,0,214,154,0,132,48,1,0,0,0,41,69,1,206,89,0,0,0,5,214,154,0,82,170,0,132,48,0,214,154,3,0,0,1,206,89,12,0,0,0,32,160,0,253,165,0,254,198,0,131,34,3,0,0,0,16,64,0,221,36,0,254,69,0,253,133,1,253,165,0,253,197,0,253,165,0,204,164,0,196,132,0,204,196,0,90,34,0,0,0,2,0,0,0,0,0,0,114,162,0,172,36,0,155,131,0,131,34,0,90,66,0,24,128,5,0,0,0,155,131,0,254,101,0,253,165,1,253,165,0,253,133,0,254,37,0,237,133,0,32,160,3,0,0,0,114,162,0,254,197,0,253,229,0,32,226,65,0,0,0,81,225,0,254,69,0,254,69,0,73,161,3,0,0,0,81,225,0,254,69,0,253,197,0,253,165,1,253,165,0,253,165,0,253,165,0,254,69,0,254,69,0,254,230,0,229,100,0,16,96,2,0,0,0,0,0,0,196,228,0,255,38,0,254,69,1,254,101,0,229,133,0,73,193,4,0,0,0,73,161,0,254,69,0,253,197,3,253,165,0,254,101,0,114,162,3,0,0,0,49,33,0,254,5,0,254,134,0,98,99,65,0,0,0,139,2,0,254,198,0,237,133,0,16,96,3,0,0,0,155,195,0,254,133,0,253,133,4,253,165,0,253,165,0,253,165,0,254,37,0,229,68,0,24,160,2,0,0,0,0,0,0,180,68,0,254,69,0,253,133,0,253,165,0,253,165,0,254,165,0,229,100,0,24,128,3,0,0,0,57,65,0,254,5,0,253,229,2,253,165,0,253,133,0,254,101,0,180,68,3,0,0,0,0,0,0,221,4,0,254,230,0,155,132,64,0,0,0,0,0,0,188,36,0,255,6,0,196,132,3,0,0,0,8,32,0,221,4,0,254,69,0,253,165,5,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,180,68,0,254,101,0,253,165,0,253,165,0,253,165,0,253,229,0,254,5,0,57,97,3,0,0,0,57,97,0,254,37,0,253,229,2,253,165,0,253,165,0,254,37,0,245,133,0,24,128,3,0,0,0,180,3,0,255,6,0,196,100,0,0,0,63,0,0,0,16,129,0,221,37,0,254,229,0,163,195,3,0,0,0,40,225,0,253,197,0,254,5,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,188,100,0,254,101,0,253,165,0,253,197,0,253,229,0,254,230,0,221,4,0,16,96,3,0,0,0,106,98,0,254,101,0,253,165,3,253,165,0,253,229,0,254,37,0,65,97,3,0,0,0,139,35,0,254,230,0,221,5,0,8,97,63,0,0,0,49,33,0,245,165,0,254,165,0,131,2,3,0,0,0,81,225,0,254,37,0,253,229,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,196,228,0,255,38,0,254,69,0,254,69,0,254,37,0,196,196,0,49,33,3,0,0,0,8,32,0,212,228,0,254,37,0,253,165,3,253,165,0,253,197,0,254,101,0,106,98,3,0,0,0,98,98,0,254,165,0,245,133,0,41,1,23,0,0,3,99,44,0,82,170,1,0,0,0,99,44,0,66,8,3,0,0,0,99,44,0,66,8,24,0,0,0,57,97,0,253,229,0,254,133,0,106,130,3,0,0,0,106,130,0,254,101,0,253,197,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,90,66,0,139,67,0,122,226,0,98,98,0,57,97,0,8,0,3,0,0,0,41,1,0,213,4,0,254,165,0,253,133,4,253,165,0,253,165,0,254,101,0,139,3,3,0,0,0,82,2,0,254,101,0,253,229,0,57,65,23,0,0,0,255,255,0,222,251,1,214,154,0,255,255,0,132,48,0,0,0,0,189,247,0,247,190,0,66,8,1,0,0,0,173,117,0,247,190,0,82,170,24,0,0,0,65,162,0,254,5,0,254,101,0,90,66,3,0,0,0,122,226,0,254,101,0,253,197,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,13,0,0,0,49,33,0,180,100,0,254,5,0,254,37,0,253,165,4,253,165,0,254,133,0,147,99,3,0,0,0,73,161,0,254,69,0,254,37,0,65,162,23,0,0,0,255,255,0,99,44,1,0,0,0,173,117,0,222,251,0,0,0,0,41,69,1,222,251,0,0,0,0,115,174,0,255,255,0,115,174,25,0,0,0,73,162,0,254,6,0,254,101,0,90,34,3,0,0,0,130,226,0,254,101,0,253,197,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,15,0,0,0,57,65,0,229,132,0,254,37,0,253,165,3,253,165,0,254,101,0,155,98,3,0,0,0,65,129,0,254,37,0,254,37,0,73,194,23,0,0,0,255,255,0,148,178,0,99,44,0,132,48,0,222,251,0,173,117,1,0,0,0,82,170,0,247,190,0,173,117,0,247,190,0,165,20,26,0,0,0,65,162,0,254,5,0,254,133,0,98,66,3,0,0,0,122,194,0,254,101,0,253,197,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,81,225,0,139,34,0,122,226,0,114,130,0,90,34,0,49,33,0,0,0,5,0,0,0,73,161,0,254,5,0,253,197,3,253,165,0,254,133,0,147,67,3,0,0,0,73,194,0,254,69,0,254,5,0,65,130,23,0,0,0,255,255,0,222,251,1,214,154,0,255,255,0,173,117,2,0,0,0,132,48,0,255,255,0,214,154,27,0,0,0,57,98,0,253,229,0,254,165,0,106,130,3,0,0,0,98,66,0,254,69,0,253,197,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,196,228,0,255,38,0,254,101,0,254,101,0,254,69,0,254,5,0,204,228,0,73,161,5,0,0,0,188,67,0,254,69,2,253,165,0,253,197,0,254,101,0,130,226,3,0,0,0,82,2,0,254,133,0,253,197,0,49,33,23,0,0,0,255,255,0,99,44,1,0,0,0,99,44,0,255,255,0,82,170,2,0,0,0,255,255,0,99,44,27,0,0,0,41,1,0,237,133,0,254,197,0,139,35,3,0,0,0,65,129,0,254,37,0,253,229,6,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,188,100,0,254,101,0,253,165,0,253,197,0,253,197,0,254,5,0,254,165,0,254,5,0,49,33,4,0,0,0,131,2,0,254,101,0,253,165,1,253,165,0,253,197,0,254,69,0,98,66,3,0,0,0,106,162,0,254,165,0,237,101,0,32,225,23,0,0,0,255,255,0,99,44,1,0,0,0,165,20,0,255,255,0,82,170,2,0,0,0,255,255,0,99,44,27,0,0,0,8,97,0,213,5,0,254,230,0,171,227,3,0,0,0,32,160,0,245,165,0,254,5,0,253,165,5,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,180,68,0,254,101,0,253,165,1,253,165,0,253,165,0,253,165,0,254,133,0,139,66,4,0,0,0,122,194,0,254,101,0,253,197,1,253,165,0,254,5,0,254,5,0,49,33,3,0,0,0,147,99,0,254,230,0,212,229,0,8,65,23,0,0,3,255,255,0,247,190,0,173,117,3,0,0,0,255,255,0,99,44,27,0,0,0,0,0,0,188,36,0,254,230,0,212,196,0,0,0,2,0,0,0,0,0,0,204,196,0,254,101,0,253,165,5,253,165,0,253,165,0,254,37,0,221,36,0,24,128,2,0,0,0,0,0,0,180,68,0,254,101,0,253,165,1,253,165,0,253,165,0,253,165,0,254,165,0,122,194,4,0,0,0,131,2,0,254,101,0,253,165,0,253,165,0,253,165,0,254,69,0,229,68,0,8,64,3,0,0,0,188,68,0,255,6,0,180,36,0,0,0,64,0,0,0,147,100,0,254,197,0,245,165,0,32,193,3,0,0,0,139,67,0,254,133,0,253,133,3,253,165,0,253,165,0,253,197,0,253,229,0,254,101,0,237,132,0,32,160,2,0,0,0,0,0,0,188,132,0,254,165,0,253,197,0,253,229,0,254,5,0,254,69,0,254,165,0,221,36,0,24,128,4,0,0,0,155,163,0,254,101,1,253,165,0,253,133,0,254,133,0,163,227,3,0,0,0,8,64,0,229,68,0,254,230,0,139,68,65,0,0,0,82,3,0,254,69,0,254,101,0,90,2,3,0,0,0,65,97,0,254,5,0,253,229,0,253,165,2,253,165,0,253,165,0,253,197,0,253,229,0,254,101,0,196,196,0,16,64,2,0,0,0,0,0,0,188,132,0,254,165,0,253,229,0,253,229,0,245,133,0,212,228,0,131,34,0,16,64,4,0,0,0,8,32,0,229,36,0,254,5,0,253,165,0,253,165,0,253,197,0,254,69,0,90,1,3,0,0,0,73,129,0,254,69,0,254,101,0,73,195,65,0,0,0,24,161,0,253,165,0,254,197,0,155,131,3,0,0,0,0,0,0,196,164,0,254,133,0,253,133,1,253,165,0,253,165,0,254,37,0,180,35,0,57,65,0,65,129,0,24,160,3,0,0,0,0,0,0,49,33,0,81,193,0,65,129,0,57,97,0,32,225,0,0,0,6,0,0,0,114,162,0,254,69,0,253,165,0,253,165,0,253,133,0,254,101,0,213,4,0,8,64,3,0,0,0,131,34,0,254,229,0,245,133,0,24,129,65,0,0,0,0,0,0,188,101,0,254,229,0,237,68,0,16,96,3,0,0,0,90,1,0,254,133,0,253,197,2,253,165,0,254,133,0,114,162,19,0,0,0,65,129,0,253,229,0,254,5,1,253,165,0,253,197,0,254,165,0,114,194,3,0,0,0,8,32,0,212,228,0,255,6,0,180,37,0,0,0,66,0,0,0,98,99,0,254,101,0,254,133,0,106,98,3,0,0,0,0,0,0,196,132,0,254,133,0,253,133,0,253,165,0,253,197,0,254,69,0,57,65,17,0,0,0,32,192,0,139,34,0,253,229,0,254,37,0,253,165,0,253,165,0,253,133,0,254,101,0,213,4,0,8,32,3,0,0,0,81,193,0,254,101,0,254,101,0,98,67,3,0,0,6,212,164,0,81,225,0,131,2,0,212,164,3,0,0,1,171,227,0,0,0,0,81,225,0,212,164,0,81,225,2,0,0,0,98,66,0,212,164,0,114,162,2,0,0,0,81,225,0,212,164,0,131,2,2,0,0,0,81,225,0,212,164,2,0,0,0,98,66,0,188,35,1,212,164,0,163,163,0,81,225,3,0,0,0,81,225,0,163,163,1,212,164,0,204,100,0,98,66,7,0,0,0,16,129,0,229,69,0,254,229,0,204,164,0,0,0,3,0,0,0,49,33,0,254,69,0,254,37,0,253,133,0,253,229,0,253,197,0,81,226,0,40,225,1,41,1,0,49,33,0,41,1,0,8,32,0,0,0,0,0,0,0,24,160,0,48,224,0,16,96,1,0,0,0,24,128,0,57,65,0,73,193,0,114,194,0,171,227,0,229,68,0,254,101,0,254,5,0,253,165,0,253,165,0,253,133,0,253,229,0,254,133,0,73,193,4,0,0,0,180,68,0,255,6,0,229,37,0,16,97,3,0,0,2,163,163,0,253,165,0,188,35,1,163,163,0,65,97,0,163,163,0,253,165,3,0,0,1,212,164,0,0,0,0,98,66,0,253,165,0,98,66,2,0,0,0,212,164,0,253,165,0,237,36,2,0,0,0,98,66,1,253,165,0,81,225,1,0,0,0,98,66,0,253,165,1,0,0,0,131,2,0,253,165,0,237,36,0,171,227,0,147,67,0,212,164,0,245,100,0,98,66,1,0,0,0,81,225,0,245,100,0,212,164,0,147,67,0,131,2,0,204,100,0,253,165,0,131,2,7,0,0,0,131,4,0,254,165,0,254,101,0,98,66,4,0,0,0,114,162,0,254,197,0,253,197,0,253,165,0,253,165,0,253,197,0,253,197,0,253,229,0,253,197,0,254,37,0,253,197,0,49,33,0,0,0,0,8,32,0,196,163,0,254,198,0,114,194,1,0,0,0,122,226,0,254,197,0,254,37,0,254,101,0,254,101,0,254,37,0,253,165,0,253,165,0,253,165,0,253,165,0,253,197,0,254,198,0,147,99,4,0,0,0,73,161,0,254,69,0,254,197,0,122,228,7,0,0,0,253,165,0,98,66,2,0,0,0,163,163,0,253,165,3,0,0,1,212,164,0,0,0,0,98,66,0,253,165,0,98,66,1,0,0,0,65,97,0,253,165,0,163,163,0,253,165,0,114,162,1,0,0,0,98,66,0,253,165,0,245,100,0,237,36,0,40,225,0,0,0,0,98,66,0,253,165,1,0,0,0,245,100,0,204,100,3,0,0,0,204,100,0,253,165,1,0,0,0,245,100,0,204,100,3,0,0,0,188,35,0,212,164,7,0,0,0,24,161,0,237,134,0,254,197,0,229,68,0,8,64,4,0,0,0,155,163,0,254,198,0,253,197,0,253,165,0,253,229,0,254,5,0,254,5,0,254,5,0,254,69,0,253,229,0,49,33,0,0,0,0,8,32,0,213,4,0,255,134,0,131,3,1,0,0,0,131,2,0,254,198,0,253,197,0,253,197,0,253,165,0,253,165,1,253,165,0,253,165,0,253,197,0,254,198,0,172,35,0,0,0,3,0,0,0,0,0,0,204,196,0,255,5,0,237,134,0,16,129,7,0,0,0,253,165,0,98,66,2,0,0,0,163,163,0,253,165,3,163,163,0,237,36,0,212,164,0,0,0,0,98,66,0,253,165,0,98,66,1,0,0,0,188,35,0,237,36,0,0,0,1,212,164,1,0,0,0,98,66,0,253,165,0,131,2,0,245,100,0,204,100,0,0,0,0,98,66,0,253,165,0,0,0,0,98,66,0,253,165,0,98,66,3,0,0,0,98,66,0,253,165,0,98,66,0,81,225,0,253,165,0,98,66,14,0,0,0,122,228,0,254,133,0,254,165,0,147,67,4,0,0,0,0,0,0,172,35,0,254,197,0,253,229,0,253,133,1,253,165,0,253,165,0,253,229,0,245,165,0,49,33,0,0,0,0,8,32,0,204,164,0,254,230,0,122,194,1,0,0,0,122,226,0,254,101,0,253,165,3,253,165,0,253,165,0,253,197,0,254,198,0,196,164,0,8,32,4,0,0,0,114,162,0,254,165,0,254,134,0,114,164,8,0,0,0,253,165,0,98,66,2,0,0,0,163,163,0,253,165,3,212,164,0,245,100,0,212,164,0,0,0,0,98,66,0,253,165,0,98,66,0,0,0,0,40,225,0,245,100,0,163,163,0,0,0,0,131,2,0,253,165,0,98,66,0,0,0,0,98,66,0,253,165,0,98,66,0,114,162,0,253,165,0,147,67,0,98,66,0,253,165,0,0,0,0,98,66,0,253,165,0,98,66,3,0,0,0,40,225,0,253,165,0,147,67,0,114,162,0,253,165,0,81,225,1,0,0,3,212,164,8,0,0,0,0,33,0,196,165,0,254,197,0,254,37,0,81,225,4,0,0,0,0,0,0,155,131,0,254,133,0,254,37,0,253,165,1,253,165,0,254,5,0,245,133,0,32,193,1,0,0,0,196,131,0,255,6,0,106,130,1,0,0,0,114,161,0,254,133,0,253,165,1,253,165,0,253,165,0,253,165,0,254,5,0,254,165,0,172,3,0,8,32,4,0,0,0,65,97,0,253,229,0,254,229,0,204,165,0,0,0,8,0,0,0,253,165,0,98,66,2,0,0,0,163,163,0,253,165,3,0,0,1,212,164,0,0,0,0,98,66,0,253,165,0,98,66,0,0,0,0,147,67,4,253,165,0,204,100,0,0,0,0,98,66,0,253,165,0,98,66,0,0,0,0,171,227,0,253,165,0,147,67,0,253,165,0,0,0,0,40,225,0,253,165,0,188,35,3,0,0,0,114,162,0,253,165,1,65,97,0,253,165,0,131,2,1,0,0,1,98,66,0,147,67,0,253,165,9,0,0,0,57,99,0,254,38,0,254,197,0,237,133,0,32,160,5,0,0,0,106,130,0,254,5,0,254,101,0,253,229,0,253,165,0,253,229,0,245,165,0,73,162,0,16,96,0,40,225,0,204,196,0,254,198,0,139,35,0,16,128,0,16,128,0,139,66,0,254,101,2,253,165,0,253,197,0,254,101,0,254,37,0,131,2,0,0,0,4,0,0,0,16,64,0,221,68,0,254,229,0,254,6,0,49,98,9,0,0,0,253,165,0,98,66,2,0,0,0,163,163,0,253,165,3,0,0,1,212,164,0,0,0,0,98,66,0,253,165,0,98,66,0,0,0,0,237,36,0,188,35,2,0,0,0,163,163,0,253,165,0,65,97,0,98,66,0,253,165,0,98,66,1,0,0,0,220,228,1,253,165,1,0,0,0,212,164,0,245,100,0,81,225,1,0,0,0,81,225,1,220,228,1,0,0,0,220,228,0,245,100,0,81,225,2,0,0,0,163,163,0,253,165,10,0,0,0,106,132,0,254,133,0,254,165,0,213,4,0,24,128,5,0,0,0,49,1,0,172,35,0,254,69,0,254,101,0,253,229,0,253,165,0,245,165,0,229,133,0,237,133,0,253,165,0,253,165,0,245,165,0,229,133,0,237,133,0,245,165,1,253,165,0,253,229,0,254,69,0,254,101,0,188,100,0,65,129,5,0,0,0,8,32,0,196,132,0,254,197,0,254,134,0,98,100,10,0,0,0,253,165,0,98,66,2,0,0,0,163,163,0,253,165,3,0,0,1,212,164,0,0,0,0,98,66,0,253,165,0,98,66,0,131,2,0,253,165,0,98,66,2,0,0,0,40,225,0,253,165,0,188,35,0,98,66,0,253,165,0,98,66,1,0,0,0,65,97,0,245,100,0,253,165,1,0,0,0,40,225,0,220,228,0,253,165,0,237,36,0,220,228,0,253,165,0,220,228,0,40,225,1,0,0,0,40,225,0,220,228,0,253,165,0,220,228,0,212,164,0,237,36,0,253,165,0,188,35,10,0,0,0,0,0,0,163,229,0,254,165,0,254,165,0,204,196,0,24,128,6,0,0,0,81,225,0,180,67,0,253,197,0,254,101,0,254,165,0,254,165,0,254,101,0,253,229,0,253,165,0,254,5,0,254,69,0,254,101,0,254,69,0,254,69,0,254,101,0,253,229,0,196,100,0,90,34,0,0,0,5,0,0,0,8,32,0,180,35,0,254,165,0,254,166,0,155,165,0,0,0,10,0,0,0,163,163,0,65,97,2,0,0,0,98,66,0,163,163,3,0,0,1,131,2,0,0,0,0,65,97,0,163,163,0,65,97,0,98,66,0,163,163,4,0,0,0,131,2,0,163,163,0,65,97,0,163,163,0,65,97,2,0,0,0,98,66,0,163,163,3,0,0,0,81,225,0,147,67,0,163,163,0,98,66,5,0,0,0,98,66,0,147,67,0,163,163,0,131,2,0,65,97,12,0,0,0,0,33,0,180,101,0,254,197,0,254,133,0,204,228,0,24,128,7,0,0,0,49,33,0,130,226,0,188,67,0,229,68,0,253,197,0,254,37,1,254,69,0,254,37,0,253,229,0,229,68,0,196,100,0,131,35,0,57,65,7,0,0,0,8,64,0,188,132,0,254,165,0,254,197,0,172,37,0,0,1,78,0,0,0,8,33,0,188,133,0,254,165,0,254,133,0,229,100,0,73,161,9,0,0,0,16,96,0,49,33,0,73,161,0,81,193,0,81,193,0,73,161,0,49,65,0,24,128,9,0,0,0,57,97,0,220,228,0,254,165,0,254,197,0,180,69,0,0,33,80,0,0,0,8,65,0,172,69,0,254,165,0,254,133,0,253,229,0,131,2,0,8,32,23,0,0,0,0,0,0,114,162,0,245,165,0,254,165,0,254,166,0,164,5,0,0,33,82,0,0,0,0,0,0,131,36,0,254,102,0,254,165,0,254,101,0,212,228,0,90,1,0,0,0,20,0,0,0,81,225,0,196,132,0,254,101,0,254,197,0,254,102,0,122,228,0,0,0,84,0,0,0,0,0,0,73,195,0,205,37,0,254,166,0,254,197,0,254,37,0,196,100,0,98,66,0,24,128,15,0,0,0,16,64,0,90,2,0,188,35,0,254,5,0,254,229,0,254,198,0,205,5,0,65,195,88,0,0,0,8,65,0,139,100,0,245,230,0,254,197,0,254,197,0,254,101,0,221,36,0,155,131,0,89,226,0,24,128,0,0,0,7,0,0,0,0,0,0,16,96,0,73,193,0,147,99,0,212,196,0,254,101,0,254,229,0,254,198,0,245,198,0,131,68,0,8,65,91,0,0,0,32,226,0,139,100,0,229,101,0,254,134,0,254,229,0,254,197,0,254,69,0,237,133,0,212,164,0,163,227,0,131,35,0,114,195,0,106,98,0,106,65,0,114,162,0,131,35,0,163,195,0,204,164,0,237,100,0,254,69,0,254,197,0,254,230,0,254,134,0,229,134,0,139,68,0,32,194,94,0,0,0,0,0,0,32,226,0,106,163,0,196,133,0,245,197,0,254,101,0,254,198,0,254,230,0,254,230,0,254,197,0,254,165,0,254,165,0,254,165,0,254,165,0,254,197,0,254,229,0,254,230,0,254,198,0,254,102,0,245,197,0,188,133,0,106,131,0,32,226,0,0,0,98,0,0,0,0,0,0,32,194,0,90,67,0,147,132,0,180,68,0,212,229,0,237,101,0,245,165,0,253,229,0,253,197,0,245,165,0,237,133,0,213,5,0,180,68,0,147,100,0,90,35,0,32,194,0,0,0,105,0,0,0,0,0,0,16,97,0,40,225,0,49,33,0,57,98,0,57,65,0,49,33,0,41,1,0,16,129,0,0,0,255,0,0,68,0,0 };
} // VisuinoConstants

// Pin Call Declarations

namespace PinCalls
{
class PinCallerReceive0
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive1
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive2
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive3
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive4
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive5
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive6
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive7
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive8
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive9
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive10
{
public:
  void Notify( void *_Data );

};
} // PinCalls

// Call Chains

namespace CallChains
{
class IsEnabled1
{
public:
  inline static constexpr uint32_t Count() { return 2; }
  static void Call( int32_t AIndex, bool & AValue );

};
class TryConnect1
{
public:
  inline static constexpr uint32_t Count() { return 2; }
  static void Call( int32_t AIndex, bool & AValue );

};
class AssignDNS1
{
public:
  inline static constexpr uint32_t Count() { return 2; }
  static void Call( int32_t AIndex );

};
class StopSocket1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call();

};
class Render1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call();

};
class ProcessData1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call( int32_t AIndex, void * AData );

};
class AddFields1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call( String & AText );

};
class StartSplit1
{
public:
  inline static constexpr uint32_t Count() { return 11; }
  static void Call();

};
class SendValue1
{
public:
  inline static constexpr uint32_t Count() { return 11; }
  static void Call();

};
class ExtractElement1
{
public:
  inline static constexpr uint32_t Count() { return 11; }
  static void Call( const char * AName, Mitov::String & AText, bool & AResult );

};
class IsEnding1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call( bool & AResult );

};
} // CallChains

// Arduino Board Declarations

namespace BoardDeclarations
{
namespace Types
{
typedef Mitov::Arduino_ESP32_SPI<
  SPI1, // 0_SPI
  Mitov::ConstantProperty<23, uint32_t, 23 >, // MISO
  Mitov::ConstantProperty<22, uint32_t, 19 >, // MOSI
  Mitov::ConstantProperty<24, uint32_t, 18 > // SCK
   > BoardSPI1;
} // namespace Types

namespace Instances
{
BoardDeclarations::Types::BoardSPI1 BoardSPI1;
} // namespace Instances

} // BoardDeclarations

// Declarations

namespace Declarations
{
namespace Types
{
typedef Mitov::ESP32WiFiModule<
  Mitov::NestedProperty<35, Mitov::ESP32WiFiModuleAccessPoint<
    Mitov::ConstantProperty<12, uint32_t, 1 >, // Channel
    Mitov::NestedProperty<34, Mitov::ESPWiFiModuleAccessPointConfig<
      Mitov::ConstantProperty<15, bool, false >, // Enabled
      Mitov::NestedProperty<27, Mitov::TIPAddress<
        Mitov::ConstantProperty<23, uint8_t, 0 >, // Octet1
        Mitov::ConstantProperty<24, uint8_t, 0 >, // Octet2
        Mitov::ConstantProperty<25, uint8_t, 0 >, // Octet3
        Mitov::ConstantProperty<26, uint8_t, 0 > // Octet4
         > >, // Gateway
      Mitov::NestedProperty<21, Mitov::TIPAddress<
        Mitov::ConstantProperty<17, uint8_t, 0 >, // Octet1
        Mitov::ConstantProperty<18, uint8_t, 0 >, // Octet2
        Mitov::ConstantProperty<19, uint8_t, 0 >, // Octet3
        Mitov::ConstantProperty<20, uint8_t, 0 > // Octet4
         > >, // IP
      Mitov::NestedProperty<33, Mitov::TIPAddress<
        Mitov::ConstantProperty<29, uint8_t, 255 >, // Octet1
        Mitov::ConstantProperty<30, uint8_t, 255 >, // Octet2
        Mitov::ConstantProperty<31, uint8_t, 255 >, // Octet3
        Mitov::ConstantProperty<32, uint8_t, 0 > // Octet4
         > > // Subnet
       > >, // Config
    Mitov::ConstantProperty<9, bool, true >, // Enabled
    Mitov::ConstantProperty<13, bool, false >, // IsHidden
    Mitov::ConstantPropertyString<11, ::VisuinoConstants::TextValue0 >, // Password
    Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue0 > // SSID
     > >, // AccessPoint
  Mitov::EmbeddedCallChain<CallChains::AssignDNS1 >, // AccessPoints_AssignDNS
  Mitov::EmbeddedCallChain<CallChains::IsEnabled1 >, // AccessPoints_IsEnabled
  Mitov::EmbeddedCallChain<CallChains::TryConnect1 >, // AccessPoints_TryConnect
  Mitov::TextPin_NoImplementation<2 >, // AddressOutputPin
  Mitov::ConstantProperty<40, bool, true >, // AutoReconnect
  Mitov::TextPin_NoImplementation<4 >, // BSSIDOutputPin
  2, // COUNT_AccessPoints
  0, // COUNT_Scan_Elements
  1, // COUNT_Sockets
  false, // ESPNow
  Mitov::ConstantProperty<1, bool, true >, // Enabled
  Mitov::TypedVariable<36, uint32_t, ::ComponentVariables::Variable2 >, // FAccessPointIndex
  Mitov::TypedVariable<52, bool, ::ComponentVariables::Variable5 >, // FDNSUpdated
  Mitov::TypedVariable<48, bool, ::ComponentVariables::Variable3 >, // FIsStarted
  Mitov::TypedVariable<50, bool, ::ComponentVariables::Variable4 >, // FRemoteStarted
  Mitov::TextPin_NoImplementation<5 >, // GatewayIPOutputPin
  Mitov::ConstantPropertyString<41, ::VisuinoConstants::TextValue0 >, // HostName
  Mitov::NestedProperty<47, Mitov::TArduinoESP32WiFiLowPower<
    Mitov::ConstantProperty<45, bool, false >, // Enabled
    Mitov::ConstantProperty<46, bool, false > // MaxSaving
     > >, // LowPower
  Mitov::TextPin_NoImplementation<3 >, // MACOutputPin
  Mitov::DigitalPin_EmbeddedPinImplementation_ChangeOnly<7, ::PinCalls::PinCallerReceive0, Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable1 > >, // RemoteConnectedOutputPin
  Mitov::EmbeddedCallChain<CallChains::StopSocket1 >, // Sockets_StopSocket
  Mitov::TextPin_NoImplementation<6 >, // SubnetMaskIPOutputPin
  Mitov::ConstantPropertyFloat<42, float, ::VisuinoConstants::FloatValue0 > // TransmitPower
   > TArduinoESP32WiFiModule1;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiModule1 TArduinoESP32WiFiModule1;
} // Instances

namespace Types
{
typedef Mitov::ESP32ModuleRemoteAccessPoint<
  Declarations::Types::TArduinoESP32WiFiModule1, // 0_TYPE_OWNER
  Declarations::Instances::TArduinoESP32WiFiModule1, // 1_NAME_OWNER
  Mitov::NestedProperty<7, Mitov::ESPWiFiModuleOptionalChannel<
    Mitov::ConstantProperty<6, uint32_t, 1 >, // Channel
    Mitov::ConstantProperty<5, bool, false > // Enabled
     > >, // Channel
  Mitov::NestedProperty<51, Mitov::ESPWiFiModuleRemoteConfig<
    Mitov::NestedProperty<44, Mitov::TIPAddress<
      Mitov::ConstantProperty<40, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<41, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<42, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<43, uint8_t, 0 > // Octet4
       > >, // DNS1
    Mitov::NestedProperty<50, Mitov::TIPAddress<
      Mitov::ConstantProperty<46, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<47, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<48, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<49, uint8_t, 0 > // Octet4
       > >, // DNS2
    Mitov::ConstantProperty<20, bool, false >, // Enabled
    Mitov::NestedProperty<32, Mitov::TIPAddress<
      Mitov::ConstantProperty<28, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<29, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<30, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<31, uint8_t, 0 > // Octet4
       > >, // Gateway
    Mitov::NestedProperty<26, Mitov::TIPAddress<
      Mitov::ConstantProperty<22, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<23, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<24, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<25, uint8_t, 0 > // Octet4
       > >, // IP
    Mitov::NestedProperty<38, Mitov::TIPAddress<
      Mitov::ConstantProperty<34, uint8_t, 255 >, // Octet1
      Mitov::ConstantProperty<35, uint8_t, 255 >, // Octet2
      Mitov::ConstantProperty<36, uint8_t, 255 >, // Octet3
      Mitov::ConstantProperty<37, uint8_t, 0 > // Octet4
       > > // Subnet
     > >, // Config
  Mitov::ConstantProperty<1, bool, true >, // Enabled
  Mitov::NestedProperty<18, Mitov::ESPWiFiModuleOptionalMacAddress<
    Mitov::ConstantProperty<9, bool, false >, // Enabled
    Mitov::NestedProperty<17, Mitov::TMACAddress<
      Mitov::ConstantProperty<11, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<12, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<13, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<14, uint8_t, 0 >, // Octet4
      Mitov::ConstantProperty<15, uint8_t, 0 >, // Octet5
      Mitov::ConstantProperty<16, uint8_t, 0 > // Octet6
       > > // MacAddress
     > >, // MacAddress
  Mitov::ConstantPropertyString<3, ::VisuinoConstants::TextValue2 >, // Password
  Mitov::ConstantPropertyString<2, ::VisuinoConstants::TextValue1 > // SSID
   > TArduinoESP32WiFiModuleRemoteAccessPoint1;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiModuleRemoteAccessPoint1 TArduinoESP32WiFiModuleRemoteAccessPoint1;
} // Instances

namespace Types
{
typedef Mitov::ESP32ModuleRemoteAccessPoint<
  Declarations::Types::TArduinoESP32WiFiModule1, // 0_TYPE_OWNER
  Declarations::Instances::TArduinoESP32WiFiModule1, // 1_NAME_OWNER
  Mitov::NestedProperty<7, Mitov::ESPWiFiModuleOptionalChannel<
    Mitov::ConstantProperty<6, uint32_t, 1 >, // Channel
    Mitov::ConstantProperty<5, bool, false > // Enabled
     > >, // Channel
  Mitov::NestedProperty<51, Mitov::ESPWiFiModuleRemoteConfig<
    Mitov::NestedProperty<44, Mitov::TIPAddress<
      Mitov::ConstantProperty<40, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<41, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<42, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<43, uint8_t, 0 > // Octet4
       > >, // DNS1
    Mitov::NestedProperty<50, Mitov::TIPAddress<
      Mitov::ConstantProperty<46, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<47, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<48, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<49, uint8_t, 0 > // Octet4
       > >, // DNS2
    Mitov::ConstantProperty<20, bool, false >, // Enabled
    Mitov::NestedProperty<32, Mitov::TIPAddress<
      Mitov::ConstantProperty<28, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<29, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<30, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<31, uint8_t, 0 > // Octet4
       > >, // Gateway
    Mitov::NestedProperty<26, Mitov::TIPAddress<
      Mitov::ConstantProperty<22, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<23, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<24, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<25, uint8_t, 0 > // Octet4
       > >, // IP
    Mitov::NestedProperty<38, Mitov::TIPAddress<
      Mitov::ConstantProperty<34, uint8_t, 255 >, // Octet1
      Mitov::ConstantProperty<35, uint8_t, 255 >, // Octet2
      Mitov::ConstantProperty<36, uint8_t, 255 >, // Octet3
      Mitov::ConstantProperty<37, uint8_t, 0 > // Octet4
       > > // Subnet
     > >, // Config
  Mitov::ConstantProperty<1, bool, true >, // Enabled
  Mitov::NestedProperty<18, Mitov::ESPWiFiModuleOptionalMacAddress<
    Mitov::ConstantProperty<9, bool, false >, // Enabled
    Mitov::NestedProperty<17, Mitov::TMACAddress<
      Mitov::ConstantProperty<11, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<12, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<13, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<14, uint8_t, 0 >, // Octet4
      Mitov::ConstantProperty<15, uint8_t, 0 >, // Octet5
      Mitov::ConstantProperty<16, uint8_t, 0 > // Octet6
       > > // MacAddress
     > >, // MacAddress
  Mitov::ConstantPropertyString<3, ::VisuinoConstants::TextValue4 >, // Password
  Mitov::ConstantPropertyString<2, ::VisuinoConstants::TextValue3 > // SSID
   > TArduinoESP32WiFiModuleRemoteAccessPoint2;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiModuleRemoteAccessPoint2 TArduinoESP32WiFiModuleRemoteAccessPoint2;
} // Instances

namespace Types
{
typedef Mitov::TCPCACertSecureClientSocket<
  Declarations::Types::TArduinoESP32WiFiModule1, // 0_TYPE_OWNER
  Declarations::Instances::TArduinoESP32WiFiModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyString<19, ::VisuinoConstants::TextValue6 >, // CACert
  WiFiClientSecure, // CLIENT
  Mitov::ConstantPropertyString<17, ::VisuinoConstants::TextValue0 >, // Certificate
  Mitov::DigitalPin_EmbeddedPinImplementation_ChangeOnly<5, ::PinCalls::PinCallerReceive2, Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable7 > >, // ConnectedOutputPin
  Mitov::TypedVariableValue<23, bool, ::ComponentVariables::Variable9, true >, // Enabled
  Mitov::TypedVariable<21, bool, ::ComponentVariables::Variable8 >, // FIsConnected
  Mitov::VariablePropertyString<9, ::VisuinoConstants::TextValue5 >, // Host
  Mitov::NestedProperty<15, Mitov::TIPAddress<
    Mitov::ConstantProperty<11, uint8_t, 0 >, // Octet1
    Mitov::ConstantProperty<12, uint8_t, 0 >, // Octet2
    Mitov::ConstantProperty<13, uint8_t, 0 >, // Octet3
    Mitov::ConstantProperty<14, uint8_t, 0 > // Octet4
     > >, // IPAddress
  Mitov::ConstantProperty<20, bool, false >, // Insecure
  Mitov::GenericPin_EmbeddedPinImplementation<4, ::PinCalls::PinCallerReceive1 >, // OutputPin
  Mitov::VariableMaxPropertySharedBits<3, uint32_t, 443, ::ComponentVariables::Variable6, 65535 >, // Port
  Mitov::ConstantPropertyString<18, ::VisuinoConstants::TextValue0 >, // PrivateKey
  Mitov::ConstantProperty<16, uint32_t, 60000 > // ReconnectDelay
   > TArduinoESP32WiFiTCPSecureClientSocket1;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiTCPSecureClientSocket1 TArduinoESP32WiFiTCPSecureClientSocket1;
} // Instances

namespace Types
{
typedef Mitov::DisplayST77XXBrightness<
  Mitov::BasicSPI_ST7735<
      BoardDeclarations::Types::BoardSPI1, // 0_SPI_TYPE_PIN
      BoardDeclarations::Instances::BoardSPI1, // 1_SPI_NAME_PIN
      Mitov::DigitalPin_DirectBoardPinImplementation<5>, // ChipSelectOutputPin
      Mitov::DigitalPin_DirectBoardPinImplementation<16>, // RegisterSelectOutputPin
      Mitov::ConstantProperty<20, uint32_t, 8000000 > // SPISpeed
       >, // 0_IMPLEMENTATION
  Mitov::DisplayOrientationDown, // 0_IMPLEMENTATION_ORIENTATION
  Mitov::Display_ST7789_135_240, // 0_IMPLEMENTATION_TYPE
  4, // 2_BRIGHTNESS_PIN
  Mitov::ConstantPropertyColor<3, Mitov::TColor, uint32_t, 0x000000 >, // BackgroundColor
  Mitov::ConstantPropertyFloat<14, float, ::VisuinoConstants::FloatValue1 >, // Brightness
  Mitov::EmbeddedCallChain<CallChains::Render1 >, // Elements_Render
  Mitov::ConstantProperty<15, uint32_t, 0 >, // FCursorX
  Mitov::ConstantProperty<17, uint32_t, 0 >, // FCursorY
  Mitov::ConstantProperty<13, bool, false >, // Inverted
  Mitov::ConstantProperty<12, Mitov::TArduinoGraphicsOrientation, Mitov::goRight >, // Orientation
  Mitov::NestedProperty<325, Mitov::TArduinoDisplayST7735PixelOffset< Mitov::ConstantProperty<322, bool, false >, Mitov::ConstantProperty<323, uint8_t, 0 >, Mitov::ConstantProperty<324, uint8_t, 0> > >, // OverridePixelOffset
  Mitov::DigitalPin_DirectBoardPinImplementation<23>, // ResetOutputPin
  Mitov::NestedProperty<11, Mitov::TGraphicsTextSettings<
    Mitov::ConstantPropertyColor<10, Mitov::TAlphaColor, uint32_t, 0xFF000000 >, // BackgroundColor
    Mitov::ConstantPropertyColor<9, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
    Mitov::FixedSizeFont<GraphicsFont5x7, 6, 8>, // Font
    Mitov::ConstantProperty<6, uint32_t, 1 >, // Size
    Mitov::ConstantProperty<8, bool, false >, // UseCodePage437Symbols
    Mitov::ConstantProperty<7, bool, true > // Wrap
     > > // Text
   > TTTGOTDisplayESP32DisplayModule1;
} // Types

namespace Instances
{
Types::TTTGOTDisplayESP32DisplayModule1 TTTGOTDisplayESP32DisplayModule1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue7 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 0 > // Y
   > TArduinoColorGraphicsElementDrawText1;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText1 TArduinoColorGraphicsElementDrawText1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFD700 >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 20 > // Y
   > TArduinoColorGraphicsElementTextFeld1;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld1 TArduinoColorGraphicsElementTextFeld1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFD700 >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 66 > // Y
   > TArduinoColorGraphicsElementTextFeld2;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld2 TArduinoColorGraphicsElementTextFeld2;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue8 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 48 > // Y
   > TArduinoColorGraphicsElementDrawText2;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText2 TArduinoColorGraphicsElementDrawText2;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue9 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 92 > // Y
   > TArduinoColorGraphicsElementDrawText3;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText3 TArduinoColorGraphicsElementDrawText3;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFD700 >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 110 > // Y
   > TArduinoColorGraphicsElementTextFeld3;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld3 TArduinoColorGraphicsElementTextFeld3;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue10 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 100 >, // X
  Mitov::ConstantProperty<7, int32_t, 0 > // Y
   > TArduinoColorGraphicsElementDrawText4;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText4 TArduinoColorGraphicsElementDrawText4;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFD700 >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 100 >, // X
  Mitov::ConstantProperty<6, int32_t, 20 > // Y
   > TArduinoColorGraphicsElementTextFeld4;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld4 TArduinoColorGraphicsElementTextFeld4;
} // Instances

namespace Types
{
typedef Mitov::GraphicsColorRepeatElementDrawBitmap_565<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  2439, // COUNT
  Mitov::ConstantProperty<8, bool, false >, // Centered
  Mitov::ConstantPropertyArray<22, uint8_t, uint8_t, ::VisuinoConstants::ArrayValue0, 12195>, // DATA
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  60, // HEIGHT
  Mitov::ConstantProperty<7, uint32_t, 1 >, // Size
  120, // WIDTH
  Mitov::ConstantProperty<4, int32_t, 100 >, // X
  Mitov::ConstantProperty<5, int32_t, 60 > // Y
   > TArduinoColorGraphicsElementDrawBitmap1;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawBitmap1 TArduinoColorGraphicsElementDrawBitmap1;
} // Instances

namespace Types
{
typedef Mitov::MitovHTTPClient<
  Declarations::Types::TArduinoESP32WiFiTCPSecureClientSocket1, // 0_SOCKET_TYPE_PIN
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1, // 1_SOCKET_NAME_PIN
  1, // COUNT_Requests
  Mitov::ConstantProperty<9, bool, true >, // ConfigureSocket
  Mitov::TypedVariable<12, bool, ::ComponentVariables::Variable12 >, // FCollectBuffer
  Mitov::TypedVariable<18, bool, ::ComponentVariables::Variable15 >, // FDetectedCR
  Mitov::TypedVariable<20, bool, ::ComponentVariables::Variable16 >, // FDetectedNL
  Mitov::TypedVariable<10, uint32_t, ::ComponentVariables::Variable11 >, // FEndTime
  Mitov::TypedVariable<14, bool, ::ComponentVariables::Variable13 >, // FInProcessingContent
  Mitov::TypedVariable<16, bool, ::ComponentVariables::Variable14 >, // FNewLineDetected
  Mitov::TypedVariable<7, uint32_t, ::ComponentVariables::Variable10 >, // FRequestIndex
  Mitov::ConstantPropertyString<5, ::VisuinoConstants::TextValue5 >, // Host
  Mitov::EmbeddedCallChain<CallChains::ProcessData1 >, // Requests_ProcessData
  Mitov::ConstantPropertyString<6, ::VisuinoConstants::TextValue0 >, // UserAgent
  Mitov::ConstantPropertyString<4, ::VisuinoConstants::TextValue11 > // Version
   > HTTPClient1;
} // Types

namespace Instances
{
Types::HTTPClient1 HTTPClient1;
} // Instances

namespace Types
{
typedef Mitov::MitovHTTPClientRequest<
  Declarations::Types::HTTPClient1, // 0_TYPE_OWNER
  Declarations::Instances::HTTPClient1, // 1_NAME_OWNER
  Mitov::ConstantPropertyString<5, ::VisuinoConstants::TextValue13 >, // CacheControl
  Mitov::ConstantProperty<3, bool, true >, // ClockInputPin_o_IsConnected
  Mitov::ConstantPropertyString<6, ::VisuinoConstants::TextValue14 >, // Connection
  Mitov::ConstantPropertyString<8, ::VisuinoConstants::TextValue0 >, // Content
  Mitov::ConstantProperty<7, bool, false >, // ContentLength
  Mitov::ConstantPropertyString<4, ::VisuinoConstants::TextValue12 >, // ContentType
  Mitov::TypedVariable<18, bool, ::ComponentVariables::Variable17 >, // FClocked
  Mitov::EmbeddedCallChain<CallChains::AddFields1 >, // Fields_AddFields
  Mitov::TArduinoNetworkProtocolsHTTPClientRequestGET, // IMPLEMENTATION
  0, // INDEX
  Mitov::NestedProperty<15, Mitov::TArduinoNetworkProtocolsHTTPClientRequestResponse<
    Mitov::GenericPin_EmbeddedPinImplementation<12, ::PinCalls::PinCallerReceive3 >, // ContentOutputPin
    Mitov::GenericPin_NoImplementation<11 >, // OutputPin
    Mitov::TypedPin_NoImplementation<13, uint32_t >, // StatusCodeOutputPin
    Mitov::ClockPin_NoImplementation<14 > // TimeoutOutputPin
     > >, // Response
  Mitov::ConstantProperty<16, uint32_t, 15000 >, // Timeout
  Mitov::ConstantPropertyString<17, ::VisuinoConstants::TextValue15 > // URL
   > TArduinoNetworkProtocolsHTTPClientRequestGET1;
} // Types

namespace Instances
{
Types::TArduinoNetworkProtocolsHTTPClientRequestGET1 TArduinoNetworkProtocolsHTTPClientRequestGET1;
} // Instances

namespace Types
{
typedef Mitov::SplitJSON<
  Mitov::EmbeddedCallChain<CallChains::ExtractElement1 >, // Elements_ExtractElement
  Mitov::EmbeddedCallChain<CallChains::SendValue1 >, // Elements_SendValue
  Mitov::EmbeddedCallChain<CallChains::StartSplit1 >, // Elements_StartSplit
  Mitov::ClockPin_NoImplementation<4 >, // ErrorOutputPin
  Mitov::NestedProperty<9, Mitov::TArduinoSplitJSONObjectUnprocessed<
    Mitov::TextPin_NoImplementation<7 >, // NameOutputPin
    Mitov::TextPin_NoImplementation<8 > // ValueOutputPin
     > > // Unprocessed
   > SplitJSON1;
} // Types

namespace Instances
{
Types::SplitJSON1 SplitJSON1;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable18 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue16 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive4 > // OutputPin
   > TArduinoSplitJSONTextElement1;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement1 TArduinoSplitJSONTextElement1;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable19 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue17 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement2;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement2 TArduinoSplitJSONTextElement2;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable20 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue18 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement3;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement3 TArduinoSplitJSONTextElement3;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable21 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue19 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive5 > // OutputPin
   > TArduinoSplitJSONTextElement4;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement4 TArduinoSplitJSONTextElement4;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable22 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue20 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement5;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement5 TArduinoSplitJSONTextElement5;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable23 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue21 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive6 > // OutputPin
   > TArduinoSplitJSONTextElement6;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement6 TArduinoSplitJSONTextElement6;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable24 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue22 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement7;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement7 TArduinoSplitJSONTextElement7;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable25 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue23 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement8;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement8 TArduinoSplitJSONTextElement8;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable26 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue24 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement9;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement9 TArduinoSplitJSONTextElement9;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable27 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue25 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement10;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement10 TArduinoSplitJSONTextElement10;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable28 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue26 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive7 > // OutputPin
   > TArduinoSplitJSONTextElement11;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement11 TArduinoSplitJSONTextElement11;
} // Instances

namespace Types
{
typedef Mitov::ClockGenerator<
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::ConstantPropertyFloat<5, float, ::VisuinoConstants::FloatValue2 >, // Frequency
  Mitov::ClockPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive8 > // OutputPin
   > ClockGenerator1;
} // Types

namespace Instances
{
Types::ClockGenerator1 ClockGenerator1;
} // Instances

namespace Types
{
typedef Mitov::CharToText<
  Mitov::EmbeddedCallChain<CallChains::IsEnding1 >, // Elements_IsEnding
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::ConstantProperty<14, bool, true >, // EndOnNewLine
  Mitov::TypedVariable<9, uint32_t, ::ComponentVariables::Variable29 >, // FIndex
  2000, // MaxLength
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive9 >, // OutputPin
  Mitov::ConstantProperty<12, bool, false >, // Truncate
  Mitov::ConstantProperty<13, bool, false > // UpdateOnEachChar
   > CharToText1;
} // Types

namespace Instances
{
Types::CharToText1 CharToText1;
} // Instances

namespace Types
{
typedef Mitov::Delay<
  Mitov::ConstantProperty<8, bool, true >, // CanRestart
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::TypedVariable<9, bool, ::ComponentVariables::Variable30 >, // FValue
  Mitov::ConstantProperty<7, uint32_t, 2000000 >, // Interval
  Mitov::ClockPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive10 > // OutputPin
   > Delay1;
} // Types

namespace Instances
{
Types::Delay1 Delay1;
} // Instances

} // Declarations

// Type Converters

namespace TypeConverters
{
Mitov::Convert_BinaryBlockToChar Converter0;
Mitov::Convert_BinaryToClock<Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable31 >> Converter1;
Mitov::Convert_BinaryToClock<Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable32 >> Converter2;
} // TypeConverters

// Call Chains

namespace CallChains
{
void IsEnabled1::Call( int32_t AIndex, bool & AValue )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint1.IsEnabled( AValue ); break;
    case 1: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint2.IsEnabled( AValue ); break;
  }
}

void TryConnect1::Call( int32_t AIndex, bool & AValue )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint1.TryConnect( AValue ); break;
    case 1: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint2.TryConnect( AValue ); break;
  }
}

void AssignDNS1::Call( int32_t AIndex )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint1.AssignDNS(); break;
    case 1: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint2.AssignDNS(); break;
  }
}

void StopSocket1::Call()
{
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.StopSocket();
}

void Render1::Call()
{
  Declarations::Instances::TArduinoColorGraphicsElementDrawText1.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld1.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld2.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawText2.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawText3.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld3.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawText4.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld4.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawBitmap1.Render();
}

void ProcessData1::Call( int32_t AIndex, void * AData )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.ProcessData( AData ); break;
  }
}

void AddFields1::Call( String & AText )
{
}

void StartSplit1::Call()
{
  Declarations::Instances::TArduinoSplitJSONTextElement1.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement2.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement3.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement4.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement5.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement6.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement7.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement8.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement9.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement10.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement11.StartSplit();
}

void SendValue1::Call()
{
  Declarations::Instances::TArduinoSplitJSONTextElement1.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement2.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement3.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement4.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement5.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement6.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement7.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement8.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement9.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement10.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement11.SendValue();
}

void ExtractElement1::Call( const char * AName, Mitov::String & AText, bool & AResult )
{
  Declarations::Instances::TArduinoSplitJSONTextElement1.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement2.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement3.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement4.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement5.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement6.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement7.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement8.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement9.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement10.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement11.ExtractElement( AName, AText, AResult );
}

void IsEnding1::Call( bool & AResult )
{
}

} // CallChains

// Pin Call Declarations

namespace PinCalls
{
void PinCallerConverterReceive1( void *_Data );
void PinCallerConverterReceive2( void *_Data );
void PinCallerConverterReceive3( void *_Data );
} // PinCalls

// Pin Call Implementations

namespace PinCalls
{
void PinCallerReceive0::Notify( void *_Data )
{
  TypeConverters::Converter1.Convert( _Data, PinCallerConverterReceive1 );
}

void PinCallerConverterReceive1( void *_Data )
{
  Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.ClockInputPin_o_Receive( _Data );
}
void PinCallerReceive2::Notify( void *_Data )
{
  TypeConverters::Converter2.Convert( _Data, PinCallerConverterReceive2 );
}

void PinCallerConverterReceive2( void *_Data )
{
  Declarations::Instances::Delay1.StartInputPin_o_Receive( _Data );
}
void PinCallerReceive1::Notify( void *_Data )
{
  Declarations::Instances::HTTPClient1._DirectPinReceive( _Data );
}

void PinCallerReceive3::Notify( void *_Data )
{
  TypeConverters::Converter0.Convert( _Data, PinCallerConverterReceive3 );
}

void PinCallerConverterReceive3( void *_Data )
{
  Declarations::Instances::CharToText1.InputPin_o_Receive( _Data );
}
void PinCallerReceive4::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld3.InputPin_o_Receive( _Data );
}

void PinCallerReceive5::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld1.InputPin_o_Receive( _Data );
}

void PinCallerReceive6::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld4.InputPin_o_Receive( _Data );
}

void PinCallerReceive7::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld2.InputPin_o_Receive( _Data );
}

void PinCallerReceive8::Notify( void *_Data )
{
  Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.ClockInputPin_o_Receive( _Data );
}

void PinCallerReceive9::Notify( void *_Data )
{
  Declarations::Instances::SplitJSON1.InputPin_o_Receive( _Data );
}

void PinCallerReceive10::Notify( void *_Data )
{
  Declarations::Instances::CharToText1.ClockInputPin_o_Receive( _Data );
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.DisconnectInputPin_o_Receive( _Data );
}

} // PinCalls

namespace ComponentsHardware
{
void SystemUpdateHardware()
{
}
} // ComponentsHardware

//The setup function is called once at startup of the sketch
void setup()
{
  BoardDeclarations::Instances::BoardSPI1.SystemInit();
  Declarations::Instances::TArduinoESP32WiFiModule1.SystemInit();
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.SystemInit();
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1.SystemInit();
  Declarations::Instances::ClockGenerator1.SystemInit();
  Declarations::Instances::TArduinoESP32WiFiModule1.SystemStart();
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1.SystemStart();
  Declarations::Instances::ClockGenerator1.SystemStart();
}

// The loop function is called in an endless loop
void loop()
{
  Declarations::Instances::TArduinoESP32WiFiModule1.SystemLoopBegin();
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.SystemLoopBegin();
  Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.SystemLoopBegin();
  Declarations::Instances::ClockGenerator1.SystemLoopBegin();
  Declarations::Instances::Delay1.SystemLoopBegin();
}
