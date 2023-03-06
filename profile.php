<?php
session_start();
$email=$_SESSION['email'];
echo "$email";


$host="localhost";
$user="root";
$pssword="";
$db="fithit";
$conn=mysqli_connect($host, $user, $pssword, $db,3308);
{
    if(!$conn)
    {
        die("connection failed".mysqli_connect_error());
    }

}
$query="SELECT * from user where email='$email'";
$connect=mysqli_query($conn,$query);

$queryB="SELECT * FROM batch";
$connectB=mysqli_query($conn,$queryB);




?>

<!DOCTYPE html>
<html>
    <head>
        <link rel="stylesheet" href="./style.css">
        <title>ENROLLMENT FORM</title>
        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;400&display=swap" rel="stylesheet">   
    </head>
    <style>


body{
    background-image: url(registration.jpeg);
    font-family: 'Roboto', sans-serif;
}

.body{
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    color: white;
}
input[type=text],input[type=number],input[type=email]{
    outline: none;
    height: 40px;
    width: 500px;
    border-radius: 5px;
}
label,p,input[type=radio]{
    color: white;
}
input[type="submit"]{
    width: 150px;
    height: 50px;
    color: white;
    background-color: black;
    border: 3px solid white;
    border-radius: 10px;
    transition: 0.5s;
}
input[type="submit"]:hover{
    background-color: white;
    color: black;
    
}
    </style>
<body>
    <div class="img">
        <?php
        $rows=mysqli_fetch_assoc($connect);
        $temp=mysqli_num_rows($connect);
        
        
          if($temp==0) 
          {
             ?>
               <script type="text/javascript">
               alert("You have not registered yet");
               window.location.href="gymhomepage.php";
             </script>
             <?php
          }
          if($rows)
          {
           ?>
             

        <h2 style="color: white;margin-left: 42%;">PROFILE</h2>
        <form action="pmodify.php" method="post">
        <div class="body">
        <strong> <label for="fname">First Name</label>
          <br>
          <input type="text" id="fname" name="fname" value="<?php echo $rows['ufname'];?>" required><br>
          <br>
          <label for="mname">Middle Name</label>
          <br>
          <input type="text" id="mname" name="mname" value="<?php echo $rows['umname'];?>" required><br>
          <br>
          <label for="lname">Last Name</label>
          <br>
          <input type="text" id="lname" name="lname" value="<?php echo $rows['ulname'];?>" required><br>
          <br>
          <p>Gender</p>
          
           
          <input type="radio" name="gradio" value="male" <?php if($rows['ugender']=="male") {echo "checked"; }?> >Male
          <span class="checkmark"></span>
        <br>
                 
            <input type="radio" name="gradio" value="female" <?php if($rows['ugender']=="female") {echo "checked";}?> >Female
            <span class="checkmark"></span>
          <br>
          <input type="radio" name="gradio" value="other"<?php if($rows['ugender']=="other") {echo "checked";}?> >Other
            <span class="checkmark"></span>
          <br>
          <br>
          <label for="weight">Your current weight(kgs)</label><br>
          <input type="number" id="weight" name="weight" value="<?php echo $rows['uweight'];?>" required><br>
          <br>
          <label for="height">Height(ft)</label><br>
          <input type="number" id="height" name="height" value="<?php echo $rows['uheight'];?>" required><br>
          <br>
          <label for="age">Your age</label><br>
          <input type="number" id="age" name="age"value="<?php echo $rows['uage'];?>" required><br>
          <br>
          <label for="dweight">Desired weight(kgs)</label><br>
          <input type="number" id="dweight" name="dweight" value="<?php echo $rows['udweight'];?>" required><br>
          <br>
          <label for="address">Home Address</label> <br>
          <input type="text" id="address" name="address" value="<?php echo $rows['address'];?>" required><br>
          <br>
         <!-- <label for="email">Email</label><br>
          <input type="email" id="email" name="email" required><br>
          <br> -->

          <label for="phno">Phone</label><br>
          <input type="number" id="phno" name="phno" value="<?php echo $rows['uphno'];?>" required><br>
          <br>

          <p>select your personal trainer</p>
          <input type="radio" name="radio" <?php if($rows['tid']=="1") {echo "checked"; }?> value="1">Prakhyath
          <span class="checkmark"></span>
        <br>
        <input type="radio" name="radio" <?php if($rows['tid']=="2") {echo "checked"; }?> value="2">Palash
          <span class="checkmark"></span>
        <br>
        <input type="radio" name="radio" <?php if($rows['tid']=="3") {echo "checked"; }?> value="3">Nithish
          <span class="checkmark"></span>
        <br>
          
    
          <p>Have you been to gym before</p>
          <div>
            <input type="radio" checked="checked" name="gyradio">
            <label class="container">Yes
        <br>
                
                <span class="checkmark"></span>
              </label><br>
              <input type="radio" checked="checked" name="gyradio">
              <label class="container">No
               <span class="checkmark"></span>
              </label><br>
        </div>
        <p>Choose your batch:</p>
        <?php
           while($roww= mysqli_fetch_assoc($connectB)){
        ?>
          
          <input type="radio" name= "bradio" value="<?php echo $roww['bid']?>" <?php if($rows['bid']==$roww['bid']) {echo "checked"; } ?>>
          <label class="container"><?php echo $roww['stime']." to ".$roww['etime'];?>
          
          
          <br>
           
          <?php
          //  if($rows['bid']==$roww['bid']) {echo "checked";
           }
           
           
           ?>
           
            <!-- <input type="radio" name="radio"> value="3">Nithish
          <span class="checkmark"></span> -->

          <br>
          <div style="display:flex;align-items: center;justify-content: center;">
            <input type="submit" name="enroll" value="UPDATE">
            
        </div>
        </strong>
        </div>
         <?php 
          }
          ?> 
    

    </div>

 </body>

</html>