
/** \brief Muestro el menu y pido al usuario que eliga una opcion
 *
 *
 *
 */
void menu();
/** \brief Ingreso numero a calcular
 *
 *
 * \return float
 *
 */
float IngresoOperando();
/** \brief sumo los 2 parametros
 *
 * \param primerOperando double
 * \param segundoOperando double
 * \return el resultado de la suma
 *
 */
float suma(float primerOperando, float segundoOperando);
/** \brief resto los 2 parametros
 *
 * \param primerOperando float
 * \param segundoOperando float
 * \return el resultado de la resta
 *
 */
float resta(float primerOperando, float segundoOperando);
/** \brief multiplico los 2 parametros
 *
 * \param primerOperando float
 * \param segundoOperando float
 * \return el resultado de la multiplicacion
 *
 */
float multiplicacion(float primerOperando, float segundoOperando);
/** \brief divido
 *
 * \param primerOperando float
 * \param segundoOperando float
 * \return el resultado de la división
 *
 */
float division(float primerOperando, float segundoOperando);
/** \brief saco el factorial del parametro
 *
 * \param primerOperando float
 * \return el resultado del factorial
 *
 */
float factorial(float primerOperando);
/** \brief muestro los resultados de todas las operaciones
 *
 * \param primerOperando float
 * \param segundoOperando float
 * \param suma float
 * \param resta float
 * \param multiplicacion float
 * \param division float
 * \param factorialUno float
 * \param factorialDos float
 * \return void
 *
 */
void MuestroResultados(float primerOperando, float segundoOperando, float suma, float resta,
                        float multiplicacion, float division, float factorialUno, float factorialDos);

/** \brief Valido la division y el factorial
 * no se puede dividir por 0
 * No se puede hacer el factorial de un numero negativo ni de un numero con coma
 * \param primerOperando float
 * \param segundoOperando float
 * \param code int
 * \return codigo de error
 *
 */
int ValidarOperandos(float primerOperando, float segundoOperando, int code);
