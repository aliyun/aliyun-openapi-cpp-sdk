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

#include <alibabacloud/linkvisual/model/QueryFaceAllUserGroupAndDeviceGroupRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceAllUserGroupAndDeviceGroupRelationResult::QueryFaceAllUserGroupAndDeviceGroupRelationResult() :
	ServiceResult()
{}

QueryFaceAllUserGroupAndDeviceGroupRelationResult::QueryFaceAllUserGroupAndDeviceGroupRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceAllUserGroupAndDeviceGroupRelationResult::~QueryFaceAllUserGroupAndDeviceGroupRelationResult()
{}

void QueryFaceAllUserGroupAndDeviceGroupRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["DeviceGroupId"].isNull())
			listItemObject.deviceGroupId = dataNodeListListItem["DeviceGroupId"].asString();
		if(!dataNodeListListItem["ControlId"].isNull())
			listItemObject.controlId = dataNodeListListItem["ControlId"].asString();
		if(!dataNodeListListItem["ModifiedTime"].isNull())
			listItemObject.modifiedTime = dataNodeListListItem["ModifiedTime"].asString();
		if(!dataNodeListListItem["ControlType"].isNull())
			listItemObject.controlType = dataNodeListListItem["ControlType"].asString();
		if(!dataNodeListListItem["UserGroupId"].isNull())
			listItemObject.userGroupId = dataNodeListListItem["UserGroupId"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceAllUserGroupAndDeviceGroupRelationResult::Data QueryFaceAllUserGroupAndDeviceGroupRelationResult::getData()const
{
	return data_;
}

std::string QueryFaceAllUserGroupAndDeviceGroupRelationResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceAllUserGroupAndDeviceGroupRelationResult::getCode()const
{
	return code_;
}

bool QueryFaceAllUserGroupAndDeviceGroupRelationResult::getSuccess()const
{
	return success_;
}

