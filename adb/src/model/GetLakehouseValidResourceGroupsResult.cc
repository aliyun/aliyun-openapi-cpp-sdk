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

#include <alibabacloud/adb/model/GetLakehouseValidResourceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetLakehouseValidResourceGroupsResult::GetLakehouseValidResourceGroupsResult() :
	ServiceResult()
{}

GetLakehouseValidResourceGroupsResult::GetLakehouseValidResourceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLakehouseValidResourceGroupsResult::~GetLakehouseValidResourceGroupsResult()
{}

void GetLakehouseValidResourceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LakehouseMinComputeResource"].isNull())
		data_.lakehouseMinComputeResource = std::stol(dataNode["LakehouseMinComputeResource"].asString());
	auto allValidPoolsInfoNode = dataNode["ValidPoolsInfo"]["validPoolsInfoItem"];
	for (auto dataNodeValidPoolsInfovalidPoolsInfoItem : allValidPoolsInfoNode)
	{
		Data::ValidPoolsInfoItem validPoolsInfoItemObject;
		if(!dataNodeValidPoolsInfovalidPoolsInfoItem["MaxComputeResource"].isNull())
			validPoolsInfoItemObject.maxComputeResource = dataNodeValidPoolsInfovalidPoolsInfoItem["MaxComputeResource"].asString();
		if(!dataNodeValidPoolsInfovalidPoolsInfoItem["MinComputeResource"].isNull())
			validPoolsInfoItemObject.minComputeResource = dataNodeValidPoolsInfovalidPoolsInfoItem["MinComputeResource"].asString();
		if(!dataNodeValidPoolsInfovalidPoolsInfoItem["GroupName"].isNull())
			validPoolsInfoItemObject.groupName = dataNodeValidPoolsInfovalidPoolsInfoItem["GroupName"].asString();
		if(!dataNodeValidPoolsInfovalidPoolsInfoItem["GroupType"].isNull())
			validPoolsInfoItemObject.groupType = dataNodeValidPoolsInfovalidPoolsInfoItem["GroupType"].asString();
		if(!dataNodeValidPoolsInfovalidPoolsInfoItem["Available"].isNull())
			validPoolsInfoItemObject.available = dataNodeValidPoolsInfovalidPoolsInfoItem["Available"].asString() == "true";
		auto allCuOptions = value["CuOptions"]["cuOptions"];
		for (auto value : allCuOptions)
			validPoolsInfoItemObject.cuOptions.push_back(value.asString());
		data_.validPoolsInfo.push_back(validPoolsInfoItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetLakehouseValidResourceGroupsResult::getMessage()const
{
	return message_;
}

long GetLakehouseValidResourceGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetLakehouseValidResourceGroupsResult::Data GetLakehouseValidResourceGroupsResult::getData()const
{
	return data_;
}

bool GetLakehouseValidResourceGroupsResult::getSuccess()const
{
	return success_;
}

