// Copyright (c) 2017 The Mangaka developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef Mangaka_ACCUMULATORMAP_H
#define Mangaka_ACCUMULATORMAP_H

#include "libzerocoin/Accumulator.h"
#include "libzerocoin/Coin.h"

//A map with an accumulator for each denomination
class AccumulatorMap
{
private:
    std::map<libzerocoin::CoinDenomination, std::unique_ptr<libzerocoin::Accumulator> > mapAccumulators;
public:
    AccumulatorMap();
    bool Load(uint256 nCheckpoint);
    bool Accumulate(libzerocoin::PublicCoin pubCoin, bool fSkipValidation = false);
    CBigNum GetValue(libzerocoin::CoinDenomination denom);
    uint256 GetCheckpoint();
    void Reset();
};
#endif //Mangaka_ACCUMULATORMAP_H
