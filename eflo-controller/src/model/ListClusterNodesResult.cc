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

#include <alibabacloud/eflo-controller/model/ListClusterNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo_controller;
using namespace AlibabaCloud::Eflo_controller::Model;

ListClusterNodesResult::ListClusterNodesResult() :
	ServiceResult()
{}

ListClusterNodesResult::ListClusterNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterNodesResult::~ListClusterNodesResult()
{}

void ListClusterNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["NodesItem"];
	for (auto valueNodesNodesItem : allNodesNode)
	{
		NodesItem nodesObject;
		if(!valueNodesNodesItem["CreateTime"].isNull())
			nodesObject.createTime = valueNodesNodesItem["CreateTime"].asString();
		if(!valueNodesNodesItem["ExpiredTime"].isNull())
			nodesObject.expiredTime = valueNodesNodesItem["ExpiredTime"].asString();
		if(!valueNodesNodesItem["Hostname"].isNull())
			nodesObject.hostname = valueNodesNodesItem["Hostname"].asString();
		if(!valueNodesNodesItem["ImageId"].isNull())
			nodesObject.imageId = valueNodesNodesItem["ImageId"].asString();
		if(!valueNodesNodesItem["MachineType"].isNull())
			nodesObject.machineType = valueNodesNodesItem["MachineType"].asString();
		if(!valueNodesNodesItem["NodeGroupId"].isNull())
			nodesObject.nodeGroupId = valueNodesNodesItem["NodeGroupId"].asString();
		if(!valueNodesNodesItem["NodeGroupName"].isNull())
			nodesObject.nodeGroupName = valueNodesNodesItem["NodeGroupName"].asString();
		if(!valueNodesNodesItem["NodeId"].isNull())
			nodesObject.nodeId = valueNodesNodesItem["NodeId"].asString();
		if(!valueNodesNodesItem["OperatingState"].isNull())
			nodesObject.operatingState = valueNodesNodesItem["OperatingState"].asString();
		if(!valueNodesNodesItem["Sn"].isNull())
			nodesObject.sn = valueNodesNodesItem["Sn"].asString();
		if(!valueNodesNodesItem["ZoneId"].isNull())
			nodesObject.zoneId = valueNodesNodesItem["ZoneId"].asString();
		auto allNetworksNode = valueNodesNodesItem["Networks"]["NetworksItem"];
		for (auto valueNodesNodesItemNetworksNetworksItem : allNetworksNode)
		{
			NodesItem::NetworksItem networksObject;
			if(!valueNodesNodesItemNetworksNetworksItem["BondName"].isNull())
				networksObject.bondName = valueNodesNodesItemNetworksNetworksItem["BondName"].asString();
			if(!valueNodesNodesItemNetworksNetworksItem["Ip"].isNull())
				networksObject.ip = valueNodesNodesItemNetworksNetworksItem["Ip"].asString();
			if(!valueNodesNodesItemNetworksNetworksItem["SubnetId"].isNull())
				networksObject.subnetId = valueNodesNodesItemNetworksNetworksItem["SubnetId"].asString();
			if(!valueNodesNodesItemNetworksNetworksItem["VpdId"].isNull())
				networksObject.vpdId = valueNodesNodesItemNetworksNetworksItem["VpdId"].asString();
			nodesObject.networks.push_back(networksObject);
		}
		nodes_.push_back(nodesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListClusterNodesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListClusterNodesResult::NodesItem> ListClusterNodesResult::getNodes()const
{
	return nodes_;
}

