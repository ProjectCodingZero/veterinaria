package backend.veterinaria;

import org.springframework.boot.SpringApplication;

public class TestVeterinariaApplication {

	public static void main(String[] args) {
		SpringApplication.from(VeterinariaApplication::main).with(TestcontainersConfiguration.class).run(args);
	}

}
