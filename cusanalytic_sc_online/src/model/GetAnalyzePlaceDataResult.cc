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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAnalyzePlaceItems = value["AnalyzePlaceItems"]["AnalyzePlaceItem"];
	for (auto value : allAnalyzePlaceItems)
	{
		AnalyzePlaceItem analyzePlaceItemsObject;
		if(!value["LocationName"].isNull())
			analyzePlaceItemsObject.locationName = value["LocationName"].asString();
		if(!value["LocationId"].isNull())
			analyzePlaceItemsObject.locationId = std::stol(value["LocationId"].asString());
		if(!value["ParentLocationIds"].isNull())
			analyzePlaceItemsObject.parentLocationIds = value["ParentLocationIds"].asString();
		if(!value["Count"].isNull())
			analyzePlaceItemsObject.count = std::stol(value["Count"].asString());
		if(!value["StoreId"].isNull())
			analyzePlaceItemsObject.storeId = std::stol(value["StoreId"].asString());
		if(!value["Percent"].isNull())
			analyzePlaceItemsObject.percent = std::stof(value["Percent"].asString());
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

