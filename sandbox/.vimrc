noremap <Space> <Nop>
noremap <CR> <Nop>
let mapleader="\<Space>"
set numberwidth=1 
set cc=80 
set nu
set relativenumber
nnoremap <leader>a $a
nnoremap <leader>q<leader> :Files<CR>
noremap <C-S-e> :NERDTreeToggle<CR>
noremap <C-s> :w<CR>

noremap  <leader><CR> :let $VIM_DIR=expand('%:p')<CR> 
        \:rightbelow vert term<CR> clear && runcpp $VIM_DIR<CR>
noremap ñ :vertical resize 85<CR>
 
" configuración en inset
autocmd InsertEnter * set norelativenumber
"autocmd InsertEnter * colorscheme dark3

" configuración en normal
autocmd InsertLeave * set relativenumber
"autocmd InsertLeave * colorscheme gruvbox

call plug#begin('~/.vim/plugged')

Plug 'SirVer/ultisnips'
Plug 'sheerun/vim-polyglot'
Plug 'itchyny/lightline.vim'
Plug 'maximbaz/lightline-ale'         " Thema para lightline
Plug 'morhetz/gruvbox'
Plug 'shinchu/lightline-gruvbox.vim'   " Tema lightlinegruvbox
Plug 'mhinz/vim-signify'               " + o - al añadir/borrar linea
Plug 'yggdroot/indentline'
Plug 'scrooloose/nerdcommenter'
Plug 'junegunn/fzf'
Plug 'junegunn/fzf.vim'
Plug 'dense-analysis/ale'
Plug 'vim-scripts/AutoComplPop'
Plug 'LunarWatcher/auto-pairs'
Plug 'preservim/nerdtree'

call plug#end()

set autoindent
set expandtab
set tabstop=4
set noshowmode

colorscheme dark1
colorscheme gruvbox
