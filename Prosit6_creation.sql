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

-- Insérer des clients
INSERT INTO Clients (nom, prenom) VALUES
('Doe', 'John'),
('Smith', 'Alice'),
('Johnson', 'Bob');

-- Insérer des adresses associées aux clients
INSERT INTO Adresses (adresse, ville, cp, Id_personne) VALUES
('123 Rue de la République', 'Lyon', '69001', 1),
('456 Avenue des Champs-Élysées', 'Paris', '75008', 2),
('789 Broad Street', 'New York', '10001', 3);

