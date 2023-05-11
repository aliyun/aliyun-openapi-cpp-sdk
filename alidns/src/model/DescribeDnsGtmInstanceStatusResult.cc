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

#include <alibabacloud/alidns/model/DescribeDnsGtmInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmInstanceStatusResult::DescribeDnsGtmInstanceStatusResult() :
	ServiceResult()
{}

DescribeDnsGtmInstanceStatusResult::DescribeDnsGtmInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmInstanceStatusResult::~DescribeDnsGtmInstanceStatusResult()
{}

void DescribeDnsGtmInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StrategyNotAvailableNum"].isNull())
		strategyNotAvailableNum_ = std::stoi(value["StrategyNotAvailableNum"].asString());
	if(!value["AddrAvailableNum"].isNull())
		addrAvailableNum_ = std::stoi(value["AddrAvailableNum"].asString());
	if(!value["SwitchToFailoverStrategyNum"].isNull())
		switchToFailoverStrategyNum_ = std::stoi(value["SwitchToFailoverStrategyNum"].asString());
	if(!value["AddrNotAvailableNum"].isNull())
		addrNotAvailableNum_ = std::stoi(value["AddrNotAvailableNum"].asString());
	if(!value["AddrPoolGroupNotAvailableNum"].isNull())
		addrPoolGroupNotAvailableNum_ = std::stoi(value["AddrPoolGroupNotAvailableNum"].asString());

}

int DescribeDnsGtmInstanceStatusResult::getStrategyNotAvailableNum()const
{
	return strategyNotAvailableNum_;
}

int DescribeDnsGtmInstanceStatusResult::getAddrAvailableNum()const
{
	return addrAvailableNum_;
}

int DescribeDnsGtmInstanceStatusResult::getSwitchToFailoverStrategyNum()const
{
	return switchToFailoverStrategyNum_;
}

int DescribeDnsGtmInstanceStatusResult::getAddrNotAvailableNum()const
{
	return addrNotAvailableNum_;
}

int DescribeDnsGtmInstanceStatusResult::getAddrPoolGroupNotAvailableNum()const
{
	return addrPoolGroupNotAvailableNum_;
}

