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

#include <alibabacloud/linkwan/model/ListOwnedJoinPermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListOwnedJoinPermissionsResult::ListOwnedJoinPermissionsResult() :
	ServiceResult()
{}

ListOwnedJoinPermissionsResult::ListOwnedJoinPermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOwnedJoinPermissionsResult::~ListOwnedJoinPermissionsResult()
{}

void ListOwnedJoinPermissionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["JoinPermission"];
	for (auto dataNodeListJoinPermission : allListNode)
	{
		Data::JoinPermission joinPermissionObject;
		if(!dataNodeListJoinPermission["JoinPermissionId"].isNull())
			joinPermissionObject.joinPermissionId = dataNodeListJoinPermission["JoinPermissionId"].asString();
		if(!dataNodeListJoinPermission["RenterAliyunId"].isNull())
			joinPermissionObject.renterAliyunId = dataNodeListJoinPermission["RenterAliyunId"].asString();
		if(!dataNodeListJoinPermission["JoinEui"].isNull())
			joinPermissionObject.joinEui = dataNodeListJoinPermission["JoinEui"].asString();
		if(!dataNodeListJoinPermission["FreqBandPlanGroupId"].isNull())
			joinPermissionObject.freqBandPlanGroupId = std::stol(dataNodeListJoinPermission["FreqBandPlanGroupId"].asString());
		if(!dataNodeListJoinPermission["ClassMode"].isNull())
			joinPermissionObject.classMode = dataNodeListJoinPermission["ClassMode"].asString();
		if(!dataNodeListJoinPermission["AuthState"].isNull())
			joinPermissionObject.authState = dataNodeListJoinPermission["AuthState"].asString();
		if(!dataNodeListJoinPermission["Enabled"].isNull())
			joinPermissionObject.enabled = dataNodeListJoinPermission["Enabled"].asString() == "true";
		if(!dataNodeListJoinPermission["JoinPermissionName"].isNull())
			joinPermissionObject.joinPermissionName = dataNodeListJoinPermission["JoinPermissionName"].asString();
		if(!dataNodeListJoinPermission["RxDelay"].isNull())
			joinPermissionObject.rxDelay = std::stol(dataNodeListJoinPermission["RxDelay"].asString());
		if(!dataNodeListJoinPermission["DataRate"].isNull())
			joinPermissionObject.dataRate = std::stol(dataNodeListJoinPermission["DataRate"].asString());
		data_.list.push_back(joinPermissionObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListOwnedJoinPermissionsResult::Data ListOwnedJoinPermissionsResult::getData()const
{
	return data_;
}

bool ListOwnedJoinPermissionsResult::getSuccess()const
{
	return success_;
}

