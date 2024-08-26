python3 examples/quant_model.py \
--model_path ${model_path} \
--tokenizer_path ${tokenizer_path} \
--batch_size 8 \
--dtype float16 \
--quant_config quant_config/llama/w4a8.yaml \ # uses quant_config/llama/w4a8-pergroup.yaml for per-group weigth quantization
--save_path ${save_path}