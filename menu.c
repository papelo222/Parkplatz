void mainMenu(HashMap *mapAutos){
     int  opc=0;
     char opcstr[3];

          while(opc!=4){
            printf("1.- Agregar Auto \n2.- Eliminar Auto\n3.- Buscar Auto\n4.- Salir Del Programa\n\n");
            fgets(opcstr,3,stdin);
            opc = atoi(opcstr);
            switch(opc){

                    case 1:
                         addCar(mapAutos);
                         system("cls");
                         break;

                    case 2:
                         delCar(mapAutos);
                         system("cls");
                         break;
                    case 3:
                         schCar(mapAutos);
                         system("cls");
                         break;
                    default:
                          system("cls");
                          break;

            }
      }
}
