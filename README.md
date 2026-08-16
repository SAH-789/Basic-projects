<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>C++ Projects</title>
<style>
  :root{
    --bg:#0d1117;
    --panel:#151b23;
    --border:#26303c;
    --text:#e6edf3;
    --muted:#8b96a5;
    --accent:#4f8cff;
    --accent2:#ff6b6b;
  }
  *{box-sizing:border-box;}
  body{
    margin:0;
    background:var(--bg);
    color:var(--text);
    font-family:'Segoe UI', system-ui, sans-serif;
    padding:50px 20px;
  }
  h1{
    text-align:center;
    font-size:2.2rem;
    margin-bottom:45px;
    letter-spacing:1px;
    opacity:0;
    animation:fadeDown .7s ease forwards;
  }
  .container{
    max-width:720px;
    margin:0 auto;
    display:flex;
    flex-direction:column;
    gap:40px;
  }
  .section-title{
    font-size:1.2rem;
    font-weight:600;
    margin-bottom:16px;
    padding-bottom:8px;
    border-bottom:2px solid var(--border);
    opacity:0;
    animation:fadeDown .6s ease forwards;
  }
  .section-title.pw{ color:var(--accent2); border-color:var(--accent2); }
  .section-title.gen{ color:var(--accent); border-color:var(--accent); }

  .card{
    background:var(--panel);
    border:1px solid var(--border);
    border-radius:10px;
    padding:14px 18px;
    margin-bottom:12px;
    opacity:0;
    transform:translateX(-25px);
    animation:slideIn .5s ease forwards;
    transition:transform .25s ease, border-color .25s ease, box-shadow .25s ease;
  }
  .card:hover{
    transform:translateX(0) scale(1.02);
    border-color:var(--accent);
    box-shadow:0 6px 18px rgba(0,0,0,.35);
  }
  .card b{ color:var(--text); }
  .card span{ color:var(--muted); font-size:.92rem; }

  .pw-card:hover{ border-color:var(--accent2); }

  @keyframes fadeDown{
    from{opacity:0; transform:translateY(-12px);}
    to{opacity:1; transform:translateY(0);}
  }
  @keyframes slideIn{
    from{opacity:0; transform:translateX(-25px);}
    to{opacity:1; transform:translateX(0);}
  }

  .container .card:nth-child(1){animation-delay:.1s;}
</style>
</head>
<body>

<h1>C++ Projects</h1>

<div class="container">

  <div>
    <div class="section-title gen">General Projects</div>
    <div class="card" style="animation-delay:.15s"><b>ATM.cpp</b> — <span>Simple ATM banking simulation system</span></div>
    <div class="card" style="animation-delay:.25s"><b>CALC.cpp</b> — <span>Basic calculator for arithmetic operations</span></div>
    <div class="card" style="animation-delay:.35s"><b>QUIZGAME.cpp</b> — <span>Interactive quiz game with scoring</span></div>
    <div class="card" style="animation-delay:.45s"><b>ordertaking.cpp</b> — <span>Restaurant/food order taking system</span></div>
    <div class="card" style="animation-delay:.55s"><b>patientmanage.cpp</b> — <span>Hospital patient records management system</span></div>
  </div>

  <div>
    <div class="section-title pw" style="animation-delay:.5s">🔐 Password-Related Projects</div>
    <div class="card pw-card" style="animation-delay:.65s">🔑 <b>Random Password Generator</b> — <span>Generates strong random passwords</span></div>
    <div class="card pw-card" style="animation-delay:.75s">🛡️ <b>Password Security Checker</b> — <span>Checks password strength and safety</span></div>
    <div class="card pw-card" style="animation-delay:.85s">🔒 <b>Caesar Cipher</b> — <span>Basic text encryption and decryption tool</span></div>
  </div>

</div>

</body>
</html>
