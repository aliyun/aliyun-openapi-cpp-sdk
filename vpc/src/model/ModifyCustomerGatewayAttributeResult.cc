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

#include <alibabacloud/vpc/model/ModifyCustomerGatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyCustomerGatewayAttributeResult::ModifyCustomerGatewayAttributeResult() :
	ServiceResult()
{}

ModifyCustomerGatewayAttributeResult::ModifyCustomerGatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyCustomerGatewayAttributeResult::~ModifyCustomerGatewayAttributeResult()
{}

void ModifyCustomerGatewayAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string ModifyCustomerGatewayAttributeResult::getDescription()const
{
	return description_;
}

std::string ModifyCustomerGatewayAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

std::string ModifyCustomerGatewayAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long ModifyCustomerGatewayAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string ModifyCustomerGatewayAttributeResult::getIpAddress()const
{
	return ipAddress_;
}

std::string ModifyCustomerGatewayAttributeResult::getName()const
{
	return name_;
}

