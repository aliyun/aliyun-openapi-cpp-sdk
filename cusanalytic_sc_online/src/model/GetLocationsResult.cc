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

#include <alibabacloud/cusanalytic_sc_online/model/GetLocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetLocationsResult::GetLocationsResult() :
	ServiceResult()
{}

GetLocationsResult::GetLocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLocationsResult::~GetLocationsResult()
{}

void GetLocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLocationItemsNode = value["LocationItems"]["LocationItem"];
	for (auto valueLocationItemsLocationItem : allLocationItemsNode)
	{
		LocationItem locationItemsObject;
		if(!valueLocationItemsLocationItem["Status"].isNull())
			locationItemsObject.status = std::stoi(valueLocationItemsLocationItem["Status"].asString());
		if(!valueLocationItemsLocationItem["StoreId"].isNull())
			locationItemsObject.storeId = std::stol(valueLocationItemsLocationItem["StoreId"].asString());
		if(!valueLocationItemsLocationItem["Name"].isNull())
			locationItemsObject.name = valueLocationItemsLocationItem["Name"].asString();
		if(!valueLocationItemsLocationItem["Link"].isNull())
			locationItemsObject.link = valueLocationItemsLocationItem["Link"].asString() == "true";
		if(!valueLocationItemsLocationItem["LocationType"].isNull())
			locationItemsObject.locationType = valueLocationItemsLocationItem["LocationType"].asString();
		if(!valueLocationItemsLocationItem["LocationId"].isNull())
			locationItemsObject.locationId = std::stol(valueLocationItemsLocationItem["LocationId"].asString());
		if(!valueLocationItemsLocationItem["ParentLocationId"].isNull())
			locationItemsObject.parentLocationId = std::stol(valueLocationItemsLocationItem["ParentLocationId"].asString());
		if(!valueLocationItemsLocationItem["LayerType"].isNull())
			locationItemsObject.layerType = valueLocationItemsLocationItem["LayerType"].asString();
		locationItems_.push_back(locationItemsObject);
	}
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());

}

long GetLocationsResult::getStoreId()const
{
	return storeId_;
}

std::vector<GetLocationsResult::LocationItem> GetLocationsResult::getLocationItems()const
{
	return locationItems_;
}

