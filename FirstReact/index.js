import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

import Clock from './chapter_04/Clock';

setInterval(() => {
    ReactDOM.render(
        <React.StrictMode>
         <Clock/>
        </React.StrictMode>,
        document.getElementById('root')
    );
}, 1000);


reportWebVitals();