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

#include <alibabacloud/mse/model/QueryBusinessLocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryBusinessLocationsResult::QueryBusinessLocationsResult() :
	ServiceResult()
{}

QueryBusinessLocationsResult::QueryBusinessLocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBusinessLocationsResult::~QueryBusinessLocationsResult()
{}

void QueryBusinessLocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["LocationData"];
	for (auto valueDataLocationData : allDataNode)
	{
		LocationData dataObject;
		if(!valueDataLocationData["Ordering"].isNull())
			dataObject.ordering = std::stoi(valueDataLocationData["Ordering"].asString());
		if(!valueDataLocationData["Type"].isNull())
			dataObject.type = valueDataLocationData["Type"].asString();
		if(!valueDataLocationData["DistrictEnName"].isNull())
			dataObject.districtEnName = valueDataLocationData["DistrictEnName"].asString();
		if(!valueDataLocationData["ShowName"].isNull())
			dataObject.showName = valueDataLocationData["ShowName"].asString();
		if(!valueDataLocationData["DistrictCnName"].isNull())
			dataObject.districtCnName = valueDataLocationData["DistrictCnName"].asString();
		if(!valueDataLocationData["EnName"].isNull())
			dataObject.enName = valueDataLocationData["EnName"].asString();
		if(!valueDataLocationData["DistrictId"].isNull())
			dataObject.districtId = valueDataLocationData["DistrictId"].asString();
		if(!valueDataLocationData["DistrictShowName"].isNull())
			dataObject.districtShowName = valueDataLocationData["DistrictShowName"].asString();
		if(!valueDataLocationData["Description"].isNull())
			dataObject.description = valueDataLocationData["Description"].asString();
		if(!valueDataLocationData["EnDescription"].isNull())
			dataObject.enDescription = valueDataLocationData["EnDescription"].asString();
		if(!valueDataLocationData["CnName"].isNull())
			dataObject.cnName = valueDataLocationData["CnName"].asString();
		if(!valueDataLocationData["Name"].isNull())
			dataObject.name = valueDataLocationData["Name"].asString();
		if(!valueDataLocationData["DistrictOrdering"].isNull())
			dataObject.districtOrdering = std::stoi(valueDataLocationData["DistrictOrdering"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string QueryBusinessLocationsResult::getMessage()const
{
	return message_;
}

std::vector<QueryBusinessLocationsResult::LocationData> QueryBusinessLocationsResult::getData()const
{
	return data_;
}

std::string QueryBusinessLocationsResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryBusinessLocationsResult::getSuccess()const
{
	return success_;
}

