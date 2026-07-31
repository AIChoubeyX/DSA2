import requests
from bs4 import BeautifulSoup

def decode_secret_message(url):
    # Get the published Google Doc
    html = requests.get(url).text
    soup = BeautifulSoup(html, "html.parser")

    # Find the table
    table = soup.find("table")

    rows = table.find_all("tr")[1:]  # Skip header

    points = []

    max_x = 0
    max_y = 0

    for row in rows:
        cols = [c.get_text(strip=True) for c in row.find_all(["td", "th"])]

        if len(cols) != 3:
            continue

        x = int(cols[0])
        ch = cols[1]
        y = int(cols[2])

        points.append((x, y, ch))

        max_x = max(max_x, x)
        max_y = max(max_y, y)

    # Create empty grid
    grid = [[" " for _ in range(max_x + 1)] for _ in range(max_y + 1)]

    # Place characters
    for x, y, ch in points:
        grid[y][x] = ch

    # Print result
    for row in grid:
        print("".join(row))


url = "https://docs.google.com/document/d/e/2PACX-1vSvM5gDlNvt7npYHhp_XfsJvuntUhq184By5xO_pA4b_gCWeXb6dM6ZxwN8rE6S4ghUsCj2VKR21oEP/pub"

decode_secret_message(url)