-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: 2016-01-15 08:10:07
-- 服务器版本： 5.6.17
-- PHP Version: 5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `lyb`
--

-- --------------------------------------------------------

--
-- 表的结构 `lyb`
--

CREATE TABLE IF NOT EXISTS `lyb` (
  `id` int(8) NOT NULL AUTO_INCREMENT,
  `lyb` text NOT NULL,
  PRIMARY KEY (`id`),
  KEY `id` (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- 转存表中的数据 `lyb`
--

INSERT INTO `lyb` (`id`, `lyb`) VALUES
(3, 'æˆ‘å°±æ˜¯è¯•ä¸€ä¸‹ã€‚'),
(4, 'çŽ°åœ¨å†è¯•ä¸€ä¸‹ã€‚'),
(5, 'åº”è¯¥æ²¡æœ‰é—®é¢˜äº†ã€‚');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
