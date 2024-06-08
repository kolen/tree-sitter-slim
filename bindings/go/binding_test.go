package tree_sitter_slim_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-slim"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_slim.Language())
	if language == nil {
		t.Errorf("Error loading Slim grammar")
	}
}
