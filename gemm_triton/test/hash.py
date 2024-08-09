import hashlib
from typing import List

def hash_signature(signature: List[str]):
    m = hashlib.sha256()
    m.update(" ".join(signature).encode())
    return m.hexdigest()[:8]

args = type("Args", (), {"num_warps": 2, "num_stages": 5, "signature" :"*fp32:16, *fp32:16, *fp32:16, i32,i32,i32, i32,i32, i32,i32, i32,i32,32,64,32,4"})()
meta_sig = f"warps{args.num_warps}xstages{args.num_stages}"


signature = list(map(lambda s: s.strip(" "), args.signature.split(",")))
sig_hash = hash_signature(signature + [meta_sig])

print(f"{signature}")
print(f"{signature + [meta_sig]}")

print(f"Meta Signature: {meta_sig}")
print(f"Signature Hash: {sig_hash}")