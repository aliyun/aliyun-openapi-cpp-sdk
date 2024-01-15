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

#include <alibabacloud/linkvisual/model/QueryFaceUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceUserGroupResult::QueryFaceUserGroupResult() :
	ServiceResult()
{}

QueryFaceUserGroupResult::QueryFaceUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceUserGroupResult::~QueryFaceUserGroupResult()
{}

void QueryFaceUserGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allUserGroupListNode = dataNode["UserGroupList"]["UserGroupInfos"];
	for (auto dataNodeUserGroupListUserGroupInfos : allUserGroupListNode)
	{
		Data::UserGroupInfos userGroupInfosObject;
		if(!dataNodeUserGroupListUserGroupInfos["UserGroupName"].isNull())
			userGroupInfosObject.userGroupName = dataNodeUserGroupListUserGroupInfos["UserGroupName"].asString();
		if(!dataNodeUserGroupListUserGroupInfos["ModifiedTime"].isNull())
			userGroupInfosObject.modifiedTime = dataNodeUserGroupListUserGroupInfos["ModifiedTime"].asString();
		if(!dataNodeUserGroupListUserGroupInfos["UserGroupId"].isNull())
			userGroupInfosObject.userGroupId = dataNodeUserGroupListUserGroupInfos["UserGroupId"].asString();
		data_.userGroupList.push_back(userGroupInfosObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceUserGroupResult::Data QueryFaceUserGroupResult::getData()const
{
	return data_;
}

std::string QueryFaceUserGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceUserGroupResult::getCode()const
{
	return code_;
}

bool QueryFaceUserGroupResult::getSuccess()const
{
	return success_;
}

