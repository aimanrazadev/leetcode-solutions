# Setup checklist

- [ ] Create an empty GitHub repository named `leetcode-solutions`.
- [ ] Upload `.github/workflows/leetcode-sync.yml` and `README.md`.
- [ ] Open GitHub repository Settings → Secrets and variables → Actions.
- [ ] Add `LEETCODE_SESSION`.
- [ ] Add `LEETCODE_CSRF_TOKEN`.
- [ ] Open Settings → Actions → General.
- [ ] Set Workflow permissions to **Read and write permissions**.
- [ ] Open Actions → **Sync LeetCode Solutions** → **Run workflow**.
- [ ] Check that the run finishes successfully.
- [ ] Submit a new LeetCode solution and wait for the next scheduled run.
