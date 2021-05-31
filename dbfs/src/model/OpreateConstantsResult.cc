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

#include <alibabacloud/dbfs/model/OpreateConstantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

OpreateConstantsResult::OpreateConstantsResult() :
	ServiceResult()
{}

OpreateConstantsResult::OpreateConstantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpreateConstantsResult::~OpreateConstantsResult()
{}

void OpreateConstantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MasterData"].isNull())
		masterData_ = value["MasterData"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["ZoneData"].isNull())
		zoneData_ = value["ZoneData"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["AccessData"].isNull())
		accessData_ = value["AccessData"].asString();
	if(!value["ProductCodeData"].isNull())
		productCodeData_ = value["ProductCodeData"].asString();
	if(!value["OsversionData"].isNull())
		osversionData_ = value["OsversionData"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["RegionData"].isNull())
		regionData_ = value["RegionData"].asString();
	if(!value["EndpointData"].isNull())
		endpointData_ = value["EndpointData"].asString();

}

long OpreateConstantsResult::getTotalCount()const
{
	return totalCount_;
}

std::string OpreateConstantsResult::getMasterData()const
{
	return masterData_;
}

long OpreateConstantsResult::getPageSize()const
{
	return pageSize_;
}

std::string OpreateConstantsResult::getZoneData()const
{
	return zoneData_;
}

long OpreateConstantsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string OpreateConstantsResult::getAccessData()const
{
	return accessData_;
}

std::string OpreateConstantsResult::getProductCodeData()const
{
	return productCodeData_;
}

std::string OpreateConstantsResult::getOsversionData()const
{
	return osversionData_;
}

std::string OpreateConstantsResult::getData()const
{
	return data_;
}

std::string OpreateConstantsResult::getRegionData()const
{
	return regionData_;
}

std::string OpreateConstantsResult::getEndpointData()const
{
	return endpointData_;
}

