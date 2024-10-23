pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git url: 'https://github.com/<USERNAME>/<REPO>.git', branch: 'main'
            }
        }
        stage('Run Tests') {
            steps {
                // Sử dụng lệnh bat để chạy ceedling trên Windows
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
