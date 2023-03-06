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
        $etype=$_POST['etype'];
        echo $etype;
    

        if($conn){
            //echo "Connection successful";
        }
        $query="INSERT INTO equipment(etype) VALUES('$etype')";
        echo "Go";
        $connection=mysqli_query($conn,$query);
        echo "Ki";

        if($connection){
            ?>
            <script type="text/javascript">
               alert("Equipment Details added Successfully");
               window.location.href="adminEquip.php";
             </script>
             <?php
        }
        else{
            echo "Error: Equipment details are not added";
        }
    }
?>