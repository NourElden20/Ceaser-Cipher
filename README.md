<b>Ceaser Cipher</b><br>
In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code, or Caesar shift, is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence.

The encryption step performed by a Caesar cipher is often incorporated as part of more complex schemes, such as the Vigenère cipher, and still has modern application in the ROT13 system. As with all single-alphabet substitution ciphers, the Caesar cipher is easily broken and in modern practice offers essentially no communications security.

<b>Examble</b><br>
The transformation can be represented by aligning two alphabets; the cipher alphabet is the plain alphabet rotated left or right by some number of positions. For instance, here is a Caesar cipher using a left rotation of three places, equivalent to a right shift of 23 (the shift parameter is used as the <br>
<table class="wikitable"><tbody><tr style="vertical-align:top"><th scope="row">  Plain</th><td>  A</td><td>B</td><td>C</td><td>D</td><td>E</td><td>F</td><td>G</td><td>H</td><td>I</td><td>J</td><td>K</td><td>L</td><td>M</td><td>N</td><td>O</td><td>P</td><td>Q</td><td>R</td><td>S</td><td>T</td><td>U</td><td>V</td><td>W</td><td>X</td><td>Y</td><td>Z</td></tr><tr style="vertical-align:top"><th scope="row">  Cipher</th><td> X</td><td>Y</td><td>Z</td><td>A</td><td>B</td><td>C</td><td>D</td><td>E</td><td>F</td><td>G</td><td>H</td><td>I</td><td>J</td><td>K</td><td>L</td><td>M</td><td>N</td><td>O</td><td>P</td><td>Q</td><td>R</td><td>S</td><td>T</td><td>U</td><td>V</td><td>W</td></tr></tbody></table>
<p>
  When encrypting, a person looks up each letter of the message in the "plain" line and writes down the corresponding letter in the "cipher" line.
</p>
<pre>Plaintext:  THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
Ciphertext: QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD
</pre>
<p>The encryption can also be represented using <a href="/wiki/Modular_arithmetic" title="Modular arithmetic">modular arithmetic</a> by first transforming the letters into numbers, according to the scheme, A → 0, B → 1, ..., Z → 25.<sup id="cite_ref-2" class="reference"><a href="#cite_note-2">[2]</a></sup> Encryption of a letter <i>x</i> by a shift <i>n</i> can be described mathematically as,<sup id="cite_ref-3" class="reference"><a href="#cite_note-3">[3]</a></sup>
</p>
<dl><dd><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML" alttext="{\displaystyle E_{n}(x)=(x+n)\mod {26}.}">
  <semantics>
    <mrow class="MJX-TeXAtom-ORD">
      <mstyle displaystyle="true" scriptlevel="0">
        <msub>
          <mi>E</mi>
          <mrow class="MJX-TeXAtom-ORD">
            <mi>n</mi>
          </mrow>
        </msub>
        <mo stretchy="false">(</mo>
        <mi>x</mi>
        <mo stretchy="false">)</mo>
        <mo>=</mo>
        <mo stretchy="false">(</mo>
        <mi>x</mi>
        <mo>+</mo>
        <mi>n</mi>
        <mo stretchy="false">)</mo>
        <mspace width="1em"></mspace>
        <mi>mod</mi>
        <mspace width="thinmathspace"></mspace>
        <mspace width="thinmathspace"></mspace>
        <mn>26.</mn>
      </mstyle>
    </mrow>
    <annotation encoding="application/x-tex">{\displaystyle E_{n}(x)=(x+n)\mod {26}.}</annotation>
  </semantics>
</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/77b59c7a676a99610ddee4ffc305aa7f9cda3b1a" class="mwe-math-fallback-image-inline mw-invert skin-invert" aria-hidden="true" style="vertical-align: -0.838ex; width:27.779ex; height:2.843ex;" alt="{\displaystyle E_{n}(x)=(x+n)\mod {26}.}"></span></dd></dl>

<p>Decryption is performed similarly,
</p>
<dl><dd><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML" alttext="{\displaystyle D_{n}(x)=(x-n)\mod {26}.}">
  <semantics>
    <mrow class="MJX-TeXAtom-ORD">
      <mstyle displaystyle="true" scriptlevel="0">
        <msub>
          <mi>D</mi>
          <mrow class="MJX-TeXAtom-ORD">
            <mi>n</mi>
          </mrow>
        </msub>
        <mo stretchy="false">(</mo>
        <mi>x</mi>
        <mo stretchy="false">)</mo>
        <mo>=</mo>
        <mo stretchy="false">(</mo>
        <mi>x</mi>
        <mo>−<!-- − --></mo>
        <mi>n</mi>
        <mo stretchy="false">)</mo>
        <mspace width="1em"></mspace>
        <mi>mod</mi>
        <mspace width="thinmathspace"></mspace>
        <mspace width="thinmathspace"></mspace>
        <mn>26.</mn>
      </mstyle>
    </mrow>
    <annotation encoding="application/x-tex">{\displaystyle D_{n}(x)=(x-n)\mod {26}.}</annotation>
  </semantics>
</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/8ed607e0202ff8d35aa41559f846cac9d358a362" class="mwe-math-fallback-image-inline mw-invert skin-invert" aria-hidden="true" style="vertical-align: -0.838ex; width:27.988ex; height:2.843ex;" alt="{\displaystyle D_{n}(x)=(x-n)\mod {26}.}"></span></dd></dl>
