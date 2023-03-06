<?php

    session_start();
    $email=$_SESSION['email'];

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
        $start=$_POST['start'];
        //echo $start;
        $end=$_POST['end'];
        //echo $end;
        $cost=$_POST['cost'];
        //echo $cost;
        $tcost=$_POST['tcost'];
        //echo $tcost;

        if($conn){
            //echo "Connection successful";
        }
        $query="INSERT INTO batch(stime,etime,tcost,cost) VALUES('$start','$end','$tcost','$cost')";
        //echo "Go";
        $connection=mysqli_query($conn,$query);
        //echo "Ki";

        if($connection){
            ?>
            <script type="text/javascript">
               alert("Batch Details added Successfully");
               window.location.href="adminbatch.php";
             </script>
             <?php
        }
        else{
            echo "Error: Batch details are not added";
        }
    }
?>