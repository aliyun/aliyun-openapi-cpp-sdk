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

#include <alibabacloud/smartag/model/DescribeNetworkOptimizationSagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeNetworkOptimizationSagsResult::DescribeNetworkOptimizationSagsResult() :
	ServiceResult()
{}

DescribeNetworkOptimizationSagsResult::DescribeNetworkOptimizationSagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkOptimizationSagsResult::~DescribeNetworkOptimizationSagsResult()
{}

void DescribeNetworkOptimizationSagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmartAccessGateways = value["SmartAccessGateways"]["SmartAccessGateway"];
	for (auto value : allSmartAccessGateways)
	{
		SmartAccessGateway smartAccessGatewaysObject;
		if(!value["InstanceId"].isNull())
			smartAccessGatewaysObject.instanceId = value["InstanceId"].asString();
		if(!value["Name"].isNull())
			smartAccessGatewaysObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			smartAccessGatewaysObject.state = value["State"].asString();
		if(!value["CreateTime"].isNull())
			smartAccessGatewaysObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["EndTime"].isNull())
			smartAccessGatewaysObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["MaxBandwidth"].isNull())
			smartAccessGatewaysObject.maxBandwidth = value["MaxBandwidth"].asString();
		smartAccessGateways_.push_back(smartAccessGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNetworkOptimizationSagsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworkOptimizationSagsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNetworkOptimizationSagsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNetworkOptimizationSagsResult::SmartAccessGateway> DescribeNetworkOptimizationSagsResult::getSmartAccessGateways()const
{
	return smartAccessGateways_;
}

