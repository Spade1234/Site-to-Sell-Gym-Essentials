<?php

    session_start();
    $eno=$_GET['equipment'];

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

    
        $query="DELETE FROM equipment WHERE eno='$eno'";
        $connection=mysqli_query($conn,$query);

        if($connection){
            //echo "Deletion Successful";
            ?>
            <script type="text/javascript">
               alert("Equipment Details Deleted Successfully");
               window.location.href="adminequip.php";
             </script>
             <?php
        }
        else{
            echo "Error: Deletion not Successful";
        }
    
?>