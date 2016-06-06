package diplom.importexport;

/**
 * Created by alexander.talismanov on 06.06.2016.
 */

        import java.io.FileWriter;
        import java.io.IOException;
        import javax.xml.parsers.DocumentBuilder;
        import javax.xml.parsers.DocumentBuilderFactory;
        import javax.xml.parsers.ParserConfigurationException;
        import javax.xml.transform.Transformer;
        import javax.xml.transform.TransformerConfigurationException;
        import javax.xml.transform.TransformerException;
        import javax.xml.transform.TransformerFactory;
        import javax.xml.transform.dom.DOMSource;
        import javax.xml.transform.stream.StreamResult;
        import org.w3c.dom.Document;
        import org.w3c.dom.Element;

public class TrnXml {
    public static void main(String[] args) {
        DocumentBuilderFactory documentBuilderFactory =
                DocumentBuilderFactory.newInstance();
        DocumentBuilder documentBuilder = null;
        try {
            documentBuilder =
                    documentBuilderFactory.newDocumentBuilder();
        } catch (ParserConfigurationException e) {
            e.printStackTrace();
        }
        Document document = documentBuilder.newDocument();
        String root = "transactions";
        Element rootElement = document.createElement(root);
        document.appendChild(rootElement);
        for (int i = 0; i < 10; i++) {
            String stringTransaction = "transaction";
            Element elementTransaction = document.createElement(stringTransaction);
            rootElement.appendChild(elementTransaction);
            String idStr = "id";
            Element elementId = document.createElement(idStr);
            elementTransaction.appendChild(elementId);

            String dognumStr = "dognum";
            Element elementDocnum = document.createElement(dognumStr);
            elementTransaction.appendChild(elementDocnum);

            String dateSuccessStr = "dateSuccess";
            Element elementDateSuccess = document.createElement(dateSuccessStr);
            elementTransaction.appendChild(elementDateSuccess);

            String accDebStr = "accDeb";
            Element elementAccDeb = document.createElement(accDebStr);
            elementTransaction.appendChild(elementAccDeb);
            elementAccDeb.appendChild(document.createTextNode("40817810dsdsd"));

            String curDebStr = "curDeb";
            Element elementCurDeb = document.createElement(curDebStr);
            elementTransaction.appendChild(elementCurDeb);

            String accCredStr = "accCred";
            Element elementaccCred = document.createElement(accCredStr);
            elementTransaction.appendChild(elementaccCred);

            String curCredStr = "curCred";
            Element elementCurCred = document.createElement(curCredStr);
            elementTransaction.appendChild(elementCurCred);

            String sumDebStr = "sumDeb";
            Element elementSumDeb = document.createElement(sumDebStr);
            elementTransaction.appendChild(elementSumDeb);

            String sumCredStr = "sumCred";
            Element elementSumCred = document.createElement(sumCredStr);
            elementTransaction.appendChild(elementSumCred);





//            String elementName = "name";
//            Element emName = document.createElement(elementName);
//            String name = "Technique Java";
//            emName.appendChild(document.createTextNode(name));
//            String elementAuthor = "author";
//            Element emAuthor = document.createElement(elementAuthor);
//            String author = "Blinov";
//            emAuthor.appendChild(document.createTextNode(author));
//            emAuthor.setAttribute("id", "3");
//            rootElement.appendChild(emName);
//            rootElement.appendChild(emAuthor);
        }
        System.out.println(document);
        TransformerFactory transformerFactory = TransformerFactory.newInstance();
        try {
            Transformer transformer = transformerFactory.newTransformer();
            DOMSource source = new DOMSource(document);
            StreamResult result = new StreamResult(new FileWriter("C:\\inout\\export\\xml\\book.xml"));
            transformer.transform(source, result);
        } catch (TransformerConfigurationException e) {
            e.printStackTrace();
        } catch (TransformerException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}