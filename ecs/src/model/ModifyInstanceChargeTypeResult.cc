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

#include <alibabacloud/ecs/model/ModifyInstanceChargeTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ModifyInstanceChargeTypeResult::ModifyInstanceChargeTypeResult() :
	ServiceResult()
{}

ModifyInstanceChargeTypeResult::ModifyInstanceChargeTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyInstanceChargeTypeResult::~ModifyInstanceChargeTypeResult()
{}

void ModifyInstanceChargeTypeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allFeeOfInstances = value["FeeOfInstances"]["FeeOfInstance"];
	for (auto value : allFeeOfInstances)
	{
		FeeOfInstance feeOfInstancesObject;
		if(!value["InstanceId"].isNull())
			feeOfInstancesObject.instanceId = value["InstanceId"].asString();
		if(!value["Fee"].isNull())
			feeOfInstancesObject.fee = value["Fee"].asString();
		if(!value["Currency"].isNull())
			feeOfInstancesObject.currency = value["Currency"].asString();
		feeOfInstances_.push_back(feeOfInstancesObject);
	}
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::vector<ModifyInstanceChargeTypeResult::FeeOfInstance> ModifyInstanceChargeTypeResult::getFeeOfInstances()const
{
	return feeOfInstances_;
}

std::string ModifyInstanceChargeTypeResult::getOrderId()const
{
	return orderId_;
}

