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

#include <alibabacloud/cusanalytic_sc_online/model/GetBaseAgeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetBaseAgeDataResult::GetBaseAgeDataResult() :
	ServiceResult()
{}

GetBaseAgeDataResult::GetBaseAgeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBaseAgeDataResult::~GetBaseAgeDataResult()
{}

void GetBaseAgeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allageItemsNode = value["ageItems"]["AgeItem"];
	for (auto valueageItemsAgeItem : allageItemsNode)
	{
		AgeItem ageItemsObject;
		if(!valueageItemsAgeItem["Name"].isNull())
			ageItemsObject.name = valueageItemsAgeItem["Name"].asString();
		if(!valueageItemsAgeItem["Count"].isNull())
			ageItemsObject.count = std::stoi(valueageItemsAgeItem["Count"].asString());
		ageItems_.push_back(ageItemsObject);
	}
	auto allfemaleAgeItemsNode = value["femaleAgeItems"]["AgeItem"];
	for (auto valuefemaleAgeItemsAgeItem : allfemaleAgeItemsNode)
	{
		AgeItem femaleAgeItemsObject;
		if(!valuefemaleAgeItemsAgeItem["Name"].isNull())
			femaleAgeItemsObject.name = valuefemaleAgeItemsAgeItem["Name"].asString();
		if(!valuefemaleAgeItemsAgeItem["Count"].isNull())
			femaleAgeItemsObject.count = std::stoi(valuefemaleAgeItemsAgeItem["Count"].asString());
		femaleAgeItems_.push_back(femaleAgeItemsObject);
	}
	auto allmaleAgeItemsNode = value["maleAgeItems"]["AgeItem"];
	for (auto valuemaleAgeItemsAgeItem : allmaleAgeItemsNode)
	{
		AgeItem maleAgeItemsObject;
		if(!valuemaleAgeItemsAgeItem["Name"].isNull())
			maleAgeItemsObject.name = valuemaleAgeItemsAgeItem["Name"].asString();
		if(!valuemaleAgeItemsAgeItem["Count"].isNull())
			maleAgeItemsObject.count = std::stoi(valuemaleAgeItemsAgeItem["Count"].asString());
		maleAgeItems_.push_back(maleAgeItemsObject);
	}
	if(!value["Day"].isNull())
		day_ = value["Day"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Hour"].isNull())
		hour_ = value["Hour"].asString();
	if(!value["LocationId"].isNull())
		locationId_ = std::stol(value["LocationId"].asString());
	if(!value["SummaryType"].isNull())
		summaryType_ = value["SummaryType"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetBaseAgeDataResult::getSummaryType()const
{
	return summaryType_;
}

std::vector<GetBaseAgeDataResult::AgeItem> GetBaseAgeDataResult::getfemaleAgeItems()const
{
	return femaleAgeItems_;
}

long GetBaseAgeDataResult::getStoreId()const
{
	return storeId_;
}

std::string GetBaseAgeDataResult::getHour()const
{
	return hour_;
}

std::vector<GetBaseAgeDataResult::AgeItem> GetBaseAgeDataResult::getmaleAgeItems()const
{
	return maleAgeItems_;
}

std::string GetBaseAgeDataResult::getErrorMsg()const
{
	return errorMsg_;
}

long GetBaseAgeDataResult::getLocationId()const
{
	return locationId_;
}

std::vector<GetBaseAgeDataResult::AgeItem> GetBaseAgeDataResult::getageItems()const
{
	return ageItems_;
}

std::string GetBaseAgeDataResult::getDay()const
{
	return day_;
}

bool GetBaseAgeDataResult::getSuccess()const
{
	return success_;
}

