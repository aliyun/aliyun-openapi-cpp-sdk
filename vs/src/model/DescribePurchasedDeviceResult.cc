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

#include <alibabacloud/vs/model/DescribePurchasedDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribePurchasedDeviceResult::DescribePurchasedDeviceResult() :
	ServiceResult()
{}

DescribePurchasedDeviceResult::DescribePurchasedDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePurchasedDeviceResult::~DescribePurchasedDeviceResult()
{}

void DescribePurchasedDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["SubType"].isNull())
		subType_ = value["SubType"].asString();
	if(!value["RegisterCode"].isNull())
		registerCode_ = value["RegisterCode"].asString();
	if(!value["Vendor"].isNull())
		vendor_ = value["Vendor"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();

}

std::string DescribePurchasedDeviceResult::getGroupName()const
{
	return groupName_;
}

std::string DescribePurchasedDeviceResult::getType()const
{
	return type_;
}

std::string DescribePurchasedDeviceResult::getDescription()const
{
	return description_;
}

std::string DescribePurchasedDeviceResult::getSubType()const
{
	return subType_;
}

std::string DescribePurchasedDeviceResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribePurchasedDeviceResult::getRegisterCode()const
{
	return registerCode_;
}

std::string DescribePurchasedDeviceResult::getRegion()const
{
	return region_;
}

std::string DescribePurchasedDeviceResult::getId()const
{
	return id_;
}

std::string DescribePurchasedDeviceResult::getVendor()const
{
	return vendor_;
}

std::string DescribePurchasedDeviceResult::getOrderId()const
{
	return orderId_;
}

std::string DescribePurchasedDeviceResult::getName()const
{
	return name_;
}

std::string DescribePurchasedDeviceResult::getGroupId()const
{
	return groupId_;
}

