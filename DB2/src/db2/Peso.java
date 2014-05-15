/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package db2;

/**
 *
 * @author Henry
 */
public class Peso {

    double peso;

    public Peso() {
    }

    public Peso(double peso) {
        this.peso = peso;
    }

    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    @Override
    public String toString() {
        return "" + peso;
    }
}
