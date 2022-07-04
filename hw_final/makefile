report:
	cd docs && xelatex report
	cd docs && bibtex report
	cd docs && xelatex report
	cd docs && xelatex report
	cd docs && rm report.aux
	cd docs && rm report.out
	cd docs && rm report.log
	cd docs && rm report.blg
	cd docs && rm report.bbl
	mv ./docs/report.pdf ./
	cd docs && rm report.aux
	cd docs && rm report.out
	cd docs && rm report.log
	cd docs && rm report.blg
	cd docs && rm report.bbl

slide:
	cd docs && xelatex slide.tex
	cd docs && xelatex slide.tex
	cd docs && rm slide.aux
	cd docs && rm slide.log
	cd docs && rm slide.nav
	cd docs && rm slide.out
	cd docs && rm slide.snm
	cd docs && rm slide.toc
	mv ./docs/slide.pdf ./