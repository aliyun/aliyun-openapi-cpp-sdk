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

#include <alibabacloud/linkvisual/model/QueryFaceAllUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceAllUserGroupResult::QueryFaceAllUserGroupResult() :
	ServiceResult()
{}

QueryFaceAllUserGroupResult::QueryFaceAllUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceAllUserGroupResult::~QueryFaceAllUserGroupResult()
{}

void QueryFaceAllUserGroupResult::parse(const std::string &payload)
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
	auto allUserGroupListNode = dataNode["UserGroupList"]["userGroupListItem"];
	for (auto dataNodeUserGroupListuserGroupListItem : allUserGroupListNode)
	{
		Data::UserGroupListItem userGroupListItemObject;
		if(!dataNodeUserGroupListuserGroupListItem["UserGroupName"].isNull())
			userGroupListItemObject.userGroupName = dataNodeUserGroupListuserGroupListItem["UserGroupName"].asString();
		if(!dataNodeUserGroupListuserGroupListItem["ModifiedTime"].isNull())
			userGroupListItemObject.modifiedTime = dataNodeUserGroupListuserGroupListItem["ModifiedTime"].asString();
		if(!dataNodeUserGroupListuserGroupListItem["UserGroupId"].isNull())
			userGroupListItemObject.userGroupId = dataNodeUserGroupListuserGroupListItem["UserGroupId"].asString();
		data_.userGroupList.push_back(userGroupListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceAllUserGroupResult::Data QueryFaceAllUserGroupResult::getData()const
{
	return data_;
}

std::string QueryFaceAllUserGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceAllUserGroupResult::getCode()const
{
	return code_;
}

bool QueryFaceAllUserGroupResult::getSuccess()const
{
	return success_;
}

