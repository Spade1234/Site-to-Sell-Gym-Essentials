<?php

    session_start();
    $bid=$_SESSION['batch'];

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
            echo "Connection";
        }
        $query="UPDATE batch SET stime='$start',etime='$end',tcost='$tcost',cost='$cost' where bid='$bid'";
    
        $connection=mysqli_query($conn,$query);
    

        if($connection){
            //echo "Values Updated Successfully";
            ?>
            <script type="text/javascript">
               alert("Values Updated Successfully");
               window.location.href="adminbatch.php";
             </script>
             <?php
        }
        else{
            echo "Error: Value Update not Successful";
        }
    }
?>