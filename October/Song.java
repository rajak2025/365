public class Song
{
    private String title;
    private String artist;
    private int lengthInSeconds;
    private int rating; // valid ratings are 1-4 or 0 meaning not rated
    
    /**
     * Create a song with the given title, artist, length, and rating
     * @param songTitle the song title
     * @param songArtist the song artist
     * @param songLength the length of the song in seconds
     * @param songRating the song's rating
     */
    public Song(String songTitle, String songArtist, int songLength, int songRating)
    {
        title = songTitle;
        artist = songArtist;
        lengthInSeconds = songLength;
        // TODO: ----------------- 1 -------------------
        // TODO: Replace the statement below with a call to setRating that has the same effect
        setRating(rating);
        // TODO: ----------------- 1b -------------------
        // TODO: Answer this question in a comment right below (no code for this one)
        // TODO: (Tip: Update setRating based on TODO #3 below before answering.)
        // Question: Why do you think we want to replace the assignment statement with a call to setRating?
        // Your Answer: A private variable cannot be accessed directly, it should be modified by setter methods
    }

    /**
     * Create an unrated song with the given title, artist, and length
     * @param songTitle the song title
     * @param songArtist the song artist
     * @param songLength the length of the song in seconds
     */
    public Song(String songTitle, String songArtist, int songLength)
    {
        title = songTitle;
        artist = songArtist;
        lengthInSeconds = songLength;
        rating = 0;
    }
    
    /**
     * @return the song title
     */
    public String getTitle()
    {
        return title;
    }
    
    /**
     * @return the song artist
     */
    public String getArtist()
    {
        return artist;
    }
    
    /**
     * @return the song length (in seconds)
     */
    public int getLengthInSeconds()
    {
        return lengthInSeconds;
    }
    
    /**
     * @return a string giving the song length in minutes (m) and seconds (s).
     * Example: If lengthInSeconds is 150, the string returned is "2m 30s"
     */
    public String getLengthAsString()
    {
        // TODO: ----------------- 2 -------------------
        // TODO: Implement this method so that it behaves as specified.
        // TODO: Make the string exactly as specified, do not change the format.
        // TODO: (E.g., the m and s must be lowercase, and no space between the number and the letter)
        // TODO: More examples: 0m 4s   5m 10s   3m 59s   12m 0s
        int s = lengthInSeconds%60;
        int m = lengthInSeconds/60;
        return m+"m "+s+"s";
    }
    
    /**
     * Set the length of this song to the value given.
     * The length must be greater than 0.
     * @param newLength new length (in seconds) for this song
     */
    public void setLengthInSeconds(int newLength)
    {
        if (newLength > 0) {
            lengthInSeconds = newLength;
        }
        else {
            System.out.println("Error: Length must be greater than 0");
        }
    }
    
    /**
     * @return true if this song has not been rated, false otherwise
     */
    public boolean isUnrated()
    {
        // TODO: ----------------- 3 -------------------
        // TODO: Implement this method so that it behaves as specified.
        // TODO: (If a song's rating is 0, then it has not been rated.)

        if(rating == 0 )
            return false;
        
    }
    
    /**
     * @return the song rating
     */
    public int getRating()
    {
        return rating;
    }

    /**
     * Update this song's rating to the one given
     * @param newRating new rating for this song
     */
    public void setRating(int newRating)
    {
        // TODO: ----------------- 4 -------------------
        // TODO: Add validation: The new rating must be in the range 1 - 4 (inclusive)
        // TODO: If it's not, print an error message stating the valid range and don't update the rating
        
        if(newRating >= 1 && newRating <=4  )
           rating = newRating;
        else
            System.out.println("The new rating must be in the range 1 - 4 (inclusive)");
    }    
    
    /**
     * Reset the rating of this song to not rated
     */
    public void resetRating()
    {
        rating = 0;
    }
        
    /**
     * Increase the rating of this song by 1
     */
    public void increaseRating()
    {
        // TODO: ----------------- 5 -------------------
        // TODO: Update so that the rating is not allowed to go higher than 4.
        // TODO: If the rating is already at 4, calling this method has no effect.
        // TODO: Do not print anything in this method.
        if(rating != 4 && rating < 4 )
            rating = rating + 1;
    }

    /**
     * Decrease the rating of this song by 1
     */
    public void decreaseRating()
    {
        // TODO: ----------------- 6 -------------------
        // TODO: Update so that the rating is not allowed to go lower than 1.
        // TODO: If the rating is already at 1, calling this method has no effect.
        // TODO: If the rating is 0, calling this method has no effect.
        // TODO: Do not print anything in this method.
        if(rating != 1 && rating <= 4)
            rating = rating - 1;
    }

    /**
     * Print information on this song
     */
    public void printSongInfo()
    {
        System.out.println("---------------------------------");
        System.out.println("Song Title: " + title);
        System.out.println("Artist: " + artist);
        System.out.println("Length: " + getLengthAsString());
        System.out.println("Length: " + lengthInSeconds + " seconds");
        
        if(rating == 0 ) {
            System.out.println("Rating: (not rated)");
        }
        else {
            System.out.println("Rating: " + rating);
        } 
            
        // TODO: ----------------- 7 -------------------
        // TODO: Update the two statements above:
        // TODO: Call getLengthAsString to get the length to print.
        // TODO: For example, "Length: 2m 30s" should be printed instead of "Length: 150 seconds"
        // TODO: If a song is not rated yet (rating 0), print "Rating: (not rated)" instead of "Rating: 0"
        System.out.println("---------------------------------");
    }
}