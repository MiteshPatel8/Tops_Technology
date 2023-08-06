$(document).ready(function () {
    $("#pass").on('keyup', (function () {
        var upperCase = /([A-Z])/;
        var lowerCase = /([a-z])/;
        var spacialCharacter = /([!, @,#, $,%,^,&,*])/;
        var number = /([0-9])/;
        var password = $("#pass").val().trim();
        console.log(password)

        // if length of the password is less then 5 checker then consider as weak passowrd
        if (password.length < 5) {
            $("#psw").removeClass();
            $("#psw").addClass("weakpassword");
            $("#psw").html("weak")
        }
        else {
            // is password contains UpperCase, LowerCase, Numericals and Special Character then it's a strong password
            if (password.match(upperCase) && password.match(lowerCase) && password.match(number) && password.match(spacialCharacter)) {
                $("#psw").removeClass();
                $("#psw").addClass("strongpassword");
                $("#psw").html("strong");
            }
            else {
                // if password is not a weak and strong type then it's a medium type
                $("#psw").removeClass();
                $("#psw").addClass("mediumpassword");
                $("#psw").html("medium");
            }
        }
    }));
})