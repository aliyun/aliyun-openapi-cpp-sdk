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

#include <alibabacloud/sgw/model/DescribeGatewaysForCmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewaysForCmsResult::DescribeGatewaysForCmsResult() :
	ServiceResult()
{}

DescribeGatewaysForCmsResult::DescribeGatewaysForCmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewaysForCmsResult::~DescribeGatewaysForCmsResult()
{}

void DescribeGatewaysForCmsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewaysNode = value["Gateways"]["Gateway"];
	for (auto valueGatewaysGateway : allGatewaysNode)
	{
		Gateway gatewaysObject;
		if(!valueGatewaysGateway["GatewayId"].isNull())
			gatewaysObject.gatewayId = valueGatewaysGateway["GatewayId"].asString();
		if(!valueGatewaysGateway["Name"].isNull())
			gatewaysObject.name = valueGatewaysGateway["Name"].asString();
		if(!valueGatewaysGateway["Description"].isNull())
			gatewaysObject.description = valueGatewaysGateway["Description"].asString();
		gateways_.push_back(gatewaysObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGatewaysForCmsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeGatewaysForCmsResult::getMessage()const
{
	return message_;
}

int DescribeGatewaysForCmsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGatewaysForCmsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGatewaysForCmsResult::Gateway> DescribeGatewaysForCmsResult::getGateways()const
{
	return gateways_;
}

std::string DescribeGatewaysForCmsResult::getCode()const
{
	return code_;
}

bool DescribeGatewaysForCmsResult::getSuccess()const
{
	return success_;
}

