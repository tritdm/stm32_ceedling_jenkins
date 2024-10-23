pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git url: 'https://github.com/tritdm/stm32_ceedling_jenkins.git', branch: 'main'
            }
        }
        stage('Check Ceedling Version') {
            steps {
                bat 'ceedling version'
            }
        }
        stage('Run Tests') {
            steps {
                bat 'ceedling test:all'
            }
        }
    }

    post {
        always {
            junit 'build/test/results/*.xml'
        }
    }
}