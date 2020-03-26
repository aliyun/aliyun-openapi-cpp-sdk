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

#include <alibabacloud/cusanalytic_sc_online/model/GetAnalyzePlaceDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetAnalyzePlaceDataResult::GetAnalyzePlaceDataResult() :
	ServiceResult()
{}

GetAnalyzePlaceDataResult::GetAnalyzePlaceDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAnalyzePlaceDataResult::~GetAnalyzePlaceDataResult()
{}

void GetAnalyzePlaceDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnalyzePlaceItemsNode = value["AnalyzePlaceItems"]["AnalyzePlaceItem"];
	for (auto valueAnalyzePlaceItemsAnalyzePlaceItem : allAnalyzePlaceItemsNode)
	{
		AnalyzePlaceItem analyzePlaceItemsObject;
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["LocationName"].isNull())
			analyzePlaceItemsObject.locationName = valueAnalyzePlaceItemsAnalyzePlaceItem["LocationName"].asString();
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["LocationId"].isNull())
			analyzePlaceItemsObject.locationId = std::stol(valueAnalyzePlaceItemsAnalyzePlaceItem["LocationId"].asString());
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["ParentLocationIds"].isNull())
			analyzePlaceItemsObject.parentLocationIds = valueAnalyzePlaceItemsAnalyzePlaceItem["ParentLocationIds"].asString();
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["Count"].isNull())
			analyzePlaceItemsObject.count = std::stol(valueAnalyzePlaceItemsAnalyzePlaceItem["Count"].asString());
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["StoreId"].isNull())
			analyzePlaceItemsObject.storeId = std::stol(valueAnalyzePlaceItemsAnalyzePlaceItem["StoreId"].asString());
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["Percent"].isNull())
			analyzePlaceItemsObject.percent = std::stof(valueAnalyzePlaceItemsAnalyzePlaceItem["Percent"].asString());
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["MaleCount"].isNull())
			analyzePlaceItemsObject.maleCount = std::stoi(valueAnalyzePlaceItemsAnalyzePlaceItem["MaleCount"].asString());
		if(!valueAnalyzePlaceItemsAnalyzePlaceItem["FemaleCount"].isNull())
			analyzePlaceItemsObject.femaleCount = std::stoi(valueAnalyzePlaceItemsAnalyzePlaceItem["FemaleCount"].asString());
		auto allAgeItemsNode = allAnalyzePlaceItemsNode["AgeItems"]["AgeItem"];
		for (auto allAnalyzePlaceItemsNodeAgeItemsAgeItem : allAgeItemsNode)
		{
			AnalyzePlaceItem::AgeItem ageItemsObject;
			if(!allAnalyzePlaceItemsNodeAgeItemsAgeItem["Count"].isNull())
				ageItemsObject.count = std::stoi(allAnalyzePlaceItemsNodeAgeItemsAgeItem["Count"].asString());
			if(!allAnalyzePlaceItemsNodeAgeItemsAgeItem["Age"].isNull())
				ageItemsObject.age = std::stoi(allAnalyzePlaceItemsNodeAgeItemsAgeItem["Age"].asString());
			analyzePlaceItemsObject.ageItems.push_back(ageItemsObject);
		}
		analyzePlaceItems_.push_back(analyzePlaceItemsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["Percent"].isNull())
		percent_ = std::stof(value["Percent"].asString());
	if(!value["LocationName"].isNull())
		locationName_ = value["LocationName"].asString();
	if(!value["ParentLocationIds"].isNull())
		parentLocationIds_ = value["ParentLocationIds"].asString();
	if(!value["LocationId"].isNull())
		locationId_ = std::stol(value["LocationId"].asString());

}

std::vector<GetAnalyzePlaceDataResult::AnalyzePlaceItem> GetAnalyzePlaceDataResult::getAnalyzePlaceItems()const
{
	return analyzePlaceItems_;
}

long GetAnalyzePlaceDataResult::getStoreId()const
{
	return storeId_;
}

float GetAnalyzePlaceDataResult::getPercent()const
{
	return percent_;
}

std::string GetAnalyzePlaceDataResult::getParentLocationIds()const
{
	return parentLocationIds_;
}

long GetAnalyzePlaceDataResult::getLocationId()const
{
	return locationId_;
}

long GetAnalyzePlaceDataResult::getCount()const
{
	return count_;
}

std::string GetAnalyzePlaceDataResult::getLocationName()const
{
	return locationName_;
}

