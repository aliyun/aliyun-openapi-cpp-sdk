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

#include <alibabacloud/dataworks-public/model/GetDataServiceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDataServiceGroupResult::GetDataServiceGroupResult() :
	ServiceResult()
{}

GetDataServiceGroupResult::GetDataServiceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataServiceGroupResult::~GetDataServiceGroupResult()
{}

void GetDataServiceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupNode = value["Group"];
	if(!groupNode["ModifiedTime"].isNull())
		group_.modifiedTime = groupNode["ModifiedTime"].asString();
	if(!groupNode["Description"].isNull())
		group_.description = groupNode["Description"].asString();
	if(!groupNode["GroupName"].isNull())
		group_.groupName = groupNode["GroupName"].asString();
	if(!groupNode["GroupId"].isNull())
		group_.groupId = groupNode["GroupId"].asString();
	if(!groupNode["ProjectId"].isNull())
		group_.projectId = std::stol(groupNode["ProjectId"].asString());
	if(!groupNode["ApiGatewayGroupId"].isNull())
		group_.apiGatewayGroupId = groupNode["ApiGatewayGroupId"].asString();
	if(!groupNode["CreatorId"].isNull())
		group_.creatorId = groupNode["CreatorId"].asString();
	if(!groupNode["CreatedTime"].isNull())
		group_.createdTime = groupNode["CreatedTime"].asString();
	if(!groupNode["TenantId"].isNull())
		group_.tenantId = std::stol(groupNode["TenantId"].asString());

}

GetDataServiceGroupResult::Group GetDataServiceGroupResult::getGroup()const
{
	return group_;
}

