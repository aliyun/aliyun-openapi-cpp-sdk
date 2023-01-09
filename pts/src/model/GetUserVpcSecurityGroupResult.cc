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

#include <alibabacloud/pts/model/GetUserVpcSecurityGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetUserVpcSecurityGroupResult::GetUserVpcSecurityGroupResult() :
	ServiceResult()
{}

GetUserVpcSecurityGroupResult::GetUserVpcSecurityGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserVpcSecurityGroupResult::~GetUserVpcSecurityGroupResult()
{}

void GetUserVpcSecurityGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupListNode = value["SecurityGroupList"]["SecurityGroup"];
	for (auto valueSecurityGroupListSecurityGroup : allSecurityGroupListNode)
	{
		SecurityGroup securityGroupListObject;
		if(!valueSecurityGroupListSecurityGroup["VpcId"].isNull())
			securityGroupListObject.vpcId = valueSecurityGroupListSecurityGroup["VpcId"].asString();
		if(!valueSecurityGroupListSecurityGroup["Description"].isNull())
			securityGroupListObject.description = valueSecurityGroupListSecurityGroup["Description"].asString();
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupId"].isNull())
			securityGroupListObject.securityGroupId = valueSecurityGroupListSecurityGroup["SecurityGroupId"].asString();
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupName"].isNull())
			securityGroupListObject.securityGroupName = valueSecurityGroupListSecurityGroup["SecurityGroupName"].asString();
		securityGroupList_.push_back(securityGroupListObject);
	}
	if(!value["SecurityGroupCount"].isNull())
		securityGroupCount_ = std::stoi(value["SecurityGroupCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetUserVpcSecurityGroupResult::SecurityGroup> GetUserVpcSecurityGroupResult::getSecurityGroupList()const
{
	return securityGroupList_;
}

int GetUserVpcSecurityGroupResult::getSecurityGroupCount()const
{
	return securityGroupCount_;
}

std::string GetUserVpcSecurityGroupResult::getMessage()const
{
	return message_;
}

int GetUserVpcSecurityGroupResult::getPageSize()const
{
	return pageSize_;
}

int GetUserVpcSecurityGroupResult::getPageNumber()const
{
	return pageNumber_;
}

int GetUserVpcSecurityGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetUserVpcSecurityGroupResult::getCode()const
{
	return code_;
}

bool GetUserVpcSecurityGroupResult::getSuccess()const
{
	return success_;
}

