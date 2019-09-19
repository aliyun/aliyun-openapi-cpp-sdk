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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorePopDTOsNode = value["StorePopDTOs"]["StorePopDTO"];
	for (auto valueStorePopDTOsStorePopDTO : allStorePopDTOsNode)
	{
		StorePopDTO storePopDTOsObject;
		if(!valueStorePopDTOsStorePopDTO["StoreId"].isNull())
			storePopDTOsObject.storeId = std::stol(valueStorePopDTOsStorePopDTO["StoreId"].asString());
		if(!valueStorePopDTOsStorePopDTO["Name"].isNull())
			storePopDTOsObject.name = valueStorePopDTOsStorePopDTO["Name"].asString();
		if(!valueStorePopDTOsStorePopDTO["RegionName"].isNull())
			storePopDTOsObject.regionName = valueStorePopDTOsStorePopDTO["RegionName"].asString();
		if(!valueStorePopDTOsStorePopDTO["OpeningStartTime"].isNull())
			storePopDTOsObject.openingStartTime = valueStorePopDTOsStorePopDTO["OpeningStartTime"].asString();
		if(!valueStorePopDTOsStorePopDTO["OpeningEndTime"].isNull())
			storePopDTOsObject.openingEndTime = valueStorePopDTOsStorePopDTO["OpeningEndTime"].asString();
		if(!valueStorePopDTOsStorePopDTO["RegionId"].isNull())
			storePopDTOsObject.regionId = std::stol(valueStorePopDTOsStorePopDTO["RegionId"].asString());
		if(!valueStorePopDTOsStorePopDTO["StoreType"].isNull())
			storePopDTOsObject.storeType = valueStorePopDTOsStorePopDTO["StoreType"].asString();
		if(!valueStorePopDTOsStorePopDTO["Address"].isNull())
			storePopDTOsObject.address = valueStorePopDTOsStorePopDTO["Address"].asString();
		storePopDTOs_.push_back(storePopDTOsObject);
	}

}

std::vector<GetSupportStoreResult::StorePopDTO> GetSupportStoreResult::getStorePopDTOs()const
{
	return storePopDTOs_;
}

