import CivicLink from '../../01-atoms/link/link.twig';
import CivicTable from '../../01-atoms/table/table.twig';
import CivicImage from '../../01-atoms/image/image.twig';
import CivicVideo from '../video/video.twig';
import { demoImage } from '../../00-base/base.stories';

export default {
  title: 'Molecules/Content',
  parameters: {
    layout: 'fullscreen',
    knobs: {
      escapeHTML: false,
    },
  },
};

export const CKEditorContent = () => {
  let html = '';

  // Headings.
  html += `
    <h1>Heading 1</h1>
    <h2>Heading 2</h2>
    <h3>Heading 3</h3>
    <h4>Heading 4</h4>
    <h5>Heading 5</h5>
    <h6>Heading 6</h6>
  `;

  // Paragraphs.
  html += `
    <p>Text without a class sed aute in sed consequat veniam excepteur minim mollit.</p>
    <p class="civic-text-large">Large text sed aute in sed consequat veniam excepteur minim mollit.</p>
    <p class="civic-text-regular">Regular text veniam reprehenderit velit ea veniam occaecat magna est sed duis quis elit occaecat dolore ut enim est do in dolor non elit aliquip commodo aliquip sint veniam ullamco adipisicing tempor ad.</p>
    <p class="civic-text-small">Small text <span>duis sunt velit.</span><span>Ea eu non.</span></p>
    <p>In mollit in minim ut non ${CivicLink({
    theme: 'light',
    text: 'commodo dolore',
    url: 'https://example.com',
  })} nisi anim.</p>
    <p>Deserunt in ex dolore. <sup>Super cupidatat esse.</sup> <sub>Sub do mollit aute labore.</sub></p>
  `;

  // Blockquote.
  html += `
    <blockquote cite="https://example.com">Culpa laboris sit fugiat minim ad commodo eu id sint eu sed nisi.</blockquote>
  `;

  // Lists.
  html += `
    <ul>
      <li>Sint pariatur quis tempor.</li>
      <li>Lorem ipsum dolore laborum nulla ut.</li>
      <li>Deserunt ullamco occaecat anim cillum.</li>
    </ul>
    <ol>
      <li>Id nostrud id sit nulla.</li>
      <li>Dolore ea cillum culpa nulla.</li>
      <li>Lorem ipsum ex excepteur.</li>
    </ol>
  `;

  // Image.
  html += CivicImage({
    theme: 'light',
    src: demoImage(),
    alt: 'Occaecat laborum voluptate cupidatat.',
    caption: 'Commodo anim sint minim.',
  });

  // Video.
  html += CivicVideo({
    theme: 'light',
    src: 'https://www.youtube.com/embed/C0DPdy98e4c',
  });

  // Table.
  html += CivicTable({
    theme: 'light',
    header: [
      'Column A',
      'Column B',
      'Column C',
    ],
    rows: [
      [
        'Do duis minim cupidatat eu.',
        'Ullamco sunt dolore.',
        'Dolor in officia.',
      ],
      [
        'Do duis minim cupidatat eu.',
        'Ullamco sunt dolore.',
        'Dolor in officia.',
      ],
      [
        'Lorem ipsum magna sint.',
        'Consequat qui anim.',
        'Lorem ipsum aliqua veniam deserunt.',
      ],
    ],
  });

  return `<div class="container"><div class="row"><div class="col-xxs-12"><div class="cke_editable">${html}</div></div></div></div></div>`;
};