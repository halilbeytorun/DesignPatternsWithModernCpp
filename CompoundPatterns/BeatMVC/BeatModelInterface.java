public interface BeatModelInterface {
    void initialize();
    void on();
    void off();
    void setBPM(int bpm);
    int getBPM();
    
    // Notified in every beat
    void registerObserver(BeatObserver o);
    void removeObserver(BeatObserver o);

    // Notified when BPM changed
    void registerObserver(BPMObserver o);
    void removeObserver(BPMObserver o);

}