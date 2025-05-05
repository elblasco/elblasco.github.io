package com.company;

import com.company.cards.Aard;
import com.company.cards.Axii;
import com.company.cards.Card;
import com.company.cards.Igni;
import com.company.game.Game;
import com.company.utils.EndGameException;
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class Main extends Application {

	public static void main (String[] args) {
		launch(args);
	}

	@Override
	public void start (Stage primaryStage) throws Exception {
		BorderPane root = new BorderPane();
		
		primaryStage.setTitle("Gwent");
		primaryStage.setScene(new Scene(root, 300, 275));
		primaryStage.show();
	}
}
