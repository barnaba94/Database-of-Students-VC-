-- phpMyAdmin SQL Dump
-- version 4.7.9
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 07 Kwi 2018, 17:01
-- Wersja serwera: 10.1.31-MariaDB
-- Wersja PHP: 7.2.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `studenci`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `admin_data`
--

CREATE TABLE `admin_data` (
  `ID` int(11) NOT NULL,
  `Login` varchar(15) NOT NULL,
  `Password` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Zrzut danych tabeli `admin_data`
--

INSERT INTO `admin_data` (`ID`, `Login`, `Password`) VALUES
(1, 'Mikolaj1', 'Felek');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `baza_studentow`
--

CREATE TABLE `baza_studentow` (
  `NbofIndex` int(7) NOT NULL,
  `Name` varchar(20) NOT NULL,
  `Surname` varchar(20) NOT NULL,
  `YearofB` int(5) NOT NULL,
  `MonthofB` int(3) NOT NULL,
  `DayofB` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Zrzut danych tabeli `baza_studentow`
--

INSERT INTO `baza_studentow` (`NbofIndex`, `Name`, `Surname`, `YearofB`, `MonthofB`, `DayofB`) VALUES
(100000, 'Zdzislaw', 'Onderka', 1960, 1, 1),
(111111, 'Arnold', 'Boczek', 1954, 1, 1),
(265623, 'nikola', 'barnaba', 2018, 4, 6),
(268065, 'Mikolaj', 'Tarnawa', 1994, 4, 6),
(268067, 'Michal', 'Wolny', 1994, 3, 1),
(268090, 'Malgorzata', 'Wontor', 1994, 8, 31),
(271076, 'Kacper', 'Pysniak', 1994, 4, 22),
(291023, 'Marta', 'Tarnawa', 2004, 4, 4),
(300000, 'Mateusz', 'Pogoda', 1994, 4, 3);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `studentmarks`
--

CREATE TABLE `studentmarks` (
  `IDofSM` int(10) NOT NULL,
  `ID` int(10) NOT NULL,
  `IDofSubject` int(10) NOT NULL,
  `TypeofMarks` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Zrzut danych tabeli `studentmarks`
--

INSERT INTO `studentmarks` (`IDofSM`, `ID`, `IDofSubject`, `TypeofMarks`) VALUES
(1, 268065, 1, 'dobry'),
(2, 268090, 3, 'niedostateczny'),
(3, 271076, 3, 'bardzo dobry'),
(4, 268065, 6, 'dostateczny'),
(5, 270000, 1, 'bardzo dobry'),
(6, 268065, 1, 'plus dostateczny'),
(7, 268065, 1, 'niedostateczny'),
(8, 255060, 4, 'bardzo dobry'),
(9, 100000, 6, 'niedostateczny'),
(10, 268065, 4, 'plus dobry'),
(11, 300000, 5, 'plus dobry'),
(12, 268065, 2, 'plus dostateczny'),
(13, 291023, 3, 'niedostateczny'),
(14, 111111, 6, 'plus dobry'),
(15, 265623, 4, 'bardzo dobry'),
(16, 268067, 6, 'bardzo dobry');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `subjects`
--

CREATE TABLE `subjects` (
  `IDofSubject` int(10) NOT NULL,
  `NameofSubject` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Zrzut danych tabeli `subjects`
--

INSERT INTO `subjects` (`IDofSubject`, `NameofSubject`) VALUES
(1, 'Geology'),
(2, 'Geophysics'),
(3, 'Physics'),
(4, 'Math'),
(5, 'Chemistry'),
(6, 'Programming');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `admin_data`
--
ALTER TABLE `admin_data`
  ADD PRIMARY KEY (`ID`);

--
-- Indeksy dla tabeli `baza_studentow`
--
ALTER TABLE `baza_studentow`
  ADD PRIMARY KEY (`NbofIndex`);

--
-- Indeksy dla tabeli `studentmarks`
--
ALTER TABLE `studentmarks`
  ADD PRIMARY KEY (`IDofSM`);

--
-- Indeksy dla tabeli `subjects`
--
ALTER TABLE `subjects`
  ADD PRIMARY KEY (`IDofSubject`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT dla tabeli `admin_data`
--
ALTER TABLE `admin_data`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT dla tabeli `studentmarks`
--
ALTER TABLE `studentmarks`
  MODIFY `IDofSM` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
