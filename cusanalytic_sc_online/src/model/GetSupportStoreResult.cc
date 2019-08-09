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

#include <alibabacloud/cusanalytic_sc_online/model/GetSupportStoreResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetSupportStoreResult::GetSupportStoreResult() :
	ServiceResult()
{}

GetSupportStoreResult::GetSupportStoreResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSupportStoreResult::~GetSupportStoreResult()
{}

void GetSupportStoreResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allStorePopDTOs = value["StorePopDTOs"]["StorePopDTO"];
	for (auto value : allStorePopDTOs)
	{
		StorePopDTO storePopDTOsObject;
		if(!value["StoreId"].isNull())
			storePopDTOsObject.storeId = std::stol(value["StoreId"].asString());
		if(!value["Name"].isNull())
			storePopDTOsObject.name = value["Name"].asString();
		if(!value["RegionName"].isNull())
			storePopDTOsObject.regionName = value["RegionName"].asString();
		if(!value["OpeningStartTime"].isNull())
			storePopDTOsObject.openingStartTime = value["OpeningStartTime"].asString();
		if(!value["OpeningEndTime"].isNull())
			storePopDTOsObject.openingEndTime = value["OpeningEndTime"].asString();
		if(!value["RegionId"].isNull())
			storePopDTOsObject.regionId = std::stol(value["RegionId"].asString());
		if(!value["StoreType"].isNull())
			storePopDTOsObject.storeType = value["StoreType"].asString();
		if(!value["Address"].isNull())
			storePopDTOsObject.address = value["Address"].asString();
		storePopDTOs_.push_back(storePopDTOsObject);
	}

}

std::vector<GetSupportStoreResult::StorePopDTO> GetSupportStoreResult::getStorePopDTOs()const
{
	return storePopDTOs_;
}

