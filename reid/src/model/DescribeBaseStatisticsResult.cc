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

#include <alibabacloud/reid/model/DescribeBaseStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

DescribeBaseStatisticsResult::DescribeBaseStatisticsResult() :
	ServiceResult()
{}

DescribeBaseStatisticsResult::DescribeBaseStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBaseStatisticsResult::~DescribeBaseStatisticsResult()
{}

void DescribeBaseStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaseStatisticsNode = value["BaseStatistics"]["BaseStatisticsItem"];
	for (auto valueBaseStatisticsBaseStatisticsItem : allBaseStatisticsNode)
	{
		BaseStatisticsItem baseStatisticsObject;
		if(!valueBaseStatisticsBaseStatisticsItem["StoreId"].isNull())
			baseStatisticsObject.storeId = std::stol(valueBaseStatisticsBaseStatisticsItem["StoreId"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["FemaleUvCount"].isNull())
			baseStatisticsObject.femaleUvCount = std::stoi(valueBaseStatisticsBaseStatisticsItem["FemaleUvCount"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["OldCount"].isNull())
			baseStatisticsObject.oldCount = std::stoi(valueBaseStatisticsBaseStatisticsItem["OldCount"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["NewCount"].isNull())
			baseStatisticsObject.newCount = std::stoi(valueBaseStatisticsBaseStatisticsItem["NewCount"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["SummaryType"].isNull())
			baseStatisticsObject.summaryType = valueBaseStatisticsBaseStatisticsItem["SummaryType"].asString();
		if(!valueBaseStatisticsBaseStatisticsItem["MaleUvCount"].isNull())
			baseStatisticsObject.maleUvCount = std::stoi(valueBaseStatisticsBaseStatisticsItem["MaleUvCount"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["Time"].isNull())
			baseStatisticsObject.time = valueBaseStatisticsBaseStatisticsItem["Time"].asString();
		if(!valueBaseStatisticsBaseStatisticsItem["LocationId"].isNull())
			baseStatisticsObject.locationId = std::stol(valueBaseStatisticsBaseStatisticsItem["LocationId"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["StayPeriod"].isNull())
			baseStatisticsObject.stayPeriod = std::stol(valueBaseStatisticsBaseStatisticsItem["StayPeriod"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["UvCount"].isNull())
			baseStatisticsObject.uvCount = std::stoi(valueBaseStatisticsBaseStatisticsItem["UvCount"].asString());
		if(!valueBaseStatisticsBaseStatisticsItem["OnlyBodyUvCount"].isNull())
			baseStatisticsObject.onlyBodyUvCount = std::stoi(valueBaseStatisticsBaseStatisticsItem["OnlyBodyUvCount"].asString());
		auto allAgeItemsNode = allBaseStatisticsNode["AgeItems"]["AgeItem"];
		for (auto allBaseStatisticsNodeAgeItemsAgeItem : allAgeItemsNode)
		{
			BaseStatisticsItem::AgeItem ageItemsObject;
			if(!allBaseStatisticsNodeAgeItemsAgeItem["Name"].isNull())
				ageItemsObject.name = allBaseStatisticsNodeAgeItemsAgeItem["Name"].asString();
			if(!allBaseStatisticsNodeAgeItemsAgeItem["Count"].isNull())
				ageItemsObject.count = std::stoi(allBaseStatisticsNodeAgeItemsAgeItem["Count"].asString());
			baseStatisticsObject.ageItems.push_back(ageItemsObject);
		}
		auto allStayDistributionItemsNode = allBaseStatisticsNode["StayDistributionItems"]["StayDistributionItem"];
		for (auto allBaseStatisticsNodeStayDistributionItemsStayDistributionItem : allStayDistributionItemsNode)
		{
			BaseStatisticsItem::StayDistributionItem stayDistributionItemsObject;
			if(!allBaseStatisticsNodeStayDistributionItemsStayDistributionItem["StartTs"].isNull())
				stayDistributionItemsObject.startTs = std::stol(allBaseStatisticsNodeStayDistributionItemsStayDistributionItem["StartTs"].asString());
			if(!allBaseStatisticsNodeStayDistributionItemsStayDistributionItem["EndTs"].isNull())
				stayDistributionItemsObject.endTs = std::stol(allBaseStatisticsNodeStayDistributionItemsStayDistributionItem["EndTs"].asString());
			if(!allBaseStatisticsNodeStayDistributionItemsStayDistributionItem["Count"].isNull())
				stayDistributionItemsObject.count = std::stoi(allBaseStatisticsNodeStayDistributionItemsStayDistributionItem["Count"].asString());
			baseStatisticsObject.stayDistributionItems.push_back(stayDistributionItemsObject);
		}
		auto allMaleAgeItemsNode = allBaseStatisticsNode["MaleAgeItems"]["AgeItem"];
		for (auto allBaseStatisticsNodeMaleAgeItemsAgeItem : allMaleAgeItemsNode)
		{
			BaseStatisticsItem::AgeItem maleAgeItemsObject;
			if(!allBaseStatisticsNodeMaleAgeItemsAgeItem["Name"].isNull())
				maleAgeItemsObject.name = allBaseStatisticsNodeMaleAgeItemsAgeItem["Name"].asString();
			if(!allBaseStatisticsNodeMaleAgeItemsAgeItem["Count"].isNull())
				maleAgeItemsObject.count = std::stoi(allBaseStatisticsNodeMaleAgeItemsAgeItem["Count"].asString());
			baseStatisticsObject.maleAgeItems.push_back(maleAgeItemsObject);
		}
		auto allFemaleAgeItemsNode = allBaseStatisticsNode["FemaleAgeItems"]["AgeItem"];
		for (auto allBaseStatisticsNodeFemaleAgeItemsAgeItem : allFemaleAgeItemsNode)
		{
			BaseStatisticsItem::AgeItem femaleAgeItemsObject;
			if(!allBaseStatisticsNodeFemaleAgeItemsAgeItem["Name"].isNull())
				femaleAgeItemsObject.name = allBaseStatisticsNodeFemaleAgeItemsAgeItem["Name"].asString();
			if(!allBaseStatisticsNodeFemaleAgeItemsAgeItem["Count"].isNull())
				femaleAgeItemsObject.count = std::stoi(allBaseStatisticsNodeFemaleAgeItemsAgeItem["Count"].asString());
			baseStatisticsObject.femaleAgeItems.push_back(femaleAgeItemsObject);
		}
		baseStatistics_.push_back(baseStatisticsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["CursorTime"].isNull())
		cursorTime_ = value["CursorTime"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeBaseStatisticsResult::getCursorTime()const
{
	return cursorTime_;
}

std::string DescribeBaseStatisticsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeBaseStatisticsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<DescribeBaseStatisticsResult::BaseStatisticsItem> DescribeBaseStatisticsResult::getBaseStatistics()const
{
	return baseStatistics_;
}

bool DescribeBaseStatisticsResult::getSuccess()const
{
	return success_;
}

