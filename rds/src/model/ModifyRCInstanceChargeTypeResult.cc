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

#include <alibabacloud/rds/model/ModifyRCInstanceChargeTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyRCInstanceChargeTypeResult::ModifyRCInstanceChargeTypeResult() :
	ServiceResult()
{}

ModifyRCInstanceChargeTypeResult::ModifyRCInstanceChargeTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyRCInstanceChargeTypeResult::~ModifyRCInstanceChargeTypeResult()
{}

void ModifyRCInstanceChargeTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeeOfInstancesNode = value["FeeOfInstances"]["FeeOfInstance"];
	for (auto valueFeeOfInstancesFeeOfInstance : allFeeOfInstancesNode)
	{
		FeeOfInstance feeOfInstancesObject;
		if(!valueFeeOfInstancesFeeOfInstance["Currency"].isNull())
			feeOfInstancesObject.currency = valueFeeOfInstancesFeeOfInstance["Currency"].asString();
		if(!valueFeeOfInstancesFeeOfInstance["Fee"].isNull())
			feeOfInstancesObject.fee = valueFeeOfInstancesFeeOfInstance["Fee"].asString();
		if(!valueFeeOfInstancesFeeOfInstance["InstanceId"].isNull())
			feeOfInstancesObject.instanceId = valueFeeOfInstancesFeeOfInstance["InstanceId"].asString();
		feeOfInstances_.push_back(feeOfInstancesObject);
	}
	auto allInstanceIds = value["InstanceIds"]["instanceId"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	auto allExpiredTime = value["ExpiredTime"]["instanceIdExpiredTime"];
	for (const auto &item : allExpiredTime)
		expiredTime_.push_back(item.asString());
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::vector<ModifyRCInstanceChargeTypeResult::FeeOfInstance> ModifyRCInstanceChargeTypeResult::getFeeOfInstances()const
{
	return feeOfInstances_;
}

std::string ModifyRCInstanceChargeTypeResult::getChargeType()const
{
	return chargeType_;
}

std::vector<std::string> ModifyRCInstanceChargeTypeResult::getExpiredTime()const
{
	return expiredTime_;
}

std::vector<std::string> ModifyRCInstanceChargeTypeResult::getInstanceIds()const
{
	return instanceIds_;
}

std::string ModifyRCInstanceChargeTypeResult::getOrderId()const
{
	return orderId_;
}

