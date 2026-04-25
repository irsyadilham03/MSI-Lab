#include "Arduino.h"
#define index_ov2640_html_gz_len 0
#define index_ov3660_html_gz_len 0
#define index_ov5640_html_gz_len 0

const char index_ov2640_html_gz[] PROGMEM = R"rawliteral(
<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width,initial-scale=1">
    <title>ESP32-CAM Servo Control</title>
    <style>
        body { font-family: Arial; text-align: center; }
        .btn { padding: 10px 20px; background: #07c160; color: white; border: none; cursor: pointer; }
        img { width: 100%; max-width: 400px; }
    </style>
</head>
<body>
    <h1>Face Tracking Console</h1>
    <img id="stream" src="">
    <br><br>
    <button class="btn" onclick="startStream()">Start Stream</button>
    <button class="btn" onclick="toggleDetect()">ON Face Detection</button>
    
    <script>
        function startStream() {
            document.getElementById('stream').src = window.location.origin + ':81/stream';
        }
        function toggleDetect() {
            fetch(window.location.origin + '/control?var=face_detect&val=1');
            alert("Face Detection ON! Sekarang cuba letak muka depan kamera.");
        }
    </script>
</body>
</html>
)rawliteral";

const char index_ov3660_html_gz[] PROGMEM = "";
const char index_ov5640_html_gz[] PROGMEM = "";
