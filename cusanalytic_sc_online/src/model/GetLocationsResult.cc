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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLocationItems = value["LocationItems"]["LocationItem"];
	for (auto value : allLocationItems)
	{
		LocationItem locationItemsObject;
		if(!value["Status"].isNull())
			locationItemsObject.status = std::stoi(value["Status"].asString());
		if(!value["StoreId"].isNull())
			locationItemsObject.storeId = std::stol(value["StoreId"].asString());
		if(!value["Name"].isNull())
			locationItemsObject.name = value["Name"].asString();
		if(!value["Link"].isNull())
			locationItemsObject.link = value["Link"].asString() == "true";
		if(!value["LocationType"].isNull())
			locationItemsObject.locationType = value["LocationType"].asString();
		if(!value["LocationId"].isNull())
			locationItemsObject.locationId = std::stol(value["LocationId"].asString());
		if(!value["ParentLocationId"].isNull())
			locationItemsObject.parentLocationId = std::stol(value["ParentLocationId"].asString());
		if(!value["LayerType"].isNull())
			locationItemsObject.layerType = value["LayerType"].asString();
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

