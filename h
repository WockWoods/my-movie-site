<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Movie Site</title>
    <style>
        body { font-family: Arial, sans-serif; text-align: center; }
        .movie-container { margin: 20px auto; max-width: 800px; }
        .movie { margin-bottom: 20px; }
    </style>
</head>
<body>
    <h1>Welcome to My Movie Site</h1>
    <div class="movie-container">
        <div class="movie">
            <h2>Movie Title 1</h2>
            <video width="100%" controls>
                <source src="movie1.mp4" type="video/mp4">
                Your browser does not support the video tag.
            </video>
        </div>
        <div class="movie">
            <h2>Movie Title 2</h2>
            <video width="100%" controls>
                <source src="movie2.mp4" type="video/mp4">
                Your browser does not support the video tag.
            </video>
        </div>
    </div>
</body>
</html>
