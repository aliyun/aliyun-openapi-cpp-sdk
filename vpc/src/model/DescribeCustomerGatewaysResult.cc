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
	auto allCustomerGatewaysNode = value["CustomerGateways"]["CustomerGateway"];
	for (auto valueCustomerGatewaysCustomerGateway : allCustomerGatewaysNode)
	{
		CustomerGateway customerGatewaysObject;
		if(!valueCustomerGatewaysCustomerGateway["IpAddress"].isNull())
			customerGatewaysObject.ipAddress = valueCustomerGatewaysCustomerGateway["IpAddress"].asString();
		if(!valueCustomerGatewaysCustomerGateway["Asn"].isNull())
			customerGatewaysObject.asn = std::stol(valueCustomerGatewaysCustomerGateway["Asn"].asString());
		if(!valueCustomerGatewaysCustomerGateway["Description"].isNull())
			customerGatewaysObject.description = valueCustomerGatewaysCustomerGateway["Description"].asString();
		if(!valueCustomerGatewaysCustomerGateway["CustomerGatewayId"].isNull())
			customerGatewaysObject.customerGatewayId = valueCustomerGatewaysCustomerGateway["CustomerGatewayId"].asString();
		if(!valueCustomerGatewaysCustomerGateway["CreateTime"].isNull())
			customerGatewaysObject.createTime = std::stol(valueCustomerGatewaysCustomerGateway["CreateTime"].asString());
		if(!valueCustomerGatewaysCustomerGateway["Name"].isNull())
			customerGatewaysObject.name = valueCustomerGatewaysCustomerGateway["Name"].asString();
		if(!valueCustomerGatewaysCustomerGateway["AuthKey"].isNull())
			customerGatewaysObject.authKey = valueCustomerGatewaysCustomerGateway["AuthKey"].asString();
		if(!valueCustomerGatewaysCustomerGateway["ResourceGroupId"].isNull())
			customerGatewaysObject.resourceGroupId = valueCustomerGatewaysCustomerGateway["ResourceGroupId"].asString();
		auto allTagsNode = valueCustomerGatewaysCustomerGateway["Tags"]["Tag"];
		for (auto valueCustomerGatewaysCustomerGatewayTagsTag : allTagsNode)
		{
			CustomerGateway::Tag tagsObject;
			if(!valueCustomerGatewaysCustomerGatewayTagsTag["Key"].isNull())
				tagsObject.key = valueCustomerGatewaysCustomerGatewayTagsTag["Key"].asString();
			if(!valueCustomerGatewaysCustomerGatewayTagsTag["Value"].isNull())
				tagsObject.value = valueCustomerGatewaysCustomerGatewayTagsTag["Value"].asString();
			customerGatewaysObject.tags.push_back(tagsObject);
		}
		customerGateways_.push_back(customerGatewaysObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

