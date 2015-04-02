/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.
    
     /* main  menu - add action */
    $('.region-header .main-menu .block-title').click(function() {
        if ($('.region-header .main-menu').hasClass('menu-active')) {
            $('.region-header .main-menu').removeClass('menu-active');
        }
        else {
            $('.region-header .main-menu').addClass('menu-active');
        }
    });
    
    // product hotspot functions 
    $('.product-image .hotspot').hover(function() {
        if ($(this).hasClass('left')) {
            $('.product-container .ttip.left').addClass('active');
        }
        else {
            $('.product-container .ttip.right').addClass('active');
        }
    });
    
    // product comparison functions
    // set 2nd item as default active
    $('.comparison-buttons li:nth-child(2) button').addClass('active');
    $('.comparison-images img:nth-child(2)').addClass('active');
    $('.comparison-table tr td:nth-child(2)').addClass('active');
    $('.comparison-table tr th:nth-child(2)').addClass('active');
    // on button click, make associated items active
    $('.comparison-buttons button').click(function() {
        $('.comparison-buttons li button').removeClass('active');
        $('.comparison-images img').removeClass('active');
        $('.comparison-table td').removeClass('active');
        $('.comparison-table th').removeClass('active');
        // display associated image; find associated table column and display
        var nth_child = $('.comparison-buttons button').index(this) + 1;
        $(this).addClass('active');
        $('.comparison-images img:nth-child('+nth_child+')').addClass('active');
        $('.comparison-table tr td:nth-child('+nth_child+')').addClass('active');
        $('.comparison-table tr th:nth-child('+nth_child+')').addClass('active');
        console.log(nth_child);
    });
    
    // product features functions
    $('.feature-buttons button').click(function() {
        $('.feature-buttons button').removeClass('active');
        $('.feature-description div').removeClass('active');
        var f_id = $(this).attr('id');
        $(this).addClass('active');
        $('.feature-description .'+f_id).addClass('active');
    })

  }
};


})(jQuery, Drupal, this, this.document);
