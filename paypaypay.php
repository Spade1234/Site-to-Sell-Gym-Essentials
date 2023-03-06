<?php

    // session_start();
    // $email=$_SESSION['email'];

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

    if(isset($_POST['submit']))
    echo "Hello";
    {
        $name=$_POST['name'];
        echo $name;
        $email=$_POST['email'];
        $address=$_POST['address'];
        $city=$_POST['city'];
        $month=$_POST['month'];
        $bid=$_POST['bid'];
        $cardname=$_POST['cardname'];
        $cardno=$_POST['cardno'];
        $expmonth=$_POST['expmonth'];
        $expyear=$_POST['expyear'];
        $cvv=$_POST['cvv'];

        if($conn){
            echo "Connection successful";
        }
        $query="INSERT INTO payment(name,email,address,city,month,bid,cardname,
        cardno,expmonth,expyear,cvv) VALUES ('$name','$email','$address','$city',
        '$month','$bid','$cardname','$cardno','$expmonth','$expyear','$cvv')";
        echo "Go";
        $connection=mysqli_query($conn,$query);
        echo "Ki";

        if($connection){
            echo "weeee";
            ?>
            <script type="text/javascript">
               alert("Payment Details added Successfully");
               window.location.href="gymhomepage.php";
             </script>
             <?php
        }
        else{
            echo "Error: Payment details are not added";
        }
    }
?>