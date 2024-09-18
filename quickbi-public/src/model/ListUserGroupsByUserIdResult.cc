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

#include <alibabacloud/quickbi-public/model/ListUserGroupsByUserIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListUserGroupsByUserIdResult::ListUserGroupsByUserIdResult() :
	ServiceResult()
{}

ListUserGroupsByUserIdResult::ListUserGroupsByUserIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserGroupsByUserIdResult::~ListUserGroupsByUserIdResult()
{}

void ListUserGroupsByUserIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["CreateTime"].isNull())
			resultObject.createTime = valueResultData["CreateTime"].asString();
		if(!valueResultData["CreateUser"].isNull())
			resultObject.createUser = valueResultData["CreateUser"].asString();
		if(!valueResultData["IdentifiedPath"].isNull())
			resultObject.identifiedPath = valueResultData["IdentifiedPath"].asString();
		if(!valueResultData["ModifiedTime"].isNull())
			resultObject.modifiedTime = valueResultData["ModifiedTime"].asString();
		if(!valueResultData["ModifyUser"].isNull())
			resultObject.modifyUser = valueResultData["ModifyUser"].asString();
		if(!valueResultData["ParentUsergroupId"].isNull())
			resultObject.parentUsergroupId = valueResultData["ParentUsergroupId"].asString();
		if(!valueResultData["UsergroupDesc"].isNull())
			resultObject.usergroupDesc = valueResultData["UsergroupDesc"].asString();
		if(!valueResultData["UsergroupId"].isNull())
			resultObject.usergroupId = valueResultData["UsergroupId"].asString();
		if(!valueResultData["UsergroupName"].isNull())
			resultObject.usergroupName = valueResultData["UsergroupName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListUserGroupsByUserIdResult::getSuccess()const
{
	return success_;
}

std::vector<ListUserGroupsByUserIdResult::Data> ListUserGroupsByUserIdResult::getResult()const
{
	return result_;
}

