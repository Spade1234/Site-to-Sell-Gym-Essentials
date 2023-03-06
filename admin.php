<?php
session_start();
$host="localhost";
$user="root";
$password="";
$db="fithit";
$conn=mysqli_connect($host, $user, $password, $db,3308);
{
    if(!$conn)
    {
        die("connection failed".mysqli_connect_error());
    }
}
  $email=$_SESSION['userid'];
  $query="SELECT * FROM trainer where email='$email'";
    $connect=mysqli_query($conn,$query);
?>
<!DOCTYPE html>
<html>
  <head>
    <meta name="viewport" content="with=device-width, initial-scale=1.0">
        <title>gym website design</title>
        
        <link rel="stylesheet" href="gymhomepage.css">
        <link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Poppins:wght@200;300;400;600;700&display=swap" rel="stylesheet">
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/@fortawesome/fontawesome-free@5.15.4/css/fontawesome.min.css" integrity="sha384-jLKHWM3JRmfMU0A5x5AkjWkw/EYfGUAGagvnfryNV3F9VqM98XiIH7VBGVoxVSc7" crossorigin="anonymous">
<script src="https://kit.fontawesome.com/823da7cf51.js" crossorigin="anonymous"></script> 
<style>
  *{
    margin: 0;
    padding: 0;
    font-family: 'Poppins', sans-serif;
}
.header{
    min-height: 100vh;
    width: 100%;
    background-image: linear-gradient(rgba(4,9,30,0.7),rgba(4,9,30,0.7)),url(admin.jpeg);
    background-position: center;
    background-size: cover;
    position: relative;
}
nav{
    display: flex;
    padding: 2% 6%;
    justify-content: space-between;
    align-items: center;
}
nav img{
    width: 150px;
}
.nav-links{
    flex: 1;
    text-align: right;
}
.nav-links ul li{
    list-style: none;
    display: inline-block;
    padding: 8px 12px;
    position: relative;
}
.nav-links ul li a{
    color: #fff;
    text-decoration: none;
    font-size: 13px;
}
.nav-links ul li::after{
    content: '';
    width: 0%;
    height: 2px;
    background: #f44336;
    display: block;
    margin: auto;
    transition: 0.5s;
}
.nav-links ul li:hover::after{
    width: 100%;
}

.text-box{
    width: 90%;
    color: #fff;
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%,-50%);
    text-align: center;

}
.text-box h1{
    font-size: 62px;
}
.text-box p{
    margin: 10px 0 40px;
    color: #fff;
}
.video-container{
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
}
.hero-btn{
    display: inline-block;
    text-decoration: none;
    color: #fff;
    border: 1px solid #fff;
    padding: 12px 34px;
    font-size: 13px;
    background: transparent;
    position: relative;
    cursor: pointer;
}
.hero-btn:hover{
    border: 1px solid #f44336;
    background: #f44336;
    transition: 1s;
}

nav.fa{
    display: none;
}

@media(max-width: 700px){       
    .text-box h1{
        font-size: 20px;
}
.nav-links ul li{
    display: block;
}
.nav-links{
    position: absolute;
    background: #f44336;
    height: 100vh;
    width: 200px;
    top: 0;
    right: 0;
    text-align: left;
    z-index: 2;

}
nav .fa{
    display: block;
    color:#fff;
    margin: 10px;
    font-size: 22px;
    cursor: pointer;
}
.nav-links ul{
    padding: 30px;
}
} 

</style>
</head>
  <body>
    <section class="header">
    <nav>
      <a href="gymhomepage.html"><img src="gymgym.png"></a>
      <div class="nav-links">
        <ul>
            <?php
                $_SESSION['email']=$email;
            ?>
          <li><a href="admin.php">HOME</a></li>
          <li><a href="adminbatch.php">BATCH</a></li>
          <li><a href="adminuser.php">USERS</a></li>
          <li><a href="admintrainer.php">TRAINER</a></li>
          <li><a href="adminequip.php">EQUIPMENT</a></li>
          <li><a href="adminpayment.php">PAYMENT</a></li>
          <li><a href="alogout.php">LOGOUT</a></li>
        </ul>
      </div>
    </nav>
<div class="text-box">

  <h1>FIT HIT</h1>
  <p>LIVE. MOVE. REFUEL</p>
  <?php $rows=mysqli_fetch_assoc($connect);
  ?>
  <p><h3>Hello, <?php echo $rows['tfname'];?></h3></p>
  
</div>
    </section>
    </body></html>