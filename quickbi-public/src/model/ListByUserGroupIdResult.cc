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

#include <alibabacloud/quickbi-public/model/ListByUserGroupIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListByUserGroupIdResult::ListByUserGroupIdResult() :
	ServiceResult()
{}

ListByUserGroupIdResult::ListByUserGroupIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListByUserGroupIdResult::~ListByUserGroupIdResult()
{}

void ListByUserGroupIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allUserGroupModelsNode = resultNode["UserGroupModels"]["UserGroupModelsItem"];
	for (auto resultNodeUserGroupModelsUserGroupModelsItem : allUserGroupModelsNode)
	{
		Result::UserGroupModelsItem userGroupModelsItemObject;
		if(!resultNodeUserGroupModelsUserGroupModelsItem["CreateTime"].isNull())
			userGroupModelsItemObject.createTime = resultNodeUserGroupModelsUserGroupModelsItem["CreateTime"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["CreateUser"].isNull())
			userGroupModelsItemObject.createUser = resultNodeUserGroupModelsUserGroupModelsItem["CreateUser"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["IdentifiedPath"].isNull())
			userGroupModelsItemObject.identifiedPath = resultNodeUserGroupModelsUserGroupModelsItem["IdentifiedPath"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["ModifiedTime"].isNull())
			userGroupModelsItemObject.modifiedTime = resultNodeUserGroupModelsUserGroupModelsItem["ModifiedTime"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["ModifyUser"].isNull())
			userGroupModelsItemObject.modifyUser = resultNodeUserGroupModelsUserGroupModelsItem["ModifyUser"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["ParentUsergroupId"].isNull())
			userGroupModelsItemObject.parentUsergroupId = resultNodeUserGroupModelsUserGroupModelsItem["ParentUsergroupId"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["UsergroupDesc"].isNull())
			userGroupModelsItemObject.usergroupDesc = resultNodeUserGroupModelsUserGroupModelsItem["UsergroupDesc"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["UsergroupId"].isNull())
			userGroupModelsItemObject.usergroupId = resultNodeUserGroupModelsUserGroupModelsItem["UsergroupId"].asString();
		if(!resultNodeUserGroupModelsUserGroupModelsItem["UsergroupName"].isNull())
			userGroupModelsItemObject.usergroupName = resultNodeUserGroupModelsUserGroupModelsItem["UsergroupName"].asString();
		result_.userGroupModels.push_back(userGroupModelsItemObject);
	}
		auto allFailedUserGroupIds = resultNode["FailedUserGroupIds"]["FailedUserGroupIds"];
		for (auto value : allFailedUserGroupIds)
			result_.failedUserGroupIds.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListByUserGroupIdResult::getSuccess()const
{
	return success_;
}

ListByUserGroupIdResult::Result ListByUserGroupIdResult::getResult()const
{
	return result_;
}

