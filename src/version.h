// Copyright (c) 2012-2014 The Bitcoin developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2019-2019 The Wavercoin developers
//
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 25102;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 210;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 25202;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION_ENFORCEMENT = 25102;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 25302;

//! only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 25302;
static const int NOBLKS_VERSION_END = 25702;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 26002;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 26004;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 27002;


#endif // BITCOIN_VERSION_H
