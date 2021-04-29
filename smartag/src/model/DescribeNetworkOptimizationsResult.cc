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

#include <alibabacloud/smartag/model/DescribeNetworkOptimizationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeNetworkOptimizationsResult::DescribeNetworkOptimizationsResult() :
	ServiceResult()
{}

DescribeNetworkOptimizationsResult::DescribeNetworkOptimizationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkOptimizationsResult::~DescribeNetworkOptimizationsResult()
{}

void DescribeNetworkOptimizationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkOptimizationsNode = value["NetworkOptimizations"]["NetworkOptimization"];
	for (auto valueNetworkOptimizationsNetworkOptimization : allNetworkOptimizationsNode)
	{
		NetworkOptimization networkOptimizationsObject;
		if(!valueNetworkOptimizationsNetworkOptimization["SagCount"].isNull())
			networkOptimizationsObject.sagCount = std::stoi(valueNetworkOptimizationsNetworkOptimization["SagCount"].asString());
		if(!valueNetworkOptimizationsNetworkOptimization["InstanceId"].isNull())
			networkOptimizationsObject.instanceId = valueNetworkOptimizationsNetworkOptimization["InstanceId"].asString();
		if(!valueNetworkOptimizationsNetworkOptimization["State"].isNull())
			networkOptimizationsObject.state = valueNetworkOptimizationsNetworkOptimization["State"].asString();
		if(!valueNetworkOptimizationsNetworkOptimization["CcnId"].isNull())
			networkOptimizationsObject.ccnId = valueNetworkOptimizationsNetworkOptimization["CcnId"].asString();
		if(!valueNetworkOptimizationsNetworkOptimization["CreateTime"].isNull())
			networkOptimizationsObject.createTime = std::stol(valueNetworkOptimizationsNetworkOptimization["CreateTime"].asString());
		if(!valueNetworkOptimizationsNetworkOptimization["Name"].isNull())
			networkOptimizationsObject.name = valueNetworkOptimizationsNetworkOptimization["Name"].asString();
		networkOptimizations_.push_back(networkOptimizationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeNetworkOptimizationsResult::NetworkOptimization> DescribeNetworkOptimizationsResult::getNetworkOptimizations()const
{
	return networkOptimizations_;
}

int DescribeNetworkOptimizationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworkOptimizationsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNetworkOptimizationsResult::getPageNumber()const
{
	return pageNumber_;
}

