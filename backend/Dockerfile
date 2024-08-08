FROM openjdk:19-jdk-alpine3.15 
RUN apk update && apk add mysql-client && rm -f /var/cache/apk/*
RUN apk add maven
WORKDIR /app
COPY pom.xml .
#RUN mvn -e -B dependency:resolve
COPY src ./src
ENV LANG=C.UTF-8
EXPOSE 8080
RUN mvn spring-boot:run

# RUN mvn clean -e -B package

ENTRYPOINT ["java", "-Dserver.port=8080", "-jar", "app.jar"]

