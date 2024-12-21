public WeatherApp() {
    setTitle("실시간 날씨 정보");
    setSize(400, 300);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setLayout(new FlowLayout());

    JLabel cityLabel = new JLabel("도시 이름:");
    cityInput = new JTextField(15);
    JButton getWeatherButton = new JButton("날씨 가져오기");
    resultArea = new JTextArea(10, 30);
    resultArea.setEditable(false);

    getWeatherButton.addActionListener(new ActionListener() {
        @Override
        public void actionPerformed(ActionEvent e) {
            String city = cityInput.getText();
            getWeather(city);
        }
    });

    add(cityLabel);
    add(cityInput);
    add(getWeatherButton);
    add(new JScrollPane(resultArea));
}

private void getWeather(String city) {
    try {
        String urlString = String.format("https://api.openweathermap.org/data/2.5/weather?q=%s&appid=%s&lang=kr&units=metric", city, API_KEY);
        URL url = new URL(urlString);
        HttpURLConnection conn = (HttpURLConnection) url.openConnection();
        conn.setRequestMethod("GET");

        BufferedReader in = new BufferedReader(new InputStreamReader(conn.getInputStream()));
        String inputLine;
        StringBuilder content = new StringBuilder();

        while ((inputLine = in.readLine()) != null) {
            content.append(inputLine);
        }

        in.close();
        conn.disconnect();

        JSONObject json = new JSONObject(content.toString());
        String weatherDescription = json.getJSONArray("weather").getJSONObject(0).getString("description");
        double temperature = json.getJSONObject("main").getDouble("temp");

        resultArea.setText(String.format("날씨: %s\n온도: %.1f °C", weatherDescription, temperature));

    } catch (Exception e) {
        resultArea.setText("날씨 정보를 가져오는 데 오류가 발생했습니다.");
        e.printStackTrace();
    }
}

public static void main(String[] args) {
    SwingUtilities.invokeLater(() -> {
        WeatherApp app = new WeatherApp();
        app.setVisible(true);
    });
}
