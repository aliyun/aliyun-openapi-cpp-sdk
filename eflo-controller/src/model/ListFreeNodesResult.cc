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

#include <alibabacloud/eflo-controller/model/ListFreeNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo_controller;
using namespace AlibabaCloud::Eflo_controller::Model;

ListFreeNodesResult::ListFreeNodesResult() :
	ServiceResult()
{}

ListFreeNodesResult::ListFreeNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFreeNodesResult::~ListFreeNodesResult()
{}

void ListFreeNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["nodesItem"];
	for (auto valueNodesnodesItem : allNodesNode)
	{
		NodesItem nodesObject;
		if(!valueNodesnodesItem["ZoneId"].isNull())
			nodesObject.zoneId = valueNodesnodesItem["ZoneId"].asString();
		if(!valueNodesnodesItem["CreateTime"].isNull())
			nodesObject.createTime = valueNodesnodesItem["CreateTime"].asString();
		if(!valueNodesnodesItem["NodeId"].isNull())
			nodesObject.nodeId = valueNodesnodesItem["NodeId"].asString();
		if(!valueNodesnodesItem["MachineType"].isNull())
			nodesObject.machineType = valueNodesnodesItem["MachineType"].asString();
		if(!valueNodesnodesItem["Sn"].isNull())
			nodesObject.sn = valueNodesnodesItem["Sn"].asString();
		if(!valueNodesnodesItem["ExpiredTime"].isNull())
			nodesObject.expiredTime = valueNodesnodesItem["ExpiredTime"].asString();
		nodes_.push_back(nodesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListFreeNodesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListFreeNodesResult::NodesItem> ListFreeNodesResult::getNodes()const
{
	return nodes_;
}

