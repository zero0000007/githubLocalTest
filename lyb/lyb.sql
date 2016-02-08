-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: 2016-02-08 09:59:53
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
-- 表的结构 `admin`
--

CREATE TABLE IF NOT EXISTS `admin` (
  `id` int(8) NOT NULL,
  `username` text NOT NULL,
  `password` text NOT NULL,
  KEY `id` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- 转存表中的数据 `admin`
--

INSERT INTO `admin` (`id`, `username`, `password`) VALUES
(1, 'qqq', '7c222fb2927d828af22f592134e8932480637c0d');

-- --------------------------------------------------------

--
-- 表的结构 `cookie`
--

CREATE TABLE IF NOT EXISTS `cookie` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `bj` int(11) NOT NULL,
  `zy` int(11) NOT NULL,
  `dTime` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `id` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- 表的结构 `lyb`
--

CREATE TABLE IF NOT EXISTS `lyb` (
  `id` int(8) NOT NULL AUTO_INCREMENT,
  `name` int(11) NOT NULL,
  `lyb` text NOT NULL,
  PRIMARY KEY (`id`),
  KEY `id` (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- 转存表中的数据 `lyb`
--

INSERT INTO `lyb` (`id`, `name`, `lyb`) VALUES
(3, 0, 'æˆ‘å°±æ˜¯è¯•ä¸€ä¸‹ã€‚'),
(5, 0, 'åº”è¯¥æ²¡æœ‰é—®é¢˜äº†ã€‚');

-- --------------------------------------------------------

--
-- 表的结构 `mcookie`
--

CREATE TABLE IF NOT EXISTS `mcookie` (
  `mCookie` int(11) NOT NULL,
  `nCookie` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- 转存表中的数据 `mcookie`
--

INSERT INTO `mcookie` (`mCookie`, `nCookie`) VALUES
(20, 0);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
