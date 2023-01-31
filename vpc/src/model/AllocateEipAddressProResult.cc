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

#include <alibabacloud/vpc/model/AllocateEipAddressProResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

AllocateEipAddressProResult::AllocateEipAddressProResult() :
	ServiceResult()
{}

AllocateEipAddressProResult::AllocateEipAddressProResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AllocateEipAddressProResult::~AllocateEipAddressProResult()
{}

void AllocateEipAddressProResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["EipAddress"].isNull())
		eipAddress_ = value["EipAddress"].asString();
	if(!value["AllocationId"].isNull())
		allocationId_ = value["AllocationId"].asString();

}

std::string AllocateEipAddressProResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string AllocateEipAddressProResult::getAllocationId()const
{
	return allocationId_;
}

std::string AllocateEipAddressProResult::getEipAddress()const
{
	return eipAddress_;
}

long AllocateEipAddressProResult::getOrderId()const
{
	return orderId_;
}

