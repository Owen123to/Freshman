class Hybrid: public Motor, public Engine {
  public:
    Hybrid(double ME, double MR, double MI, double EE, double EP): Motor(ME,MR,MI),Engine(EE,EP){}
    double runnableTime() const {
      return (Motor::runnableTime()>Engine::runnableTime())?Engine::runnableTime():Motor::runnableTime();
    }
};
