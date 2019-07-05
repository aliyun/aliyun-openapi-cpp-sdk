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
	auto allStatList = value["StatList"]["Stat"];
	for (auto value : allStatList)
	{
		Stat statListObject;
		if(!value["ResourceType"].isNull())
			statListObject.resourceType = value["ResourceType"].asString();
		if(!value["Scene"].isNull())
			statListObject.scene = value["Scene"].asString();
		if(!value["Date"].isNull())
			statListObject.date = value["Date"].asString();
		if(!value["TotalCount"].isNull())
			statListObject.totalCount = std::stoi(value["TotalCount"].asString());
		if(!value["PassCount"].isNull())
			statListObject.passCount = std::stoi(value["PassCount"].asString());
		if(!value["ReviewCount"].isNull())
			statListObject.reviewCount = std::stoi(value["ReviewCount"].asString());
		if(!value["BlockCount"].isNull())
			statListObject.blockCount = std::stoi(value["BlockCount"].asString());
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

