#include "plugincontroller.h"


PluginController::PluginController(ICore *core)
{
    //Encontra a pasta de plugins
    QFile *file = new QFile("./plugins");

    //Obtem todos os arquivos dentro desta pasta
    QList<QObject*> plugins = file->children();

    //Cria um array de URLs do mesmo tamanho do anterior
    QUrl *libs = new QUrl[plugins.length()];

    // Loop para popular o array de libs;
    for (int i = 0; i < plugins.length();++i)
    {
        libs[i] =  QUrl("./plugins/" + plugins[i]->objectName());
    }

    //Ver como o Qt implementa reflection


}

PluginController::~PluginController()
{

}

