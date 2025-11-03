public class GumballMachine{
    State soldOutState;
    State noQuarterState;
    State hasQuarterState;
    State soldState;
    State winnerState;

    State state = soldOutState;
    int count = 0;

    public GumballMachine(int count){
        soldOutState = new SoldOutState(this);
        noQuarterState = new NoQuarterState(this);
        hasQuarterState = new HasQuarterState(this);
        soldState = new SoldState(this);
        winnerState = new WinnerState(this);
        
        this.count = count;
        if(count > 0){
            state = noQuarterState;
        }
        else{
            state = soldOutState;
        }
    }
    public void insertQuarter() {
        state.insertQuarter();
    }
    public void ejectQuarter(){
        state.ejectQuarter();
    }
    public void turnCrank(){
        state.turnCrank();
        state.dispense();
    }
    void setState(State state)
    {
        this.state = state;
    }
    void releaseBall() {
        System.out.println("A gumball comes rolling out the slot..");
        if(count > 0)
        { 
            count = count -1;
        }
    }

    public void refill(int refillCount)
    {
        count += refillCount;

        if(this.state == soldOutState)
        {
            this.state = noQuarterState;
        }
    }

    public int getCount(){
        return count;
    }

    public State getHasQuarterState()
    {
        return hasQuarterState;
    }

    public State getNoQuarterState(){
        return noQuarterState;
    }

    public State getSoldState(){
        return soldState;
    }

    public State getSoldOutState(){
        return soldOutState;
    }

    public State getWinnerState(){
        return winnerState;
    }
    

}