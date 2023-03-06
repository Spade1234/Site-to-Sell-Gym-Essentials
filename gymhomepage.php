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
  $email=$_SESSION['email'];
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
</head>
  <body>
    <section class="header">
    <nav>
      <a href="gymhomepage.html"><img src="gymgym.png"></a>
      <div class="nav-links">
      <?php
            $_SESSION['email']=$email;
            ?>
        <ul>
          <li><a href="gymhomepage.php">HOME</a></li>
          <li><a href="profile.php">PROFILE</a></li>
          <li><a href="#het">BATCH</a></li>
          <li><a href="gympayment.html">PAYMENT</a></li>
          <li><a href="gymcontact.html">CONTACT</a></li>
          <li><a href="logout.php">LOGOUT</a></li>
        </ul>
      </div>
    </nav>
<div class="text-box">
  <h1>FIT HIT</h1>
  <p>LIVE. MOVE. REFUEL</p>
  <?php
  $email=$_SESSION['email'];
  $query="SELECT * FROM login where email='$email'";
    $connect=mysqli_query($conn,$query);
   $rows=mysqli_fetch_assoc($connect);
  ?>
  <p><h3>Logged in using: <?php echo $rows['email'];?></h3></p>
  <!-- <a href="gymcontact.html" class="hero-btn">Visit us to know more</a> -->
</div>
    </section>
    <!--------------ABOUT------------------------>
    <section class="about">
      <h1>About Gym</h1>
      <p>HIT FIT Fitness offers a personalized, accessible, and inclusive place for your workout!<br>
         Achieve your individual fitness goals under the supervision of certified trainers. Get added benefits of qualified<br>
        equipments, spacious workout area, seperate workout area for ladies and shower facilities.</p>
      <div class="row">
        <div class="about-col">
          <img class="img-responsive image-resiz" src="f1.jpg">
          <div class="layer">
            <h3>SPACIOUS WORKOUT AREA</h3>
          </div>
        </div>
        <div class="about-col">
          <img class="img-responsive image-resiz" src="f2.jpg">
          <div class="layer">
            <h3>QUALITY EQUIPMENTS</h3>
          </div>
        </div>
        <div class="about-col">
          <img class="img-responsive image-resiz" src="f3.jpg">
          <div class="layer">
            <h3>SEPERATE AREA FOR LADIES</h3>
          </div>
        </div>
      </div>
    </section>
    <!--------------batch------------------------>
    <section class="batch" id="het">
      <h1>Batches we offer</h1>
      <p>We offer various batches for our trainees to select according to their convenience </p>
      <div class="row">
        <div class="batch-col">
          <h3>batch </h3>
          <p>Timing: 6:00am-8:00am<br>
          <u>Fees per month:</u><br>
          With Trainer: Rs 1000/-<br>
          Without Trainer: Rs 700/-
          </p>
        </div>
        <div class="batch-col">
          <h3>batch </h3>
          <p>Timing: 9:00am-12:00pm<br>
            <u>Fees per month:</u><br>
            With Trainer: Rs 1200/-<br>
            Without Trainer: Rs 1000/-
            </p>
        </div>
        <div class="batch-col">
          <h3>batch </h3>
          <p>Timing: 2:00pm-5:00pm<br>
            <u>Fees per month:</u><br>
            With Trainer: Rs 1200/-<br>
            Without Trainer: Rs 1000/-
            </p>
        </div>
        <div class="batch-col">
        <a href="gymbatchlist.php">
          
          <p>Click here to know more about the batches
            </p>
</a>
        </div>
      </div>
    </section>
    <!--------------motivation-------------->
    <section class="Motivation">
      <h1>Transformation</h1>
      <p>We are glad that from past 7 years we have been transforming many lives</p>
      <div class="row">
        
        <div class="motivation-col">
          <img class="img-responsive image-resize" src="f2f1.jpeg">
          <h3>Name:Steve</h3>
          <p>40 years<br>
            Lost 12 kgs in 10 months
          </p>
        </div>
        <div class="motivation-col">
          <img class="img-responsive image-resize" src="f2f2.jpeg">
          <h3>Name:Ajay</h3>
          <p>36 years<br>
            Gained 8 kgs in 5 months
          </p>
        </div>
        <div class="motivation-col">
          <img class="img-responsive image-resize" src="f2f3.jpeg">
          <h3>Name:Rakesh</h3>
          <p>48 years<br>
            Lost 10 kgs in 4 months
          </p>
        </div>
      </div>
      </section>
      <!---------------------trainer-------------------->
<section class="trainer">
  <h1>Our Trainers</h1>
  <p>Our qualified trainers are:</p>
  <div class="row">
    
    <div class="trainer-col">
      <img class="img-responsive image-resize" src="t1.png">
      <h3>Name:Prakhyath</h3>
      <p>Fitness and Diet Coach<br>
        7 years experience<br>
        <b><u>Area of Expertise</u></b>
        <ul><li>stamina</li><li>strength</li></ul>
      </p>
    </div>
    <div class="trainer-col">
      <img class="img-responsive image-resize" src="t2.jpeg">
      <h3>Name:Palash</h3>
      <p>Fitness and Diet Coach<br>
        10 years experience<br>
        <b><u>Area of Expertise</u></b>
        <ul><li>cardio</li><li>strength</li></ul>
      </p>
    </div>
    <div class="trainer-col">
      <img class="img-responsive image-resize" src="t3.jpeg">
      <h3>Name:Nithish</h3>
      <p>Fitness and Diet Coach<br>
        9 years experience<br>
        <b><u>Area of Expertise</u></b>
        <ul><li>yoga</li><li>flexibility</li></ul>
      </p>
    </div>
  </div>  
  </section>    
      
<!--------------------call to action--------------------->
<section class="cta">
  <h1>You are just one step away from a healthy life<br>Click to register</h1>
  <a href="enrollmentform.php" class="hero-btn">REGISTER</a>
</section>
<!--------------------footer--------------------->
<section class="footer">
  <h4>About Us</h4>
  <p>Follow Us On:
  </p>
  <div id="AboutUs" class="icons">
    <a href="https:facebook.com"><i class="fab fa-facebook"></i></a>
    <a href="https:whatsapp.com"><i class="fab fa-whatsapp-square"></i></a>
    <a href="https:twitter.com"><i class="fab fa-twitter-square"></i></a>
    <a href="https:linkedin.com"><i class="fab fa-linkedin"></i></a>
    <a href="https:instagram.com"><i class="fab fa-instagram-square"></i></a>
    <a href="about.html"><h5>Learn More..</h5></a>
   
  </div>
  <p>Made with <i class="fa fa-heart-o" aria-hidden="true"></i> by Pratheeksha square</p>
</section>

  </body>
</html>