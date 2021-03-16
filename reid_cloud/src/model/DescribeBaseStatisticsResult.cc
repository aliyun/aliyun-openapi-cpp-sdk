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

#include <alibabacloud/reid_cloud/model/DescribeBaseStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

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
		auto allAgeItemsNode = valueBaseStatisticsBaseStatisticsItem["AgeItems"]["AgeItem"];
		for (auto valueBaseStatisticsBaseStatisticsItemAgeItemsAgeItem : allAgeItemsNode)
		{
			BaseStatisticsItem::AgeItem ageItemsObject;
			if(!valueBaseStatisticsBaseStatisticsItemAgeItemsAgeItem["Name"].isNull())
				ageItemsObject.name = valueBaseStatisticsBaseStatisticsItemAgeItemsAgeItem["Name"].asString();
			if(!valueBaseStatisticsBaseStatisticsItemAgeItemsAgeItem["Count"].isNull())
				ageItemsObject.count = std::stoi(valueBaseStatisticsBaseStatisticsItemAgeItemsAgeItem["Count"].asString());
			baseStatisticsObject.ageItems.push_back(ageItemsObject);
		}
		auto allStayDistributionItemsNode = valueBaseStatisticsBaseStatisticsItem["StayDistributionItems"]["StayDistributionItem"];
		for (auto valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem : allStayDistributionItemsNode)
		{
			BaseStatisticsItem::StayDistributionItem stayDistributionItemsObject;
			if(!valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem["StartTs"].isNull())
				stayDistributionItemsObject.startTs = std::stol(valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem["StartTs"].asString());
			if(!valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem["EndTs"].isNull())
				stayDistributionItemsObject.endTs = std::stol(valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem["EndTs"].asString());
			if(!valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem["Count"].isNull())
				stayDistributionItemsObject.count = std::stoi(valueBaseStatisticsBaseStatisticsItemStayDistributionItemsStayDistributionItem["Count"].asString());
			baseStatisticsObject.stayDistributionItems.push_back(stayDistributionItemsObject);
		}
		auto allMaleAgeItemsNode = valueBaseStatisticsBaseStatisticsItem["MaleAgeItems"]["AgeItem"];
		for (auto valueBaseStatisticsBaseStatisticsItemMaleAgeItemsAgeItem : allMaleAgeItemsNode)
		{
			BaseStatisticsItem::AgeItem maleAgeItemsObject;
			if(!valueBaseStatisticsBaseStatisticsItemMaleAgeItemsAgeItem["Name"].isNull())
				maleAgeItemsObject.name = valueBaseStatisticsBaseStatisticsItemMaleAgeItemsAgeItem["Name"].asString();
			if(!valueBaseStatisticsBaseStatisticsItemMaleAgeItemsAgeItem["Count"].isNull())
				maleAgeItemsObject.count = std::stoi(valueBaseStatisticsBaseStatisticsItemMaleAgeItemsAgeItem["Count"].asString());
			baseStatisticsObject.maleAgeItems.push_back(maleAgeItemsObject);
		}
		auto allFemaleAgeItemsNode = valueBaseStatisticsBaseStatisticsItem["FemaleAgeItems"]["AgeItem"];
		for (auto valueBaseStatisticsBaseStatisticsItemFemaleAgeItemsAgeItem : allFemaleAgeItemsNode)
		{
			BaseStatisticsItem::AgeItem femaleAgeItemsObject;
			if(!valueBaseStatisticsBaseStatisticsItemFemaleAgeItemsAgeItem["Name"].isNull())
				femaleAgeItemsObject.name = valueBaseStatisticsBaseStatisticsItemFemaleAgeItemsAgeItem["Name"].asString();
			if(!valueBaseStatisticsBaseStatisticsItemFemaleAgeItemsAgeItem["Count"].isNull())
				femaleAgeItemsObject.count = std::stoi(valueBaseStatisticsBaseStatisticsItemFemaleAgeItemsAgeItem["Count"].asString());
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
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string DescribeBaseStatisticsResult::getMessage()const
{
	return message_;
}

std::string DescribeBaseStatisticsResult::getCursorTime()const
{
	return cursorTime_;
}

std::string DescribeBaseStatisticsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeBaseStatisticsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeBaseStatisticsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeBaseStatisticsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<DescribeBaseStatisticsResult::BaseStatisticsItem> DescribeBaseStatisticsResult::getBaseStatistics()const
{
	return baseStatistics_;
}

std::string DescribeBaseStatisticsResult::getCode()const
{
	return code_;
}

bool DescribeBaseStatisticsResult::getSuccess()const
{
	return success_;
}

