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

#include <alibabacloud/vpc/model/DescribeCustomerGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeCustomerGatewaysResult::DescribeCustomerGatewaysResult() :
	ServiceResult()
{}

DescribeCustomerGatewaysResult::DescribeCustomerGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomerGatewaysResult::~DescribeCustomerGatewaysResult()
{}

void DescribeCustomerGatewaysResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCustomerGateways = value["CustomerGateways"]["CustomerGateway"];
	for (auto value : allCustomerGateways)
	{
		CustomerGateway customerGatewaysObject;
		if(!value["CustomerGatewayId"].isNull())
			customerGatewaysObject.customerGatewayId = value["CustomerGatewayId"].asString();
		if(!value["Name"].isNull())
			customerGatewaysObject.name = value["Name"].asString();
		if(!value["IpAddress"].isNull())
			customerGatewaysObject.ipAddress = value["IpAddress"].asString();
		if(!value["Description"].isNull())
			customerGatewaysObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			customerGatewaysObject.createTime = std::stol(value["CreateTime"].asString());
		customerGateways_.push_back(customerGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCustomerGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCustomerGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCustomerGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCustomerGatewaysResult::CustomerGateway> DescribeCustomerGatewaysResult::getCustomerGateways()const
{
	return customerGateways_;
}

