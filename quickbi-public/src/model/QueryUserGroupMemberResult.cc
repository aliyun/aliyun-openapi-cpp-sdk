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

#include <alibabacloud/quickbi-public/model/QueryUserGroupMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryUserGroupMemberResult::QueryUserGroupMemberResult() :
	ServiceResult()
{}

QueryUserGroupMemberResult::QueryUserGroupMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserGroupMemberResult::~QueryUserGroupMemberResult()
{}

void QueryUserGroupMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["Id"].isNull())
			resultObject.id = valueResultData["Id"].asString();
		if(!valueResultData["IsUserGroup"].isNull())
			resultObject.isUserGroup = valueResultData["IsUserGroup"].asString() == "true";
		if(!valueResultData["Name"].isNull())
			resultObject.name = valueResultData["Name"].asString();
		if(!valueResultData["ParentUserGroupId"].isNull())
			resultObject.parentUserGroupId = valueResultData["ParentUserGroupId"].asString();
		if(!valueResultData["ParentUserGroupName"].isNull())
			resultObject.parentUserGroupName = valueResultData["ParentUserGroupName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryUserGroupMemberResult::getSuccess()const
{
	return success_;
}

std::vector<QueryUserGroupMemberResult::Data> QueryUserGroupMemberResult::getResult()const
{
	return result_;
}

