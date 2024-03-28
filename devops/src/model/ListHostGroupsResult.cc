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

#include <alibabacloud/devops/model/ListHostGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListHostGroupsResult::ListHostGroupsResult() :
	ServiceResult()
{}

ListHostGroupsResult::ListHostGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHostGroupsResult::~ListHostGroupsResult()
{}

void ListHostGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allhostGroupsNode = value["hostGroups"]["HostGroup"];
	for (auto valuehostGroupsHostGroup : allhostGroupsNode)
	{
		HostGroup hostGroupsObject;
		if(!valuehostGroupsHostGroup["creatorAccountId"].isNull())
			hostGroupsObject.creatorAccountId = valuehostGroupsHostGroup["creatorAccountId"].asString();
		if(!valuehostGroupsHostGroup["updateTime"].isNull())
			hostGroupsObject.updateTime = std::stol(valuehostGroupsHostGroup["updateTime"].asString());
		if(!valuehostGroupsHostGroup["hostNum"].isNull())
			hostGroupsObject.hostNum = std::stol(valuehostGroupsHostGroup["hostNum"].asString());
		if(!valuehostGroupsHostGroup["modifierAccountId"].isNull())
			hostGroupsObject.modifierAccountId = valuehostGroupsHostGroup["modifierAccountId"].asString();
		if(!valuehostGroupsHostGroup["description"].isNull())
			hostGroupsObject.description = valuehostGroupsHostGroup["description"].asString();
		if(!valuehostGroupsHostGroup["type"].isNull())
			hostGroupsObject.type = valuehostGroupsHostGroup["type"].asString();
		if(!valuehostGroupsHostGroup["createTime"].isNull())
			hostGroupsObject.createTime = std::stol(valuehostGroupsHostGroup["createTime"].asString());
		if(!valuehostGroupsHostGroup["ecsType"].isNull())
			hostGroupsObject.ecsType = valuehostGroupsHostGroup["ecsType"].asString();
		if(!valuehostGroupsHostGroup["aliyunRegion"].isNull())
			hostGroupsObject.aliyunRegion = valuehostGroupsHostGroup["aliyunRegion"].asString();
		if(!valuehostGroupsHostGroup["ecsLabelKey"].isNull())
			hostGroupsObject.ecsLabelKey = valuehostGroupsHostGroup["ecsLabelKey"].asString();
		if(!valuehostGroupsHostGroup["name"].isNull())
			hostGroupsObject.name = valuehostGroupsHostGroup["name"].asString();
		if(!valuehostGroupsHostGroup["id"].isNull())
			hostGroupsObject.id = std::stol(valuehostGroupsHostGroup["id"].asString());
		if(!valuehostGroupsHostGroup["serviceConnectionId"].isNull())
			hostGroupsObject.serviceConnectionId = std::stol(valuehostGroupsHostGroup["serviceConnectionId"].asString());
		if(!valuehostGroupsHostGroup["ecsLabelValue"].isNull())
			hostGroupsObject.ecsLabelValue = valuehostGroupsHostGroup["ecsLabelValue"].asString();
		hostGroups_.push_back(hostGroupsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["totalCount"].isNull())
		totalCount_ = std::stol(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();

}

std::vector<ListHostGroupsResult::HostGroup> ListHostGroupsResult::gethostGroups()const
{
	return hostGroups_;
}

long ListHostGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListHostGroupsResult::getRequestId()const
{
	return requestId_;
}

std::string ListHostGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListHostGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListHostGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListHostGroupsResult::getSuccess()const
{
	return success_;
}

