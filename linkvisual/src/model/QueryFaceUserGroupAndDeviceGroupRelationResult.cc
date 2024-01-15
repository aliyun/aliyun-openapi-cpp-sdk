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

#include <alibabacloud/linkvisual/model/QueryFaceUserGroupAndDeviceGroupRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceUserGroupAndDeviceGroupRelationResult::QueryFaceUserGroupAndDeviceGroupRelationResult() :
	ServiceResult()
{}

QueryFaceUserGroupAndDeviceGroupRelationResult::QueryFaceUserGroupAndDeviceGroupRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceUserGroupAndDeviceGroupRelationResult::~QueryFaceUserGroupAndDeviceGroupRelationResult()
{}

void QueryFaceUserGroupAndDeviceGroupRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DeviceGroupId"].isNull())
		data_.deviceGroupId = dataNode["DeviceGroupId"].asString();
	if(!dataNode["ControlId"].isNull())
		data_.controlId = dataNode["ControlId"].asString();
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = dataNode["ModifiedTime"].asString();
	if(!dataNode["ControlType"].isNull())
		data_.controlType = dataNode["ControlType"].asString();
	if(!dataNode["UserGroupId"].isNull())
		data_.userGroupId = dataNode["UserGroupId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceUserGroupAndDeviceGroupRelationResult::Data QueryFaceUserGroupAndDeviceGroupRelationResult::getData()const
{
	return data_;
}

std::string QueryFaceUserGroupAndDeviceGroupRelationResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceUserGroupAndDeviceGroupRelationResult::getCode()const
{
	return code_;
}

bool QueryFaceUserGroupAndDeviceGroupRelationResult::getSuccess()const
{
	return success_;
}

