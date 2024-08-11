FROM openjdk:19
ARG JAR_FILE="./target/*.jar"
WORKDIR /app
COPY ${JAR_FILE} app.jar
EXPOSE 8888:80
ENTRYPOINT [ "java", "-jar" ,"app.jar"]
