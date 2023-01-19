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

#include <alibabacloud/sas/model/DescribeImageBaselineStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageBaselineStrategyResult::DescribeImageBaselineStrategyResult() :
	ServiceResult()
{}

DescribeImageBaselineStrategyResult::DescribeImageBaselineStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageBaselineStrategyResult::~DescribeImageBaselineStrategyResult()
{}

void DescribeImageBaselineStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto strategyNode = value["Strategy"];
	if(!strategyNode["Type"].isNull())
		strategy_.type = strategyNode["Type"].asString();
	if(!strategyNode["StrategyName"].isNull())
		strategy_.strategyName = strategyNode["StrategyName"].asString();
	if(!strategyNode["StrategyId"].isNull())
		strategy_.strategyId = std::stol(strategyNode["StrategyId"].asString());
	if(!strategyNode["SelectedItemCount"].isNull())
		strategy_.selectedItemCount = std::stoi(strategyNode["SelectedItemCount"].asString());
	if(!strategyNode["TotalItemCount"].isNull())
		strategy_.totalItemCount = std::stoi(strategyNode["TotalItemCount"].asString());
	auto allBaselineItemListNode = strategyNode["BaselineItemList"]["BaselineResult"];
	for (auto strategyNodeBaselineItemListBaselineResult : allBaselineItemListNode)
	{
		Strategy::BaselineResult baselineResultObject;
		if(!strategyNodeBaselineItemListBaselineResult["NameKey"].isNull())
			baselineResultObject.nameKey = strategyNodeBaselineItemListBaselineResult["NameKey"].asString();
		if(!strategyNodeBaselineItemListBaselineResult["ItemKey"].isNull())
			baselineResultObject.itemKey = strategyNodeBaselineItemListBaselineResult["ItemKey"].asString();
		if(!strategyNodeBaselineItemListBaselineResult["ClassKey"].isNull())
			baselineResultObject.classKey = strategyNodeBaselineItemListBaselineResult["ClassKey"].asString();
		strategy_.baselineItemList.push_back(baselineResultObject);
	}

}

DescribeImageBaselineStrategyResult::Strategy DescribeImageBaselineStrategyResult::getStrategy()const
{
	return strategy_;
}

