package diplom.importexport;

import javax.persistence.*;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.sql.Date;

/**
 * Created by a.talismanov on 03.06.2016.
 */
@Entity
@Table(name = "TRN")
public class Trn {
    @Id @Column(name = "id")
    @GeneratedValue(generator="my_seq")
    @SequenceGenerator(name="my_seq", sequenceName = "TRN_SEQ",allocationSize = 1)
    private BigInteger id;

    @Column(name = "dognum")
    private int dognum;

    @Column(name = "date_success")
    private Date dateSuccess;

    @Column(name = "acc_deb")
    private String accDeb;

    @Column(name = "cur_deb")
    private String curDeb;

    @Column(name = "acc_cred")
    private String accCred;

    @Column(name = "cur_cred")
    private String curCred;

    @Column(name = "sum_deb")
    private BigDecimal sumDeb;

    @Column(name = "sum_cred")
    private BigDecimal sumCred;

    public Trn() {}

//    public Trn(int dognum, Date dateSuccess, String accDeb, String accCred, String curCred, String curDeb,
//               BigDecimal sumDeb, BigDecimal sumCred) {
//        this.dognum = dognum;
//        this.dateSuccess = dateSuccess;
//        this.accDeb = accDeb;
//        this.curDeb = curDeb;
//        this.accCred = accCred;
//        this.curCred = curCred;
//        this.sumDeb = sumDeb;
//        this.sumCred = sumCred;
//
//    }

    public BigDecimal getSumCred() {
        return sumCred;
    }

    public void setSumCred(BigDecimal sumCred) {
        this.sumCred = sumCred;
    }

    public BigDecimal getSumDeb() {
        return sumDeb;
    }

    public void setSumDeb(BigDecimal sumDeb) {
        this.sumDeb = sumDeb;
    }

    public String getCurCred() {
        return curCred;
    }

    public void setCurCred(String curCred) {
        this.curCred = curCred;
    }

    public String getAccCred() {
        return accCred;
    }

    public void setAccCred(String accCred) {
        this.accCred = accCred;
    }

    public String getCurDeb() {
        return curDeb;
    }

    public void setCurDeb(String curDeb) {
        this.curDeb = curDeb;
    }

    public String getAccDeb() {
        return accDeb;
    }

    public void setAccDeb(String accDeb) {
        this.accDeb = accDeb;
    }

    public Date getDateSuccess() {
        return dateSuccess;
    }

    public void setDateSuccess(Date dateSuccess) {
        this.dateSuccess = dateSuccess;
    }

    public BigInteger getId() {
        return id;
    }

    public void setId(BigInteger id) {
        this.id = id;
    }

    public int getDognum() {
        return dognum;
    }

    public void setDognum(int dognum) {
        this.dognum = dognum;
    }

    @Override
    public String toString() {
        return "Trn{" +
                "id=" + id +
                ", dognum=" + dognum +
                ", dateSuccess=" + dateSuccess +
                ", accDeb='" + accDeb + '\'' +
                ", curDeb='" + curDeb + '\'' +
                ", accCred='" + accCred + '\'' +
                ", curCred='" + curCred + '\'' +
                ", sumDeb=" + sumDeb +
                ", sumCred=" + sumCred +
                '}';
    }
}
