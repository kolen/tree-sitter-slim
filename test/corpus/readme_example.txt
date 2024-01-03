========================
Example from slim readme
========================

doctype html
html
  head
    title Slim Examples
    meta name="keywords" content="template language"
    meta name="author" content=author
    link rel="icon" type="image/png" href=file_path("favicon.png")
    javascript:
      alert('Slim supports embedded javascript!')

  body
    h1 Markup examples

    #content
      p This example shows you how a basic Slim file looks.

    == yield

    - if items.any?
      table#items
        - for item in items
          tr
            td.name = item.name
            td.price = item.price
    - else
      p No items found. Please add some inventory.
        Thank you!

    div id="footer"
      == render 'footer'
      | Copyright &copy; #{@year} #{@author}

---

(source_file
  (doctype (doctyle_html5))
  (tag_name
    name: (tag_name (element_text))
    name: (tag_name (tag_attributes
      (tag_attribute name: (tag_attribute_name) value: (tag_attribute_value))
      (tag_attribute name: (tag_attribute_name) value: (tag_attribute_value))
)))
)
