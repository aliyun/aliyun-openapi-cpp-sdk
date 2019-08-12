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

#include <alibabacloud/vpc/model/DescribeCustomerGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeCustomerGatewayResult::DescribeCustomerGatewayResult() :
	ServiceResult()
{}

DescribeCustomerGatewayResult::DescribeCustomerGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomerGatewayResult::~DescribeCustomerGatewayResult()
{}

void DescribeCustomerGatewayResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["CustomerGatewayId"].isNull())
		customerGatewayId_ = value["CustomerGatewayId"].asString();
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());

}

std::string DescribeCustomerGatewayResult::getDescription()const
{
	return description_;
}

std::string DescribeCustomerGatewayResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

long DescribeCustomerGatewayResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeCustomerGatewayResult::getIpAddress()const
{
	return ipAddress_;
}

std::string DescribeCustomerGatewayResult::getName()const
{
	return name_;
}

