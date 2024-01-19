// You can write more code here

/* START OF COMPILED CODE */

class Level extends Phaser.Scene {

	constructor() {
		super("Level");

		/* START-USER-CTR-CODE */
		// Write your code here.
		/* END-USER-CTR-CODE */
	}

	/** @returns {void} */
	editorCreate() {

		// dino
		const dino = this.add.image(703, -588, "dino");
		dino.setInteractive(new Phaser.Geom.Rectangle(0, 0, 250, 250), Phaser.Geom.Rectangle.Contains);

		// onPointerDownScript
		const onPointerDownScript = new OnPointerDownScript(dino);

		// pushActionScript
		new PushActionScript(onPointerDownScript);

		// onAwakeScript
		const onAwakeScript = new OnAwakeScript(dino);

		// moveInSceneActionScript
		const moveInSceneActionScript = new MoveInSceneActionScript(onAwakeScript);

		// background2
		const background2 = this.add.image(963, 459, "background2");

		// btn1
		const btn1 = this.add.image(249, 985, "btn1");

		// btn2
		const btn2 = this.add.image(713, 987, "btn2");

		// btn3
		const btn3 = this.add.image(1213, 987, "btn3");

		// btn4
		const btn4 = this.add.image(1674, 987, "btn4");

		// photo
		const photo = this.add.image(1480, 464, "photo");

		// promo1
		const promo1 = this.add.sprite(284, 454, "promo1");
		
		promo1.setInteractive();
		
		  // Agregar eventos para el ratón
    	promo1.on('pointerover', function () {
        // Cambiar la escala de la imagen al pasar el mouse
        promo1.setScale(1.2);
    	});

    	promo1.on('pointerout', function () {
        // Restaurar la escala original al quitar el mouse
        promo1.setScale(1.0);
    	});

    	this.promo1 = promo1;

		// promo2
		const promo2 = this.add.sprite(801, 455, "promo2");
									   
		promo2.setInteractive();
		
		  // Agregar eventos para el ratón
    	promo2.on('pointerover', function () {
        // Cambiar la escala de la imagen al pasar el mouse
        promo2.setScale(1.2);
    	});

    	promo2.on('pointerout', function () {
        // Restaurar la escala original al quitar el mouse
        promo2.setScale(1.0);
    	});

    	this.promo2 = promo2;							   
									   

		// moveInSceneActionScript (prefab fields)
		moveInSceneActionScript.from = "TOP";

		// moveInSceneActionScript (components)
		const moveInSceneActionScriptDurationConfigComp = new DurationConfigComp(moveInSceneActionScript);
		moveInSceneActionScriptDurationConfigComp.duration = 1000;

		this.background2 = background2;
		this.btn1 = btn1;
		this.btn2 = btn2;
		this.btn3 = btn3;
		this.btn4 = btn4;
		this.photo = photo;
		this.promo1 = promo1;
		this.promo2 = promo2;

		this.events.emit("scene-awake");
	}

	/** @type {Phaser.GameObjects.Image} */
	background2;
	/** @type {Phaser.GameObjects.Image} */
	btn1;
	/** @type {Phaser.GameObjects.Image} */
	btn2;
	/** @type {Phaser.GameObjects.Image} */
	btn3;
	/** @type {Phaser.GameObjects.Image} */
	btn4;
	/** @type {Phaser.GameObjects.Image} */
	photo;
	/** @type {Phaser.GameObjects.Sprite} */
	promo1;
	/** @type {Phaser.GameObjects.Sprite} */
	promo2;

	/* START-USER-CODE */

	// Write more your code here

	create() {
		this.editorCreate();
		// BOTON 1 QUE SE HACE MAS GRANDE
		const btn1 = this.add.image(249, 985, "btn1");
		btn1.setInteractive();
		 // Establecer el botón como interactivo
   		 btn1.setInteractive();

   		 // Agregar un evento de clic al botón
   		 btn1.on('pointerdown', function () {
       	 // Cambiar la escala del botón al hacer clic
        btn1.setScale(1.2);
		
		// Restablecer la escala de los demás botones
        btn2.setScale(1.0);
		btn3.setScale(1.0);
        btn4.setScale(1.0);
			 
   		 });
		
		
		
		
		this.btn1;
		

		// btn2
		const btn2 = this.add.image(713, 987, "btn2");

		// Establecer el botón como interactivo
		btn2.setInteractive();

		// Agregar un evento de clic al botón
		btn2.on('pointerdown', function () {
    	// Cambiar la escala del botón al hacer clic
   		 btn2.setScale(1.2);
			
			
			// Restablecer la escala de los demás botones
        btn1.setScale(1.0);
		btn3.setScale(1.0);
        btn4.setScale(1.0);
		});

		this.btn2 = btn2;
		
		// btn3
		const btn3 = this.add.image(1213, 987, "btn3");

		// Establecer el botón como interactivo
		btn3.setInteractive();

		// Agregar un evento de clic al botón
		btn3.on('pointerdown', function () {
    	// Cambiar la escala del botón al hacer clic
    	btn3.setScale(1.2);
			
			// Restablecer la escala de los demás botones
        btn2.setScale(1.0);
		btn1.setScale(1.0);
        btn4.setScale(1.0);
		});

		this.btn3 = btn3;
		
		// Después de agregar el botón 4 en tu método editorCreate

		// btn4
		const btn4 = this.add.image(1674, 987, "btn4");

		// Establecer el botón como interactivo
		btn4.setInteractive();

		// Agregar un evento de clic al botón
		btn4.on('pointerdown', function () {
    	// Cambiar la escala del botón al hacer clic
    	btn4.setScale(1.2);
			
			// Restablecer la escala de los demás botones
        btn2.setScale(1.0);
		btn3.setScale(1.0);
        btn1.setScale(1.0);
		});

		this.btn4 = btn4;

		
		
		



		
	}

	/* END-USER-CODE */
}

/* END OF COMPILED CODE */

// You can write more code here
