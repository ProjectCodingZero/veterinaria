document.addEventListener("DOMContentLoaded", function() {
    console.log("Archivo JavaScript cargado correctamente.");
    
    // Validación del formulario de registro
    const registerForm = document.querySelector("form");
    if (registerForm) {
        registerForm.addEventListener("submit", function(event) {
            const password = document.getElementById("password").value;
            const email = document.getElementById("email").value;

            // Mostrar valores en la consola para depuración
            console.log("Email:", email);
            console.log("Password:", password);

            if (!email.includes("@")) {
                alert("Por favor, introduce un correo electrónico válido.");
                event.preventDefault();
            } else if (password.length < 8) {
                alert("La contraseña debe tener al menos 8 caracteres.");
                event.preventDefault();
            }
        });
    }

    // Habilitar/deshabilitar botón de envío en términos y condiciones
    const termsCheckbox = document.getElementById("acepto");
    const termsSubmitButton = document.querySelector("input[type='submit']");
    if (termsCheckbox && termsSubmitButton) {
        termsCheckbox.addEventListener("change", function() {
            termsSubmitButton.disabled = !this.checked;
        });
        termsSubmitButton.disabled = !termsCheckbox.checked;
    }

    // Simulación de registro con redes sociales
    const socialButtons = document.querySelectorAll(".social-btn");
    if (socialButtons) {
        socialButtons.forEach(button => {
            button.addEventListener("click", function() {
                alert(Simulación, Registro , $,this,innerText,);
            });
        });
    }
});