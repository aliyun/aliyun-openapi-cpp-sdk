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

#include <alibabacloud/green/model/DescribeOpenApiRcpStatsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOpenApiRcpStatsResult::DescribeOpenApiRcpStatsResult() :
	ServiceResult()
{}

DescribeOpenApiRcpStatsResult::DescribeOpenApiRcpStatsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOpenApiRcpStatsResult::~DescribeOpenApiRcpStatsResult()
{}

void DescribeOpenApiRcpStatsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatListNode = value["StatList"]["stat"];
	for (auto valueStatListstat : allStatListNode)
	{
		Stat statListObject;
		if(!valueStatListstat["Date"].isNull())
			statListObject.date = valueStatListstat["Date"].asString();
		if(!valueStatListstat["ResourceType"].isNull())
			statListObject.resourceType = valueStatListstat["ResourceType"].asString();
		if(!valueStatListstat["TotalCount"].isNull())
			statListObject.totalCount = std::stoi(valueStatListstat["TotalCount"].asString());
		if(!valueStatListstat["PassCount"].isNull())
			statListObject.passCount = std::stoi(valueStatListstat["PassCount"].asString());
		if(!valueStatListstat["ReviewCount"].isNull())
			statListObject.reviewCount = std::stoi(valueStatListstat["ReviewCount"].asString());
		if(!valueStatListstat["BlockCount"].isNull())
			statListObject.blockCount = std::stoi(valueStatListstat["BlockCount"].asString());
		if(!valueStatListstat["TotalDuration"].isNull())
			statListObject.totalDuration = std::stoi(valueStatListstat["TotalDuration"].asString());
		statList_.push_back(statListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeOpenApiRcpStatsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeOpenApiRcpStatsResult::Stat> DescribeOpenApiRcpStatsResult::getStatList()const
{
	return statList_;
}

