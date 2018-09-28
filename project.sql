USE Pokemon;
#1번
select name from Trainer as T,CatchedPokemon as C where T.id=C.owner_id group by T.name having count(owner_id)>2 order by count(owner_id) asc;
#2번
select name from Pokemon,(select type,count(type) as counter from Pokemon group by type order by counter desc limit 2) as Type where Pokemon.type  = Type.type order by name asc;
#3번
select name from Pokemon where name like '_o%' order by name asc;
#4번
select nickname from CatchedPokemon where level>=50 order by nickname asc;
#5번
select name from Pokemon where char_length(name)=6 order by name asc;.
#6번
select name from Trainer where hometown = 'Blue City' order by name asc;
#7번
select distinct hometown from Trainer order by hometown asc;
#8번
select AVG(level) from CatchedPokemon as C,Trainer as T where T.name = 'Red' and T.id = C.owner_id;
#9번
select nickname from CatchedPokemon where nickname not like 'T%' order by nickname asc;
#10번
select nickname from CatchedPokemon where level>= 50 and owner_id>=6 order by nickname asc;
#11번
select id,name from Pokemon order by id asc;
#12번
select level,nickname from CatchedPokemon where level <=50 order by level asc;
#13번
select  P.id,P.name from Trainer as T,Pokemon as P,CatchedPokemon as C where T.hometown = 'Sangnok City' and C.owner_id = T.id and P.id =C.pid order by P.id asc; 
#14번
select  C.nickname from Gym as G,CatchedPokemon as C,Pokemon as P where G.leader_id = C.owner_id and P.type = 'Water' order by nickname asc;
#15번
select Count(pid) As 'EvovableNum_Pokemon' from CatchedPokemon as C,Evolution as E where C.pid = E.before_id;
#16번
select Count(*) as 'TotalNum' from Pokemon as P where P.type ='Water' or P.type ='Electric' or P.type = 'Psychic'; 
#17번
select count(owner_id) from CatchedPokemon,Trainer where owner_id = Trainer.id and hometown = 'Sangnok City';
#18번
select Max(level) as 'MaxLevel' from CatchedPokemon as C,Trainer as T where T.hometown = 'Sangnok City' and T.id = C.owner_id;
#19번
select count(distinct type) from Pokemon,CatchedPokemon,Trainer,Gym where owner_id =Trainer.id and Gym.leader_id and Trainer.hometown = 'Sangnok City';
#20번
select T.name,Count(C.pid) as NumPokemon from Trainer as T,CatchedPokemon as C where C.owner_id = T.id and T.hometown = 'Sangnok City' group by T.name order by Count(C.pid) asc;
#21번
select name from Pokemon where name like 'a%' or name like 'e%' or name like 'i%' or name like 'o%' or name like 'u%';
#22번
select type,count(type) from Pokemon group by type order by count(type) asc,type asc;
#23번
select distinct T.name from Trainer as T,CatchedPokemon as C where C.level <=10 and C.owner_id = T.id order by T.name asc;
#24번
select Ci.name,AVG(level) as average from City as Ci,CatchedPokemon as C,Trainer as T where Ci.name = T.hometown and T.id = C.owner_id group by Ci.name order by avg(level) asc;
#25번
select Pokemon.name from Pokemon,Trainer,CatchedPokemon where Pokemon.id = CatchedPokemon.pid and CatchedPokemon.owner_id =Trainer.id and Trainer.hometown = 'Sangnok City' and Pokemon.id  in(select CatchedPokemon.pid from CatchedPokemon,Trainer where CatchedPokemon.owner_id = Trainer.id and Trainer.hometown ='Brown City') group by pid;
#26번
select P.name from Pokemon as P,CatchedPokemon as C where P.id = C.pid and C.nickname like '% %' order by P.name desc;
#27번
select T.name,Max(level) from Trainer as T,CatchedPokemon as C where T.id = C.owner_id group by T.name having count(C.owner_id)>3 order by T.name asc;
#28번
select T.name,avg(level) from Trainer as T,CatchedPokemon as C,Pokemon as P where P.id = C.pid and C.owner_id = T.id and P.type in ('Normal','Electric') group by T.name order by avg(level) asc;
#29번
select P.name,T.name,C.description from Pokemon as P,Trainer as T,City as C,CatchedPokemon as Cp where P.id = 152 and P.id = Cp.pid and Cp.owner_id = T.id and T.hometown = C.name order by Cp.level desc;
#30번
select P1.id ,P1.name as first ,P2.name as second,P3.name as third from Pokemon as P1,Pokemon as P2,Pokemon as P3,Evolution as E1,Evolution as E2 where P1.id = E1.before_id and P2.id = E1.after_id and P2.id = E2.before_id and P3.id = E2.after_id order by P1.id asc;
#31번
select name from Pokemon where length(id)=2 order by name asc;
#32번.
select Pokemon.name from Pokemon left join CatchedPokemon on Pokemon.id = CatchedPokemon.pid where pid is null;
#33번
select sum(level) from CatchedPokemon as C,Trainer as T where C.owner_id = T.id and T.name = 'Matis';
#34번
select T.name from Trainer as T,Gym as G where G.leader_id = T.id order by T.name asc;
#35번
select type,count(type)/counting * 100 as rateOfType from Pokemon,(select count(id) as counting from Pokemon)as P group by type order by count(type) desc limit 1; 
#36번
select T.name from Trainer as T,CatchedPokemon as C where C.owner_id = T.id and C.nickname like 'A%' order by T.name asc;
#37번
select distinct name,max(sumLevel) from (select T.name as name,sum(level) as sumLevel from CatchedPokemon as C,Trainer as T where C.owner_id = T.id group by T.name order by sumlevel desc) as sum;
#38번
select p2.name from Pokemon as p1,Pokemon as p2,Evolution as e1 where p1.id = e1.before_id and p2.id = e1.after_id and p2.name not in(select P3.name from Pokemon as P1,Pokemon as P2,Pokemon as P3,Evolution as E1,Evolution as E2 where P1.id = E1.before_id and P2.id = E1.after_id and P2.id = E2.before_id and P3.id = E2.after_id);
#39번
select name from (select Trainer.name,CatchedPokemon.pid from CatchedPokemon,Trainer where Trainer.id = CatchedPokemon.owner_id order by name) as X group by name having (count(pid)-count(distinct pid))>0 order by name asc;
#40번
select hometown,nickname from (select level,nickname,hometown from CatchedPokemon,Trainer where Trainer.id = CatchedPokemon.owner_id order by level desc) as A group by hometown order by hometown asc;


