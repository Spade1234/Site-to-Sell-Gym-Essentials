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


//mysqli_select_db($db);
if(isset($_POST['save']))
    {
        $email=$_POST['email'];
        $pssword_1=$_POST['pssword_1'];
        $sql="select * from login where email='".$email."'AND pssword_1='".$pssword_1."'limit 1";
        $result=mysqli_query($conn,$sql);
        $_SESSION['email']=$email;
        if(mysqli_num_rows($result)==1)
        {
            header('Location: gymhomepage.php');
            exit();
        }
        else
        {
          echo"email or password error";
           exit();   
        }

    }
    ?>

<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">

    <title>Hello, world!</title>
<style>
*{
padding: 0;
margin: 0;
box-sizing: border-box;
}
body{
background: rgb(219, 226,226);
}
.row{
background: white;
border-radius: 30px;
box-shadow: 12px 12px 22px white;
}
img{
border-top-left-radius: 30px;
border-bottom-left-radius: 30px;
}
.btn1{
border: none;
outline:none;
height: 50px;
width: 100%;
background-color: black;
color: white;
border-radius: 4px;
font-weight: bold;
}
.btn1:hover{
background: white;
border: 1px solid;
color: black;
}
</style>
  </head>
  <body>
    
    <section class="Form my-4 mx-5">   
       <div class="container">
        <div class="row no-gutters">
             <div class="col-lg-5">
                <img src="gym.jpg" class="img-fluid" alt="">
             </div>
             <div class="col-lg-7 px-5 pt-5">
<h1 class="font-weight-bold py-3">FITHIT</h1>
<h4>Sign in to your account</h4>

<form method="POST" action="gymlogin.php">
<div class="form row">
<div class="col-lg-7">
<input type="email" placeholder="Email-Address" name="email" class="form-cotrol my-2 p-2">
</div>
</div>
<div class="form row">
<div class="col-lg-7">
<input type="password" placeholder="******" name="pssword_1" class="form-cotrol my-3 p-2">
</div>
</div>
<div class="form row">
<div class="col-lg-7">
<button type="submit" name="save" value="redirect" class="btn1 mt-3 mb-5"> Login </button>
</div>
</div>
<p>Are you admin? <a href="adminlogin.php">Go to admin login</a></p>
<p>Don't have an account? <a href="register.html">Register here</a></p>
</form>
</div>
</div>
          </div>
    </section> 
  </body>
</html>



