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

#include <alibabacloud/iot/model/QueryLoRaJoinPermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryLoRaJoinPermissionsResult::QueryLoRaJoinPermissionsResult() :
	ServiceResult()
{}

QueryLoRaJoinPermissionsResult::QueryLoRaJoinPermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLoRaJoinPermissionsResult::~QueryLoRaJoinPermissionsResult()
{}

void QueryLoRaJoinPermissionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allJoinPermissions = value["JoinPermissions"]["JoinPermission"];
	for (auto value : allJoinPermissions)
	{
		JoinPermission joinPermissionsObject;
		if(!value["JoinPermissionId"].isNull())
			joinPermissionsObject.joinPermissionId = value["JoinPermissionId"].asString();
		if(!value["JoinPermissionName"].isNull())
			joinPermissionsObject.joinPermissionName = value["JoinPermissionName"].asString();
		if(!value["JoinPermissionType"].isNull())
			joinPermissionsObject.joinPermissionType = value["JoinPermissionType"].asString();
		if(!value["OwnerAliyunPk"].isNull())
			joinPermissionsObject.ownerAliyunPk = value["OwnerAliyunPk"].asString();
		if(!value["Enabled"].isNull())
			joinPermissionsObject.enabled = value["Enabled"].asString() == "true";
		if(!value["ClassMode"].isNull())
			joinPermissionsObject.classMode = value["ClassMode"].asString();
		joinPermissions_.push_back(joinPermissionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ProductKey"].isNull())
		productKey_ = value["ProductKey"].asString();

}

std::vector<QueryLoRaJoinPermissionsResult::JoinPermission> QueryLoRaJoinPermissionsResult::getJoinPermissions()const
{
	return joinPermissions_;
}

std::string QueryLoRaJoinPermissionsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryLoRaJoinPermissionsResult::getCode()const
{
	return code_;
}

bool QueryLoRaJoinPermissionsResult::getSuccess()const
{
	return success_;
}

std::string QueryLoRaJoinPermissionsResult::getProductKey()const
{
	return productKey_;
}

