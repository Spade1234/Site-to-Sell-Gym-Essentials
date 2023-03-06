<?php
    session_start();
    $bid=$_GET['bid'];
    $_SESSION['batch']="$bid";

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
    echo "$bid";
$query="SELECT * from batch where bid='$bid'";
echo "Go";
        $connection=mysqli_query($conn,$query);
        echo "Ki";
$rows=mysqli_fetch_assoc($connection);
?>
<!DOCTYPE html> 
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        body{
    background-image: url(registration.jpeg);
    font-family: 'Roboto', sans-serif;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
/* background: rgb(219, 226,226); */
}
.row{
/* background: white; */
/* width: 20px; */
color: white;
position: center;
}
.signupbtn{
    width: 300px;
    height: 50px;
    color: white;
    background-color: black;
    border: 3px solid white;
    border-radius: 10px;
    transition: 0.5s;
}
.signupbtn:hover{
background: white;
border: 1px solid;
color: black;
}
    </style>
</head>
<body>
<p style="color: white;"><b><u>Edit Batch</u></b></p>
    <form action="editBatch.php" method="post">
    <div class="form row">
            <div class="col-lg-7">
        <label >Start Time:</label>
        <br>
        <input type="time" name="start" style="width: 250px;height: 40px;" value="<?php echo $rows['stime'];?>">
</div> </div>

        <br><br>
        <div class="form row">
            <div class="col-lg-7">
        <label>End Time:</label>
        <br>
        <input type="time" name="end" style="width: 250px;height: 40px;" value="<?php echo $rows['etime'];?>">
</div></div>
        <br><br>

        <div class="form row">
            <div class="col-lg-7">
        <label>Cost:</label>
        <br>
        <input type="number" name="cost" style="width: 250px;height: 40px;" value="<?php echo $rows['cost'];?>">
</div></div>
        <br><br>

        <div class="form row">
            <div class="col-lg-7">
        <label>Cost with Trainer:</label>
        <br>
        <input type="number" name="tcost" style="width: 250px;height: 40px;" value="<?php echo $rows['tcost'];?>">
</div></div>
        <br>
        <div>
            <button type="submit" class="signupbtn mt-3 mb-5">Update</button>
        </div>
    </form>
</body>
 </html>