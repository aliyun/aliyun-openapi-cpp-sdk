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

#include <alibabacloud/alidns/model/DescribeGtmInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmInstanceStatusResult::DescribeGtmInstanceStatusResult() :
	ServiceResult()
{}

DescribeGtmInstanceStatusResult::DescribeGtmInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmInstanceStatusResult::~DescribeGtmInstanceStatusResult()
{}

void DescribeGtmInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AddrNotAvailableNum"].isNull())
		addrNotAvailableNum_ = std::stoi(value["AddrNotAvailableNum"].asString());
	if(!value["AddrPoolNotAvailableNum"].isNull())
		addrPoolNotAvailableNum_ = std::stoi(value["AddrPoolNotAvailableNum"].asString());
	if(!value["SwitchToFailoverStrategyNum"].isNull())
		switchToFailoverStrategyNum_ = std::stoi(value["SwitchToFailoverStrategyNum"].asString());
	if(!value["StrategyNotAvailableNum"].isNull())
		strategyNotAvailableNum_ = std::stoi(value["StrategyNotAvailableNum"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StatusReason"].isNull())
		statusReason_ = value["StatusReason"].asString();

}

std::string DescribeGtmInstanceStatusResult::getStatus()const
{
	return status_;
}

int DescribeGtmInstanceStatusResult::getStrategyNotAvailableNum()const
{
	return strategyNotAvailableNum_;
}

int DescribeGtmInstanceStatusResult::getSwitchToFailoverStrategyNum()const
{
	return switchToFailoverStrategyNum_;
}

std::string DescribeGtmInstanceStatusResult::getStatusReason()const
{
	return statusReason_;
}

int DescribeGtmInstanceStatusResult::getAddrNotAvailableNum()const
{
	return addrNotAvailableNum_;
}

int DescribeGtmInstanceStatusResult::getAddrPoolNotAvailableNum()const
{
	return addrPoolNotAvailableNum_;
}

