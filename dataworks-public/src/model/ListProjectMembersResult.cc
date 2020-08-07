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

#include <alibabacloud/dataworks-public/model/ListProjectMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListProjectMembersResult::ListProjectMembersResult() :
	ServiceResult()
{}

ListProjectMembersResult::ListProjectMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectMembersResult::~ListProjectMembersResult()
{}

void ListProjectMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProjectMemberListNode = value["ProjectMemberList"]["ProjectMember"];
	for (auto valueProjectMemberListProjectMember : allProjectMemberListNode)
	{
		ProjectMember projectMemberListObject;
		if(!valueProjectMemberListProjectMember["ProjectMemberId"].isNull())
			projectMemberListObject.projectMemberId = valueProjectMemberListProjectMember["ProjectMemberId"].asString();
		if(!valueProjectMemberListProjectMember["ProjectMemberName"].isNull())
			projectMemberListObject.projectMemberName = valueProjectMemberListProjectMember["ProjectMemberName"].asString();
		if(!valueProjectMemberListProjectMember["ProjectMemberType"].isNull())
			projectMemberListObject.projectMemberType = valueProjectMemberListProjectMember["ProjectMemberType"].asString();
		if(!valueProjectMemberListProjectMember["CreateOn"].isNull())
			projectMemberListObject.createOn = valueProjectMemberListProjectMember["CreateOn"].asString();
		if(!valueProjectMemberListProjectMember["Nick"].isNull())
			projectMemberListObject.nick = valueProjectMemberListProjectMember["Nick"].asString();
		if(!valueProjectMemberListProjectMember["Status"].isNull())
			projectMemberListObject.status = valueProjectMemberListProjectMember["Status"].asString();
		auto allProjectRoleListNode = allProjectMemberListNode["ProjectRoleList"]["Role"];
		for (auto allProjectMemberListNodeProjectRoleListRole : allProjectRoleListNode)
		{
			ProjectMember::Role projectRoleListObject;
			if(!allProjectMemberListNodeProjectRoleListRole["ProjectRoleCode"].isNull())
				projectRoleListObject.projectRoleCode = allProjectMemberListNodeProjectRoleListRole["ProjectRoleCode"].asString();
			if(!allProjectMemberListNodeProjectRoleListRole["ProjectRoleId"].isNull())
				projectRoleListObject.projectRoleId = std::stoi(allProjectMemberListNodeProjectRoleListRole["ProjectRoleId"].asString());
			if(!allProjectMemberListNodeProjectRoleListRole["ProjectRoleName"].isNull())
				projectRoleListObject.projectRoleName = allProjectMemberListNodeProjectRoleListRole["ProjectRoleName"].asString();
			if(!allProjectMemberListNodeProjectRoleListRole["ProjectRoleType"].isNull())
				projectRoleListObject.projectRoleType = allProjectMemberListNodeProjectRoleListRole["ProjectRoleType"].asString();
			projectMemberListObject.projectRoleList.push_back(projectRoleListObject);
		}
		projectMemberList_.push_back(projectMemberListObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListProjectMembersResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListProjectMembersResult::ProjectMember> ListProjectMembersResult::getProjectMemberList()const
{
	return projectMemberList_;
}

int ListProjectMembersResult::getPageNum()const
{
	return pageNum_;
}

int ListProjectMembersResult::getPageSize()const
{
	return pageSize_;
}

