package diplom.catalogs;

import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

/**
 * Created by a.talismanov on 10.05.2016.
 */
public class CatalogOfClients extends Application{

    @Override
    public void start(Stage primaryStage) throws Exception {
        primaryStage.setTitle("Каталог клиентов");

        Group root = new Group();
        Scene scene = new Scene(root, 1024,800, Color.WHITE);

        BorderPane borderPane = new BorderPane();
        borderPane.setPrefSize(1024,800);
//        borderPane.setLayoutY(10);
//        borderPane.setLayoutX(10);
//        borderPane.setCursor(Cursor.TEXT);
//        borderPane.setStyle("-fx-font: bold 14pt Arial; -fx-text-fill:#a0522d;");
//        Label label1 = new Label("label");
//        borderPane.setTop(label1);
        FlowPane topFlowPane = new FlowPane(10,10);
        topFlowPane.getChildren().add(new Button("1"));
        topFlowPane.getChildren().add(new Button("2"));
        topFlowPane.getChildren().add(new Button("3"));
        topFlowPane.getChildren().add(new Button("4"));
        borderPane.setTop(topFlowPane);

        BorderPane centralBorderPane = new BorderPane();
        borderPane.setCenter(centralBorderPane);

        ObservableList<CategoryGroup> catGroup = FXCollections.observableArrayList(
                new CategoryGroup(6,26, "Предприятия по Экономическим секторам", "Оптовая торговля"),
                new CategoryGroup(7,1, "Подданство", "Резидент"),
                new CategoryGroup(15,2, "Типы клиентов", "Юридические"),
                new CategoryGroup(55,6, "Типы поставщиков", "Поставщики"),
                new CategoryGroup(64,1, "Вид клиента", "Клиент банка")
        );

        TableView<CategoryGroup> tableCatGrp = new TableView<CategoryGroup>();
        tableCatGrp.setTableMenuButtonVisible(true);
        tableCatGrp.setTooltip(new Tooltip("Категории и группы клиента"));
        tableCatGrp.setPrefWidth(510);
        tableCatGrp.setPrefHeight(200);
        tableCatGrp.getSelectionModel().setSelectionMode(SelectionMode.MULTIPLE);

        TableColumn nameColCat = new TableColumn("Кат.");
        nameColCat.setCellValueFactory(new PropertyValueFactory<CategoryGroup,String>("category"));
        nameColCat.setPrefWidth(50);
        nameColCat.setResizable(false);
        nameColCat.setSortable(true);
        TableColumn nameColGrp = new TableColumn("Группа");
        nameColGrp.setCellValueFactory(new PropertyValueFactory<CategoryGroup,String>("group"));
        TableColumn nameColCatName = new TableColumn("Наименование категории");
        nameColCatName.setCellValueFactory(new PropertyValueFactory<CategoryGroup,String>("categoryName"));
        TableColumn nameColGrpName = new TableColumn("Наименование группы");
        nameColGrpName.setCellValueFactory(new PropertyValueFactory<CategoryGroup,String>("groupName"));
        tableCatGrp.setItems(catGroup);
        tableCatGrp.getColumns().addAll(nameColCat,nameColGrp,nameColCatName,nameColGrpName);
        //centralBorderPane.getChildren().add(tableCatGrp);
        centralBorderPane.setBottom(tableCatGrp);

        VBox panelOfButtons = new VBox();
        panelOfButtons.minWidth(50);
        panelOfButtons.minHeight(20);
        //panelOfButtons.fillWi(100);
        panelOfButtons.setSpacing(10);

        Button contactInfoButton = new Button("Контактная информация");
        Button rukovoditeliButton = new Button("Руководители");
        Button adressesButton = new Button("Адреса");
        Button codesOfGosComStatButton = new Button("Коды Госкомстата");
        Button fondsButton = new Button("Фонды");
        Button accountsButton = new Button("Счета");
        Button accConterAgentButton = new Button("Счета контрагента");
        Button accInOtherBanksButton = new Button("Счета в других банках");
        Button documentButton = new Button("Документ");
        Button bankAttributesButton = new Button("Атрибуты банка");
        panelOfButtons.getChildren().addAll(contactInfoButton, rukovoditeliButton, adressesButton,
                codesOfGosComStatButton, fondsButton, accountsButton, accConterAgentButton, accInOtherBanksButton,
                documentButton, bankAttributesButton);


        centralBorderPane.setRight(panelOfButtons);



        FlowPane bottomFlowPane = new FlowPane(10,10);
        bottomFlowPane.getChildren().add(new Button("Сохранить"));
        Button exitButton = new Button("Выход");
        exitButton.setOnAction(ae -> primaryStage.hide());
        bottomFlowPane.getChildren().add(exitButton);
        bottomFlowPane.setAlignment(Pos.BASELINE_RIGHT);
        borderPane.setBottom(bottomFlowPane);

        root.getChildren().add(borderPane);
        //root.getChildren().add(tableCatGrp);
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args){
        Application.launch(CatalogOfClients.class,args);
    }

}
