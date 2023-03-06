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
      /* div {
    background-image: url(./gym2.jpeg);
  background-color: black;
    padding: 200px 100px;
    margin: 100px;
    width: 100%;
    
}
form{
   color: aliceblue;
    text-align: left;
    size: 5px;
   border: white 1px solid;
}
.body{
    color:rgb(233, 233, 233);
}
h2{
    color: rgb(233, 233, 233);
    text-align: center;
    size: 5px;
}
.button{
    border-color: aliceblue;
    outline:none;
    height: 50px;
    width: 50%;
    background-color: rgb(10, 10, 10);
    color: rgb(233, 233, 233);
    border-radius: 4px;
    font-weight: bold;

} */


body{
    background-image: url(registration.jpeg);
    font-family: 'Roboto', sans-serif;
}

.body{
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
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
        <h2 style="color: white;margin-left: 42%;">ENROLLMENT FORM</h2>
        <form action="enroll.php" method="post">
        <div class="body">
        <strong> <label for="fname">First Name</label>
          <br>
          <input type="text" id="fname" name="fname" required><br>
          <br>
          <label for="mname">Middle Name</label>
          <br>
          <input type="text" id="mname" name="mname"><br>
          <br>
          <label for="lname">Last Name</label>
          <br>
          <input type="text" id="lname" name="lname"><br>
          <br>
          <p>Gender</p>

          <input type="radio" name="gradio" value="male" >
          <label class="container">Male
           
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" name="gradio" value="female">
          <label class="container">Female
           
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" name="gradio" value="other">
          <label class="container">Other
           
            <span class="checkmark"></span>
          </label><br>
          <br>
          <label for="weight">Your current weight(kgs)</label><br>
          <input type="number" id="weight" name="weight" required><br>
          <br>
          <label for="height">Height(ft)</label><br>
          <input type="number" id="height" name="height" required><br>
          <br>
          <label for="age">Your age</label><br>
          <input type="number" id="age" name="age" required><br>
          <br>
          <label for="dweight">Desired weight(kgs)</label><br>
          <input type="number" id="dweight" name="dweight" required><br>
          <br>
          <label for="address">Home Address</label> <br>
          <input type="text" id="address" name="address" required><br>
          <br>
          <label for="email">Email</label><br>
          <input type="email" id="email" name="email" required><br>
          <br> 

          <label for="phno">Phone</label><br>
          <input type="number" id="phno" name="phno" value="phno" required><br>
          <br>

          <p>select your personal trainer</p>
          <input type="radio" name="radio" value="2">
          <label class="container" >Palash
          
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" name="radio" value="3">
        <label class="container">Nithish
            
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" name="radio" value="1">
        <label class="container">Prakhyath
           
            <span class="checkmark"></span>
          </label><br>
    
          <p>Have you been to gym before</p>
          <div>
            <input type="radio"  name="gyradio">
            <label class="container">Yes
                
                <span class="checkmark"></span>
              </label><br>
              <input type="radio" name="gyradio">
              <label class="container">No
               
                <span class="checkmark"></span>
              </label><br>
        </div>
          <p>Choose your batch</p>
          <?php
          $host="localhost";
          $user="root";
          $pssword="";
          $db="fithit";
          $conn=mysqli_connect($host, $user, $pssword, $db,3308);
          $queryB="SELECT * FROM batch";
          $connectB=mysqli_query($conn,$queryB);
           while($roww= mysqli_fetch_assoc($connectB)){
        ?>
          
          <input type="radio" name= "bradio" value="<?php echo $roww['bid']?>">
          <label class="container"><?php echo $roww['stime']." to ".$roww['etime'];?>
          
          
          <br>
           
          <?php
          //  if($rows['bid']==$roww['bid']) {echo "checked";
           }
           
           
           ?>











          <!-- <input type="radio" checked="checked" name="bradio" value="1">
          <label class="container">5:00am to 7:00am
           
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" checked="checked" name="bradio" value="2">
          <label class="container">8:00am to 12:00pm
           
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" checked="checked" name="bradio" value="3">
          <label class="container">2:00pm to 6:00pm
           
            <span class="checkmark"></span>
          </label><br>
          <input type="radio" checked="checked" name="bradio" value="4">
          <label class="container">6:00pm to 8:00pm -->
           
            <span class="checkmark"></span>
          </label><br> 
          <br>
          <div style="display:flex;align-items: center;justify-content: center;">
            <input type="submit" name="enroll" value="SUBMIT">
        </div>
        </strong>

        </div>
        </form>

    </div>

 </body>

</html>