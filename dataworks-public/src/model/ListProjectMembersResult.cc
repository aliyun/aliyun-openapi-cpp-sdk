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
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allProjectMemberListNode = dataNode["ProjectMemberList"]["ProjectMember"];
	for (auto dataNodeProjectMemberListProjectMember : allProjectMemberListNode)
	{
		Data::ProjectMember projectMemberObject;
		if(!dataNodeProjectMemberListProjectMember["Status"].isNull())
			projectMemberObject.status = dataNodeProjectMemberListProjectMember["Status"].asString();
		if(!dataNodeProjectMemberListProjectMember["ProjectMemberId"].isNull())
			projectMemberObject.projectMemberId = dataNodeProjectMemberListProjectMember["ProjectMemberId"].asString();
		if(!dataNodeProjectMemberListProjectMember["Nick"].isNull())
			projectMemberObject.nick = dataNodeProjectMemberListProjectMember["Nick"].asString();
		if(!dataNodeProjectMemberListProjectMember["ProjectMemberName"].isNull())
			projectMemberObject.projectMemberName = dataNodeProjectMemberListProjectMember["ProjectMemberName"].asString();
		if(!dataNodeProjectMemberListProjectMember["ProjectMemberType"].isNull())
			projectMemberObject.projectMemberType = dataNodeProjectMemberListProjectMember["ProjectMemberType"].asString();
		auto allProjectRoleListNode = dataNodeProjectMemberListProjectMember["ProjectRoleList"]["Role"];
		for (auto dataNodeProjectMemberListProjectMemberProjectRoleListRole : allProjectRoleListNode)
		{
			Data::ProjectMember::Role projectRoleListObject;
			if(!dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleId"].isNull())
				projectRoleListObject.projectRoleId = std::stoi(dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleId"].asString());
			if(!dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleType"].isNull())
				projectRoleListObject.projectRoleType = dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleType"].asString();
			if(!dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleName"].isNull())
				projectRoleListObject.projectRoleName = dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleName"].asString();
			if(!dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleCode"].isNull())
				projectRoleListObject.projectRoleCode = dataNodeProjectMemberListProjectMemberProjectRoleListRole["ProjectRoleCode"].asString();
			projectMemberObject.projectRoleList.push_back(projectRoleListObject);
		}
		data_.projectMemberList.push_back(projectMemberObject);
	}

}

ListProjectMembersResult::Data ListProjectMembersResult::getData()const
{
	return data_;
}

