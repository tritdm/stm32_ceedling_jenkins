pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git url: 'https://github.com/tritdm/stm32_ceedling_jenkins.git', branch: 'main'
            }
        }
        stage('Check PATH') {
            steps {
                bat 'ceedling version'
            }
        }
        stage('Run Tests') {
            steps {
                bat 'ceedling test:all 2>&1 | tee build/artifacts/test/report.xml'
            }
        }
    }

    post {
        always {
            junit testResults: 'build/artifacts/test/report.xml', skipPublishingChecks: true
        }
    }
}
