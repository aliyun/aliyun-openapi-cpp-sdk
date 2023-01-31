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

#include <alibabacloud/vpc/model/CreateCustomerGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateCustomerGatewayResult::CreateCustomerGatewayResult() :
	ServiceResult()
{}

CreateCustomerGatewayResult::CreateCustomerGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCustomerGatewayResult::~CreateCustomerGatewayResult()
{}

void CreateCustomerGatewayResult::parse(const std::string &payload)
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

}

std::string CreateCustomerGatewayResult::getDescription()const
{
	return description_;
}

std::string CreateCustomerGatewayResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

long CreateCustomerGatewayResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateCustomerGatewayResult::getIpAddress()const
{
	return ipAddress_;
}

std::string CreateCustomerGatewayResult::getName()const
{
	return name_;
}

