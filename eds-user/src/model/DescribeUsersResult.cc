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

#include <alibabacloud/eds-user/model/DescribeUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

DescribeUsersResult::DescribeUsersResult() :
	ServiceResult()
{}

DescribeUsersResult::DescribeUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUsersResult::~DescribeUsersResult()
{}

void DescribeUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["data"];
	for (auto valueUsersdata : allUsersNode)
	{
		Data usersObject;
		if(!valueUsersdata["Id"].isNull())
			usersObject.id = std::stol(valueUsersdata["Id"].asString());
		if(!valueUsersdata["EndUserId"].isNull())
			usersObject.endUserId = valueUsersdata["EndUserId"].asString();
		if(!valueUsersdata["Email"].isNull())
			usersObject.email = valueUsersdata["Email"].asString();
		if(!valueUsersdata["Phone"].isNull())
			usersObject.phone = valueUsersdata["Phone"].asString();
		if(!valueUsersdata["Status"].isNull())
			usersObject.status = std::stol(valueUsersdata["Status"].asString());
		if(!valueUsersdata["OwnerType"].isNull())
			usersObject.ownerType = valueUsersdata["OwnerType"].asString();
		if(!valueUsersdata["Remark"].isNull())
			usersObject.remark = valueUsersdata["Remark"].asString();
		if(!valueUsersdata["OrgId"].isNull())
			usersObject.orgId = valueUsersdata["OrgId"].asString();
		if(!valueUsersdata["WyId"].isNull())
			usersObject.wyId = valueUsersdata["WyId"].asString();
		if(!valueUsersdata["IsTenantManager"].isNull())
			usersObject.isTenantManager = valueUsersdata["IsTenantManager"].asString() == "true";
		if(!valueUsersdata["Avatar"].isNull())
			usersObject.avatar = valueUsersdata["Avatar"].asString();
		if(!valueUsersdata["Address"].isNull())
			usersObject.address = valueUsersdata["Address"].asString();
		if(!valueUsersdata["NickName"].isNull())
			usersObject.nickName = valueUsersdata["NickName"].asString();
		if(!valueUsersdata["RealNickName"].isNull())
			usersObject.realNickName = valueUsersdata["RealNickName"].asString();
		if(!valueUsersdata["JobNumber"].isNull())
			usersObject.jobNumber = valueUsersdata["JobNumber"].asString();
		if(!valueUsersdata["ExternalName"].isNull())
			usersObject.externalName = valueUsersdata["ExternalName"].asString();
		auto allGroupsNode = valueUsersdata["Groups"]["group"];
		for (auto valueUsersdataGroupsgroup : allGroupsNode)
		{
			Data::Group groupsObject;
			if(!valueUsersdataGroupsgroup["GroupId"].isNull())
				groupsObject.groupId = valueUsersdataGroupsgroup["GroupId"].asString();
			if(!valueUsersdataGroupsgroup["GroupName"].isNull())
				groupsObject.groupName = valueUsersdataGroupsgroup["GroupName"].asString();
			usersObject.groups.push_back(groupsObject);
		}
		auto allOrgsNode = valueUsersdata["Orgs"]["org"];
		for (auto valueUsersdataOrgsorg : allOrgsNode)
		{
			Data::Org orgsObject;
			if(!valueUsersdataOrgsorg["OrgId"].isNull())
				orgsObject.orgId = valueUsersdataOrgsorg["OrgId"].asString();
			if(!valueUsersdataOrgsorg["OrgName"].isNull())
				orgsObject.orgName = valueUsersdataOrgsorg["OrgName"].asString();
			if(!valueUsersdataOrgsorg["OrgNamePath"].isNull())
				orgsObject.orgNamePath = valueUsersdataOrgsorg["OrgNamePath"].asString();
			usersObject.orgs.push_back(orgsObject);
		}
		auto allPropertiesNode = valueUsersdata["Properties"]["Property"];
		for (auto valueUsersdataPropertiesProperty : allPropertiesNode)
		{
			Data::Property propertiesObject;
			if(!valueUsersdataPropertiesProperty["Key"].isNull())
				propertiesObject.key = valueUsersdataPropertiesProperty["Key"].asString();
			if(!valueUsersdataPropertiesProperty["Value"].isNull())
				propertiesObject.value = valueUsersdataPropertiesProperty["Value"].asString();
			usersObject.properties.push_back(propertiesObject);
		}
		auto extrasNode = value["Extras"];
		if(!extrasNode["AssignedResourceCount"].isNull())
			usersObject.extras.assignedResourceCount = extrasNode["AssignedResourceCount"].asString();
		users_.push_back(usersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeUsersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeUsersResult::Data> DescribeUsersResult::getUsers()const
{
	return users_;
}

