package com.hswatch;

import android.app.Application;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.os.Build;

public class App extends Application {
    public static final String CANAL_SERVICO = "canalServico";
    public static final String CANAL_NOTIFACAO = "canalNotificacao";

    @Override
    public void onCreate() {
        super.onCreate();

        CanaisNoticacao();
    }

    private void CanaisNoticacao() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O){
            NotificationChannel canalServico = new NotificationChannel(CANAL_SERVICO,
                    "Canal do Servico",
                    NotificationManager.IMPORTANCE_DEFAULT);
            NotificationChannel canalNotificacoes = new NotificationChannel(CANAL_NOTIFACAO,"Canal de Notificacoes",
                    NotificationManager.IMPORTANCE_HIGH);
            NotificationManager notmanager = getSystemService(NotificationManager.class);
            notmanager.createNotificationChannel(canalServico);
            notmanager.createNotificationChannel(canalNotificacoes);
        }
    }
}
