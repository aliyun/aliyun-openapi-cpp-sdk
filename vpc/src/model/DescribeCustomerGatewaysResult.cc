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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCustomerGateways = value["CustomerGateways"]["CustomerGateway"];
	for (auto value : allCustomerGateways)
	{
		CustomerGateway customerGatewayObject;
		customerGatewayObject.customerGatewayId = value["CustomerGatewayId"].asString();
		customerGatewayObject.name = value["Name"].asString();
		customerGatewayObject.ipAddress = value["IpAddress"].asString();
		customerGatewayObject.description = value["Description"].asString();
		customerGatewayObject.createTime = std::stol(value["CreateTime"].asString());
		customerGateways_.push_back(customerGatewayObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCustomerGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeCustomerGatewaysResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeCustomerGatewaysResult::getPageSize()const
{
	return pageSize_;
}

void DescribeCustomerGatewaysResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeCustomerGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCustomerGatewaysResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

