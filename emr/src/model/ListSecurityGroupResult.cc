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

#include <alibabacloud/emr/model/ListSecurityGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListSecurityGroupResult::ListSecurityGroupResult() :
	ServiceResult()
{}

ListSecurityGroupResult::ListSecurityGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityGroupResult::~ListSecurityGroupResult()
{}

void ListSecurityGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupListNode = value["SecurityGroupList"]["SecurityGroup"];
	for (auto valueSecurityGroupListSecurityGroup : allSecurityGroupListNode)
	{
		SecurityGroup securityGroupListObject;
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupId"].isNull())
			securityGroupListObject.securityGroupId = valueSecurityGroupListSecurityGroup["SecurityGroupId"].asString();
		if(!valueSecurityGroupListSecurityGroup["Description"].isNull())
			securityGroupListObject.description = valueSecurityGroupListSecurityGroup["Description"].asString();
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupName"].isNull())
			securityGroupListObject.securityGroupName = valueSecurityGroupListSecurityGroup["SecurityGroupName"].asString();
		if(!valueSecurityGroupListSecurityGroup["VpcId"].isNull())
			securityGroupListObject.vpcId = valueSecurityGroupListSecurityGroup["VpcId"].asString();
		if(!valueSecurityGroupListSecurityGroup["CreationTime"].isNull())
			securityGroupListObject.creationTime = valueSecurityGroupListSecurityGroup["CreationTime"].asString();
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupType"].isNull())
			securityGroupListObject.securityGroupType = valueSecurityGroupListSecurityGroup["SecurityGroupType"].asString();
		if(!valueSecurityGroupListSecurityGroup["AvailableInstanceAmount"].isNull())
			securityGroupListObject.availableInstanceAmount = std::stoi(valueSecurityGroupListSecurityGroup["AvailableInstanceAmount"].asString());
		if(!valueSecurityGroupListSecurityGroup["EcsCount"].isNull())
			securityGroupListObject.ecsCount = std::stoi(valueSecurityGroupListSecurityGroup["EcsCount"].asString());
		securityGroupList_.push_back(securityGroupListObject);
	}

}

std::vector<ListSecurityGroupResult::SecurityGroup> ListSecurityGroupResult::getSecurityGroupList()const
{
	return securityGroupList_;
}

