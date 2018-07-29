#!/usr/bin/env perl
# coding: utf-8

use strict;
use utf8;

sub _touch {
	my $stream;
	open ($stream, '>>/tmp/.perl');
	print($stream " hello\n");
	close($stream);
}

sub _main {
	while (1) {
		_touch();
		sleep(30);
	}
}

_main();
