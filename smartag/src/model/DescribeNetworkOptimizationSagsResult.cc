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
	auto allSmartAccessGatewaysNode = value["SmartAccessGateways"]["SmartAccessGateway"];
	for (auto valueSmartAccessGatewaysSmartAccessGateway : allSmartAccessGatewaysNode)
	{
		SmartAccessGateway smartAccessGatewaysObject;
		if(!valueSmartAccessGatewaysSmartAccessGateway["EndTime"].isNull())
			smartAccessGatewaysObject.endTime = std::stol(valueSmartAccessGatewaysSmartAccessGateway["EndTime"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["InstanceId"].isNull())
			smartAccessGatewaysObject.instanceId = valueSmartAccessGatewaysSmartAccessGateway["InstanceId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["State"].isNull())
			smartAccessGatewaysObject.state = valueSmartAccessGatewaysSmartAccessGateway["State"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["MaxBandwidth"].isNull())
			smartAccessGatewaysObject.maxBandwidth = valueSmartAccessGatewaysSmartAccessGateway["MaxBandwidth"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["CreateTime"].isNull())
			smartAccessGatewaysObject.createTime = std::stol(valueSmartAccessGatewaysSmartAccessGateway["CreateTime"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["Name"].isNull())
			smartAccessGatewaysObject.name = valueSmartAccessGatewaysSmartAccessGateway["Name"].asString();
		smartAccessGateways_.push_back(smartAccessGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

