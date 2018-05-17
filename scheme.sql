BEGIN TRANSACTION;
-- DROP TABLE IF EXISTS `user`;
CREATE TABLE IF NOT EXISTS `user` (
  `id`  INTEGER PRIMARY KEY AUTOINCREMENT,
  `user_id` TEXT NOT NULL,
  `user_name` TEXT NOT NULL,
  `site_name` TEXT,
  `site_user` TEXT,
  `site_pass` TEXT,
  `date` INTEGER NOT NULL
);
COMMIT;
