// interrupt
BEGIN
    REPEAT 
        DO NOTHING/SLEEPING -> I SHOW LCD
    UNTIL button_pressed OR timer expires OR ……
        IF button_pressed THEN
            CALL BLINKING
        IF timer_expires THEN
            CALL CLEARDISPLAY
    CALL DISPLAY
END

// not using interrupt
BEGIN
    DO FOREVER
        IF button_pressed THEN
            SET TIMER
            CALL BLINKING
        ENDIF
        IF timer_expires THEN
            CALL CLEARDISPLAY
        ENDIF
        WAIT 5 sec // Try to increase the sleep time and see what is happening
    END DO
END

// start of Blinking function
BEGIN/BLINKING
    CALL DISPLAY
    DO 3 times
        TURN ON
        SLEEP …
        TURN OFF
    END DO
    CALL CLEARDISPLAY
END BLINKING
// end of Blinking function

// start of the Function for displaying on LCD
BEGIN/DISPLAY
    SHOW “Blinking ..;” ON LCD
END/DISPLAY
// end of the Function for displaying on LCD

// start of the Function for clearing the display
BEGIN/CLEARDISPLAY
    SHOW NOTHING ON LCD
END/CLEARDISPLAY
// end of the Function for clearing the display