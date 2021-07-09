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

#include <alibabacloud/devops-rdc/model/ListDevopsProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListDevopsProjectsResult::ListDevopsProjectsResult() :
	ServiceResult()
{}

ListDevopsProjectsResult::ListDevopsProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevopsProjectsResult::~ListDevopsProjectsResult()
{}

void ListDevopsProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["NextPageToken"].isNull())
		object_.nextPageToken = objectNode["NextPageToken"].asString();
	auto allResultNode = objectNode["Result"]["Project"];
	for (auto objectNodeResultProject : allResultNode)
	{
		Object::Project projectObject;
		if(!objectNodeResultProject["Logo"].isNull())
			projectObject.logo = objectNodeResultProject["Logo"].asString();
		if(!objectNodeResultProject["IsStar"].isNull())
			projectObject.isStar = objectNodeResultProject["IsStar"].asString() == "true";
		if(!objectNodeResultProject["CreatorId"].isNull())
			projectObject.creatorId = objectNodeResultProject["CreatorId"].asString();
		if(!objectNodeResultProject["MembersCount"].isNull())
			projectObject.membersCount = std::stoi(objectNodeResultProject["MembersCount"].asString());
		if(!objectNodeResultProject["OrganizationId"].isNull())
			projectObject.organizationId = objectNodeResultProject["OrganizationId"].asString();
		if(!objectNodeResultProject["Visibility"].isNull())
			projectObject.visibility = objectNodeResultProject["Visibility"].asString();
		if(!objectNodeResultProject["IsTemplate"].isNull())
			projectObject.isTemplate = objectNodeResultProject["IsTemplate"].asString() == "true";
		if(!objectNodeResultProject["Description"].isNull())
			projectObject.description = objectNodeResultProject["Description"].asString();
		if(!objectNodeResultProject["Updated"].isNull())
			projectObject.updated = objectNodeResultProject["Updated"].asString();
		if(!objectNodeResultProject["Created"].isNull())
			projectObject.created = objectNodeResultProject["Created"].asString();
		if(!objectNodeResultProject["IsArchived"].isNull())
			projectObject.isArchived = objectNodeResultProject["IsArchived"].asString() == "true";
		if(!objectNodeResultProject["Name"].isNull())
			projectObject.name = objectNodeResultProject["Name"].asString();
		if(!objectNodeResultProject["IsPublic"].isNull())
			projectObject.isPublic = objectNodeResultProject["IsPublic"].asString() == "true";
		if(!objectNodeResultProject["TasksCount"].isNull())
			projectObject.tasksCount = std::stoi(objectNodeResultProject["TasksCount"].asString());
		if(!objectNodeResultProject["RoleId"].isNull())
			projectObject.roleId = objectNodeResultProject["RoleId"].asString();
		if(!objectNodeResultProject["Id"].isNull())
			projectObject.id = objectNodeResultProject["Id"].asString();
		object_.result.push_back(projectObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListDevopsProjectsResult::getErrorMsg()const
{
	return errorMsg_;
}

ListDevopsProjectsResult::Object ListDevopsProjectsResult::getObject()const
{
	return object_;
}

std::string ListDevopsProjectsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListDevopsProjectsResult::getSuccessful()const
{
	return successful_;
}

