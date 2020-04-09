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

#include <alibabacloud/retailcloud/model/GetInstTransInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

GetInstTransInfoResult::GetInstTransInfoResult() :
	ServiceResult()
{}

GetInstTransInfoResult::GetInstTransInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstTransInfoResult::~GetInstTransInfoResult()
{}

void GetInstTransInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["instanceId"].isNull())
		instanceId_ = value["instanceId"].asString();
	if(!value["isAutoRenew"].isNull())
		isAutoRenew_ = value["isAutoRenew"].asString() == "true";
	if(!value["renewCycle"].isNull())
		renewCycle_ = std::stoi(value["renewCycle"].asString());
	if(!value["chargeType"].isNull())
		chargeType_ = value["chargeType"].asString();
	if(!value["endTime"].isNull())
		endTime_ = std::stol(value["endTime"].asString());
	if(!value["startTime"].isNull())
		startTime_ = std::stol(value["startTime"].asString());

}

long GetInstTransInfoResult::getEndTime()const
{
	return endTime_;
}

std::string GetInstTransInfoResult::getInstanceId()const
{
	return instanceId_;
}

std::string GetInstTransInfoResult::getChargeType()const
{
	return chargeType_;
}

long GetInstTransInfoResult::getStartTime()const
{
	return startTime_;
}

bool GetInstTransInfoResult::getIsAutoRenew()const
{
	return isAutoRenew_;
}

int GetInstTransInfoResult::getRenewCycle()const
{
	return renewCycle_;
}

