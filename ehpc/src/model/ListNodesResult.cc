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

#include <alibabacloud/ehpc/model/ListNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListNodesResult::ListNodesResult() :
	ServiceResult()
{}

ListNodesResult::ListNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesResult::~ListNodesResult()
{}

void ListNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allNodes = value["Nodes"]["NodeInfo"];
	for (auto value : allNodes)
	{
		NodeInfo nodesObject;
		if(!value["Id"].isNull())
			nodesObject.id = value["Id"].asString();
		if(!value["RegionId"].isNull())
			nodesObject.regionId = value["RegionId"].asString();
		if(!value["HostName"].isNull())
			nodesObject.hostName = value["HostName"].asString();
		if(!value["Status"].isNull())
			nodesObject.status = value["Status"].asString();
		if(!value["Version"].isNull())
			nodesObject.version = value["Version"].asString();
		if(!value["CreatedByEhpc"].isNull())
			nodesObject.createdByEhpc = value["CreatedByEhpc"].asString() == "true";
		if(!value["AddTime"].isNull())
			nodesObject.addTime = value["AddTime"].asString();
		if(!value["Expired"].isNull())
			nodesObject.expired = value["Expired"].asString() == "true";
		if(!value["ExpiredTime"].isNull())
			nodesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["SpotStrategy"].isNull())
			nodesObject.spotStrategy = value["SpotStrategy"].asString();
		if(!value["LockReason"].isNull())
			nodesObject.lockReason = value["LockReason"].asString();
		if(!value["ImageOwnerAlias"].isNull())
			nodesObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		if(!value["ImageId"].isNull())
			nodesObject.imageId = value["ImageId"].asString();
		if(!value["Location"].isNull())
			nodesObject.location = value["Location"].asString();
		auto totalResourcesNode = value["TotalResources"];
		if(!totalResourcesNode["Cpu"].isNull())
			nodesObject.totalResources.cpu = std::stoi(totalResourcesNode["Cpu"].asString());
		if(!totalResourcesNode["Memory"].isNull())
			nodesObject.totalResources.memory = std::stoi(totalResourcesNode["Memory"].asString());
		if(!totalResourcesNode["Gpu"].isNull())
			nodesObject.totalResources.gpu = std::stoi(totalResourcesNode["Gpu"].asString());
		auto usedResourcesNode = value["UsedResources"];
		if(!usedResourcesNode["Cpu"].isNull())
			nodesObject.usedResources.cpu = std::stoi(usedResourcesNode["Cpu"].asString());
		if(!usedResourcesNode["Memory"].isNull())
			nodesObject.usedResources.memory = std::stoi(usedResourcesNode["Memory"].asString());
		if(!usedResourcesNode["Gpu"].isNull())
			nodesObject.usedResources.gpu = std::stoi(usedResourcesNode["Gpu"].asString());
		auto allRoles = value["Roles"]["Role"];
		for (auto value : allRoles)
			nodesObject.roles.push_back(value.asString());
		nodes_.push_back(nodesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListNodesResult::getTotalCount()const
{
	return totalCount_;
}

int ListNodesResult::getPageSize()const
{
	return pageSize_;
}

int ListNodesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListNodesResult::NodeInfo> ListNodesResult::getNodes()const
{
	return nodes_;
}

