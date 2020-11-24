/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ddoscoo/model/DescribeDomainQpsWithCacheResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainQpsWithCacheResult::DescribeDomainQpsWithCacheResult() :
	ServiceResult()
{}

DescribeDomainQpsWithCacheResult::DescribeDomainQpsWithCacheResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainQpsWithCacheResult::~DescribeDomainQpsWithCacheResult()
{}

void DescribeDomainQpsWithCacheResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTotals = value["Totals"]["Total"];
	for (const auto &item : allTotals)
		totals_.push_back(item.asString());
	auto allBlocks = value["Blocks"]["Block"];
	for (const auto &item : allBlocks)
		blocks_.push_back(item.asString());
	auto allCacheHits = value["CacheHits"]["CacheHit"];
	for (const auto &item : allCacheHits)
		cacheHits_.push_back(item.asString());
	auto allPreciseBlocks = value["PreciseBlocks"]["PreciseBlock"];
	for (const auto &item : allPreciseBlocks)
		preciseBlocks_.push_back(item.asString());
	auto allRegionBlocks = value["RegionBlocks"]["RegionBlock"];
	for (const auto &item : allRegionBlocks)
		regionBlocks_.push_back(item.asString());
	auto allIpBlockQps = value["IpBlockQps"]["IpBlock"];
	for (const auto &item : allIpBlockQps)
		ipBlockQps_.push_back(item.asString());
	auto allCcJsQps = value["CcJsQps"]["CcJs"];
	for (const auto &item : allCcJsQps)
		ccJsQps_.push_back(item.asString());
	auto allPreciseJsQps = value["PreciseJsQps"]["PreciseJs"];
	for (const auto &item : allPreciseJsQps)
		preciseJsQps_.push_back(item.asString());
	auto allCcBlockQps = value["CcBlockQps"]["CcBlock"];
	for (const auto &item : allCcBlockQps)
		ccBlockQps_.push_back(item.asString());
	if(!value["Interval"].isNull())
		interval_ = std::stoi(value["Interval"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());

}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getIpBlockQps()const
{
	return ipBlockQps_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getCcJsQps()const
{
	return ccJsQps_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getBlocks()const
{
	return blocks_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getPreciseBlocks()const
{
	return preciseBlocks_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getPreciseJsQps()const
{
	return preciseJsQps_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getTotals()const
{
	return totals_;
}

long DescribeDomainQpsWithCacheResult::getStartTime()const
{
	return startTime_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getCcBlockQps()const
{
	return ccBlockQps_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getCacheHits()const
{
	return cacheHits_;
}

std::vector<std::string> DescribeDomainQpsWithCacheResult::getRegionBlocks()const
{
	return regionBlocks_;
}

int DescribeDomainQpsWithCacheResult::getInterval()const
{
	return interval_;
}

