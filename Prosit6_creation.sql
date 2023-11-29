CREATE TABLE Clients(
   Id_personne INT IDENTITY(1, 1),
   nom VARCHAR(50) NOT NULL,
   prenom VARCHAR(50) NOT NULL,
   PRIMARY KEY(Id_personne)
);

CREATE TABLE Adresses(
   Id_adresse INT IDENTITY(1, 1),
   adresse VARCHAR(50) NOT NULL,
   ville VARCHAR(50) NOT NULL,
   cp VARCHAR(50) NOT NULL,
   Id_personne INT,
   PRIMARY KEY(Id_adresse),
   FOREIGN KEY(Id_personne) REFERENCES Clients(Id_personne)
);

-- Ins�rer des clients
INSERT INTO Clients (nom, prenom) VALUES
('Doe', 'John'),
('Smith', 'Alice'),
('Johnson', 'Bob');

-- Ins�rer des adresses associ�es aux clients
INSERT INTO Adresses (adresse, ville, cp, Id_personne) VALUES
('123 Rue de la R�publique', 'Lyon', '69001', 1),
('456 Avenue des Champs-�lys�es', 'Paris', '75008', 2),
('789 Broad Street', 'New York', '10001', 3);

