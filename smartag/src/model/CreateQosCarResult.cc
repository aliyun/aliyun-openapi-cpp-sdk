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

#include <alibabacloud/smartag/model/CreateQosCarResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateQosCarResult::CreateQosCarResult() :
	ServiceResult()
{}

CreateQosCarResult::CreateQosCarResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateQosCarResult::~CreateQosCarResult()
{}

void CreateQosCarResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MinBandwidthAbs"].isNull())
		minBandwidthAbs_ = std::stoi(value["MinBandwidthAbs"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["QosCarId"].isNull())
		qosCarId_ = value["QosCarId"].asString();
	if(!value["MaxBandwidthAbs"].isNull())
		maxBandwidthAbs_ = std::stoi(value["MaxBandwidthAbs"].asString());
	if(!value["MaxBandwidthPercent"].isNull())
		maxBandwidthPercent_ = std::stoi(value["MaxBandwidthPercent"].asString());
	if(!value["Priority"].isNull())
		priority_ = std::stoi(value["Priority"].asString());
	if(!value["QosId"].isNull())
		qosId_ = value["QosId"].asString();
	if(!value["PercentSourceType"].isNull())
		percentSourceType_ = value["PercentSourceType"].asString();
	if(!value["MinBandwidthPercent"].isNull())
		minBandwidthPercent_ = std::stoi(value["MinBandwidthPercent"].asString());
	if(!value["LimitType"].isNull())
		limitType_ = value["LimitType"].asString();

}

int CreateQosCarResult::getMinBandwidthAbs()const
{
	return minBandwidthAbs_;
}

std::string CreateQosCarResult::getDescription()const
{
	return description_;
}

std::string CreateQosCarResult::getQosCarId()const
{
	return qosCarId_;
}

int CreateQosCarResult::getMaxBandwidthAbs()const
{
	return maxBandwidthAbs_;
}

int CreateQosCarResult::getMaxBandwidthPercent()const
{
	return maxBandwidthPercent_;
}

int CreateQosCarResult::getPriority()const
{
	return priority_;
}

std::string CreateQosCarResult::getQosId()const
{
	return qosId_;
}

std::string CreateQosCarResult::getPercentSourceType()const
{
	return percentSourceType_;
}

int CreateQosCarResult::getMinBandwidthPercent()const
{
	return minBandwidthPercent_;
}

std::string CreateQosCarResult::getLimitType()const
{
	return limitType_;
}

