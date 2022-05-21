# Netstructures
## Author
Psideralis
## License
GNU General Public License 3.0 & Psideralis Copyright Commune Public License
## Description
A artefactum data server that contains data and an artefactum data cliente to
send and receive data from the server. It works as a NonSQL data server
based on data structures and artefactum datae or data devices. It is specially 
design for data warehouse with concurrent and distributed clients working as 
components of programs. It can also be installed as a swarm of encrypted servers
with an unique gateway for clients or multiple gateways for regional segmentated
clients.

Data structures includes tables, multimaps and graphs so SQL, NonSQL and Graph
Data Servers can be emulated. Data is periodically backup in hashs. Signed and
certified access is require as per gateway.  Data is periodically backup and 
dynamically stored.


    Conglomerates
        Organizations = []
        Certificates = []
        Data Devices = []
    Organization
        Groups = []
        Certificates = []
        Data Devices = []
    Group
        Users = []
        Certificates = []
        Data Devices = []
    User
        Signature
        Certificates = []
        Data Devices = []

Psideralis offers cloud based data management with Netstuctures from $5/month.