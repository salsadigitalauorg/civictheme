import { radios, text } from '@storybook/addon-knobs'

import CivicSkipLink from './skip-link.twig'
import './skip-link.scss'

export default {
  title: 'Atom/Skip Link',
}

export const SkipLink = () => CivicSkipLink({
  theme: radios(
    'Theme', {
      'Light': 'light',
      'Dark': 'dark',
    },
    'light',
  ),
  text: text('Text', 'Skip to main content'),
  url: text('URL', '#main-content')
});