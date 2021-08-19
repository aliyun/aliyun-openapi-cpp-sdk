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

#include <alibabacloud/ehpc/model/ListNodesNoPagingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListNodesNoPagingResult::ListNodesNoPagingResult() :
	ServiceResult()
{}

ListNodesNoPagingResult::ListNodesNoPagingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesNoPagingResult::~ListNodesNoPagingResult()
{}

void ListNodesNoPagingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["NodeInfo"];
	for (auto valueNodesNodeInfo : allNodesNode)
	{
		NodeInfo nodesObject;
		if(!valueNodesNodeInfo["Id"].isNull())
			nodesObject.id = valueNodesNodeInfo["Id"].asString();
		if(!valueNodesNodeInfo["HostName"].isNull())
			nodesObject.hostName = valueNodesNodeInfo["HostName"].asString();
		if(!valueNodesNodeInfo["Status"].isNull())
			nodesObject.status = valueNodesNodeInfo["Status"].asString();
		if(!valueNodesNodeInfo["Version"].isNull())
			nodesObject.version = valueNodesNodeInfo["Version"].asString();
		if(!valueNodesNodeInfo["CreatedByEhpc"].isNull())
			nodesObject.createdByEhpc = valueNodesNodeInfo["CreatedByEhpc"].asString() == "true";
		if(!valueNodesNodeInfo["AddTime"].isNull())
			nodesObject.addTime = valueNodesNodeInfo["AddTime"].asString();
		if(!valueNodesNodeInfo["Expired"].isNull())
			nodesObject.expired = valueNodesNodeInfo["Expired"].asString() == "true";
		if(!valueNodesNodeInfo["ExpiredTime"].isNull())
			nodesObject.expiredTime = valueNodesNodeInfo["ExpiredTime"].asString();
		if(!valueNodesNodeInfo["SpotStrategy"].isNull())
			nodesObject.spotStrategy = valueNodesNodeInfo["SpotStrategy"].asString();
		if(!valueNodesNodeInfo["LockReason"].isNull())
			nodesObject.lockReason = valueNodesNodeInfo["LockReason"].asString();
		if(!valueNodesNodeInfo["ImageOwnerAlias"].isNull())
			nodesObject.imageOwnerAlias = valueNodesNodeInfo["ImageOwnerAlias"].asString();
		if(!valueNodesNodeInfo["ImageId"].isNull())
			nodesObject.imageId = valueNodesNodeInfo["ImageId"].asString();
		if(!valueNodesNodeInfo["HtEnabled"].isNull())
			nodesObject.htEnabled = valueNodesNodeInfo["HtEnabled"].asString() == "true";
		if(!valueNodesNodeInfo["InstanceType"].isNull())
			nodesObject.instanceType = valueNodesNodeInfo["InstanceType"].asString();
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

}

std::vector<ListNodesNoPagingResult::NodeInfo> ListNodesNoPagingResult::getNodes()const
{
	return nodes_;
}

