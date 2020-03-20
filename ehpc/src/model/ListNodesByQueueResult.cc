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

#include <alibabacloud/ehpc/model/ListNodesByQueueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListNodesByQueueResult::ListNodesByQueueResult() :
	ServiceResult()
{}

ListNodesByQueueResult::ListNodesByQueueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesByQueueResult::~ListNodesByQueueResult()
{}

void ListNodesByQueueResult::parse(const std::string &payload)
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
		if(!valueNodesNodeInfo["RegionId"].isNull())
			nodesObject.regionId = valueNodesNodeInfo["RegionId"].asString();
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
		if(!valueNodesNodeInfo["Location"].isNull())
			nodesObject.location = valueNodesNodeInfo["Location"].asString();
		if(!valueNodesNodeInfo["CreateMode"].isNull())
			nodesObject.createMode = valueNodesNodeInfo["CreateMode"].asString();
		if(!valueNodesNodeInfo["VpcId"].isNull())
			nodesObject.vpcId = valueNodesNodeInfo["VpcId"].asString();
		if(!valueNodesNodeInfo["ZoneId"].isNull())
			nodesObject.zoneId = valueNodesNodeInfo["ZoneId"].asString();
		if(!valueNodesNodeInfo["VSwitchId"].isNull())
			nodesObject.vSwitchId = valueNodesNodeInfo["VSwitchId"].asString();
		if(!valueNodesNodeInfo["HtEnabled"].isNull())
			nodesObject.htEnabled = valueNodesNodeInfo["HtEnabled"].asString() == "true";
		if(!valueNodesNodeInfo["IpAddress"].isNull())
			nodesObject.ipAddress = valueNodesNodeInfo["IpAddress"].asString();
		if(!valueNodesNodeInfo["PublicIpAddress"].isNull())
			nodesObject.publicIpAddress = valueNodesNodeInfo["PublicIpAddress"].asString();
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
		nodes_.push_back(nodesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListNodesByQueueResult::getTotalCount()const
{
	return totalCount_;
}

int ListNodesByQueueResult::getPageSize()const
{
	return pageSize_;
}

int ListNodesByQueueResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListNodesByQueueResult::NodeInfo> ListNodesByQueueResult::getNodes()const
{
	return nodes_;
}

