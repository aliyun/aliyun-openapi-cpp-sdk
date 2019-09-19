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

#include <alibabacloud/green/model/DescribeOssIncrementStatsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssIncrementStatsResult::DescribeOssIncrementStatsResult() :
	ServiceResult()
{}

DescribeOssIncrementStatsResult::DescribeOssIncrementStatsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssIncrementStatsResult::~DescribeOssIncrementStatsResult()
{}

void DescribeOssIncrementStatsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatListNode = value["StatList"]["Stat"];
	for (auto valueStatListStat : allStatListNode)
	{
		Stat statListObject;
		if(!valueStatListStat["ResourceType"].isNull())
			statListObject.resourceType = valueStatListStat["ResourceType"].asString();
		if(!valueStatListStat["Scene"].isNull())
			statListObject.scene = valueStatListStat["Scene"].asString();
		if(!valueStatListStat["Date"].isNull())
			statListObject.date = valueStatListStat["Date"].asString();
		if(!valueStatListStat["TotalCount"].isNull())
			statListObject.totalCount = std::stoi(valueStatListStat["TotalCount"].asString());
		if(!valueStatListStat["PassCount"].isNull())
			statListObject.passCount = std::stoi(valueStatListStat["PassCount"].asString());
		if(!valueStatListStat["ReviewCount"].isNull())
			statListObject.reviewCount = std::stoi(valueStatListStat["ReviewCount"].asString());
		if(!valueStatListStat["BlockCount"].isNull())
			statListObject.blockCount = std::stoi(valueStatListStat["BlockCount"].asString());
		statList_.push_back(statListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeOssIncrementStatsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeOssIncrementStatsResult::Stat> DescribeOssIncrementStatsResult::getStatList()const
{
	return statList_;
}

