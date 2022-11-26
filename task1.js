//Watch uptill the 17th min and write the code as per the youtuber does.
// Manipulate the title of the page and experiment with other things


//console.dir(document);
//console.log(document.domain);
//console.log(document.url);
//console.log(document.title);
// document.title=123
// console.log(document.doctype);
// console.log(document.head);
// console.log(document.body);
// console.log(document.all);
// console.log(document.all[10]);
// document.all[10].textContent='hello;'
// console.log(document.form);
// console.log(document.links);
// console.log(document.images);



//Make the title have a black border as the youtuber does
//Now make ADD ITEM bold and chage the font color to greeen


var header=(document.getElementById('main-header'));
header.style.borderBottom='solid 3px #000';


var main=(document.getElementById('main'));
main.firstElementChild.style.color='green';
main.firstElementChild.style.fontWeight='bold';
