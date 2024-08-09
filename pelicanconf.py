AUTHOR = "Alessio Blascovich"
SITENAME = "Alessio Blascovich"
HOME = "https://elblasco.github.io"
THEME = "theme"
PATH = "content"
INDEX_SAVE_AS = "index.html"
STATIC_PATHS = ['extra', 'images', '.well-known']
PAGE_PATHS = ['.well-known', 'indices', 'pages']
ARTICLE_PATHS = ['articles']

TIMEZONE = 'Europe/Rome'

DEFAULT_LANG = 'en'

DATE_FORMATS = {
    'en': '%Y-%m-%d'
}

DEFAULT_METADATA = {
    'authors': 'Alessio Blascovich',
    'lang': 'en'
}

EXTRA_PATH_METADATA = {
    'extra/favicon.ico': {'path': 'favicon.ico'}
}

# Feed generation is usually not desired when developing
FEED_ALL_ATOM = None
CATEGORY_FEED_ATOM = None
TRANSLATION_FEED_ATOM = None
AUTHOR_FEED_ATOM = None
AUTHOR_FEED_RSS = None

GITHUB_URL = "http://github.com/elblasco"

# Social widget
SOCIAL = (
    ("LinkedIn", "https://www.linkedin.com/in/alessio-blascovich/"),
    ("GitHub", "https://github.com/elblasco")
)


DEFAULT_PAGINATION = 5

# Uncomment following line if you want document-relative URLs when developing
# RELATIVE_URLS = True

ARTICLE_URL = 'articles/{slug}.html'
ARTICLE_SAVE_AS = 'articles/{slug}.html'
PAGE_URL = 'pages/{slug}/'
PAGE_SAVE_AS = 'pages/{slug}/index.html'
