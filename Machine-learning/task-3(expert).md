## Expert Level - Deep learning models

### Question: 
Design a multi-input deep learning model using TensorFlow/Keras or PyTorch to predict music genre from a combination of numerical and audio features. The input to the model should include two types of data: 
* numerical data like song duration, tempo, and popularity, and 
* audio data processed using spectrograms or mel-spectrograms. The model should handle both types of inputs and produce a single prediction.

#### Steps for Attempting the Question:

1. Collect or load a dataset containing both numerical and audio features for different songs (e.g., from a music streaming service or open dataset like GTZAN).
2. Preprocess the numerical data and convert the audio files into spectrograms or mel-spectrograms.
3. Design a multi-input model:
* One branch of the network processes the numerical features (e.g., a fully connected neural network).
* Another branch processes the audio features (e.g., a convolutional neural network for the spectrogram images).
4. Combine the outputs of both branches using concatenation or a similar mechanism.
5. Add fully connected layers after combining the two branches to make the final genre prediction.
6. Train the model using an appropriate loss function and optimizer.
7. Evaluate the model’s performance and discuss how the two types of input data improve the prediction accuracy.

Resources:
- [100 Days of Deep Learning - by CampusX](https://youtube.com/playlist?list=PLKnIA16_RmvYuZauWaPlRTC54KxSNLtNn&si=PvhtesqSkgGpkPWM)

Documentations:
- [Tensorflow Documentation](https://www.tensorflow.org/guide/)
- [PyTorch Documentation](https://pytorch.org/docs/stable/index.html)