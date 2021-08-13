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

#include <alibabacloud/smartag/model/DescribeRouteDistributionStrategiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeRouteDistributionStrategiesResult::DescribeRouteDistributionStrategiesResult() :
	ServiceResult()
{}

DescribeRouteDistributionStrategiesResult::DescribeRouteDistributionStrategiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouteDistributionStrategiesResult::~DescribeRouteDistributionStrategiesResult()
{}

void DescribeRouteDistributionStrategiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStrategiesNode = value["Strategies"]["Strategy"];
	for (auto valueStrategiesStrategy : allStrategiesNode)
	{
		Strategy strategiesObject;
		if(!valueStrategiesStrategy["Status"].isNull())
			strategiesObject.status = valueStrategiesStrategy["Status"].asString();
		if(!valueStrategiesStrategy["StrategyPublishStatus"].isNull())
			strategiesObject.strategyPublishStatus = valueStrategiesStrategy["StrategyPublishStatus"].asString();
		if(!valueStrategiesStrategy["RouteDistribution"].isNull())
			strategiesObject.routeDistribution = valueStrategiesStrategy["RouteDistribution"].asString();
		if(!valueStrategiesStrategy["CreateTime"].isNull())
			strategiesObject.createTime = std::stol(valueStrategiesStrategy["CreateTime"].asString());
		if(!valueStrategiesStrategy["SmartAGId"].isNull())
			strategiesObject.smartAGId = valueStrategiesStrategy["SmartAGId"].asString();
		if(!valueStrategiesStrategy["SourceType"].isNull())
			strategiesObject.sourceType = valueStrategiesStrategy["SourceType"].asString();
		if(!valueStrategiesStrategy["IsConflict"].isNull())
			strategiesObject.isConflict = valueStrategiesStrategy["IsConflict"].asString() == "true";
		if(!valueStrategiesStrategy["InstanceId"].isNull())
			strategiesObject.instanceId = valueStrategiesStrategy["InstanceId"].asString();
		if(!valueStrategiesStrategy["DestCidrBlock"].isNull())
			strategiesObject.destCidrBlock = valueStrategiesStrategy["DestCidrBlock"].asString();
		if(!valueStrategiesStrategy["ConflictInfo"].isNull())
			strategiesObject.conflictInfo = valueStrategiesStrategy["ConflictInfo"].asString();
		if(!valueStrategiesStrategy["HcInstanceId"].isNull())
			strategiesObject.hcInstanceId = valueStrategiesStrategy["HcInstanceId"].asString();
		if(!valueStrategiesStrategy["RouteSource"].isNull())
			strategiesObject.routeSource = valueStrategiesStrategy["RouteSource"].asString();
		strategies_.push_back(strategiesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeRouteDistributionStrategiesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRouteDistributionStrategiesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRouteDistributionStrategiesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRouteDistributionStrategiesResult::Strategy> DescribeRouteDistributionStrategiesResult::getStrategies()const
{
	return strategies_;
}

