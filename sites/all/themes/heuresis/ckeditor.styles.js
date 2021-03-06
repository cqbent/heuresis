/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 'drupal',
    [
            /* HEURESIS custom text classes */
        { name : 'Feature Text'	, element : 'p', attributes : { 'class' : 'feature-text' } },  
        { name : 'Small Text', element : 'span', attributes : { 'class' : 'small-text' } },
        { name : 'Quote', element : 'p', attributes : { 'class' : 'quote' } },
        { name : 'Image on Left' , element : 'img', attributes : { 'class' : 'img-left' } },    
        { name : 'Image on Right' , element : 'img', attributes : { 'class' : 'img-right' } }   
    ]);
}