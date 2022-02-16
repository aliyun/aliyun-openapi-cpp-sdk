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

#include <alibabacloud/emr/model/ListNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

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
	auto allNodesNode = value["Nodes"]["Node"];
	for (auto valueNodesNode : allNodesNode)
	{
		Node nodesObject;
		if(!valueNodesNode["NodeId"].isNull())
			nodesObject.nodeId = valueNodesNode["NodeId"].asString();
		if(!valueNodesNode["NodeName"].isNull())
			nodesObject.nodeName = valueNodesNode["NodeName"].asString();
		if(!valueNodesNode["PublicIp"].isNull())
			nodesObject.publicIp = valueNodesNode["PublicIp"].asString();
		if(!valueNodesNode["PrivateIp"].isNull())
			nodesObject.privateIp = valueNodesNode["PrivateIp"].asString();
		if(!valueNodesNode["InstanceType"].isNull())
			nodesObject.instanceType = valueNodesNode["InstanceType"].asString();
		if(!valueNodesNode["NodeState"].isNull())
			nodesObject.nodeState = valueNodesNode["NodeState"].asString();
		if(!valueNodesNode["NodeGroupId"].isNull())
			nodesObject.nodeGroupId = valueNodesNode["NodeGroupId"].asString();
		if(!valueNodesNode["NodeGroupName"].isNull())
			nodesObject.nodeGroupName = valueNodesNode["NodeGroupName"].asString();
		if(!valueNodesNode["NodeGroupType"].isNull())
			nodesObject.nodeGroupType = valueNodesNode["NodeGroupType"].asString();
		if(!valueNodesNode["EcsExpireTime"].isNull())
			nodesObject.ecsExpireTime = std::stol(valueNodesNode["EcsExpireTime"].asString());
		if(!valueNodesNode["EmrExpireTime"].isNull())
			nodesObject.emrExpireTime = std::stol(valueNodesNode["EmrExpireTime"].asString());
		if(!valueNodesNode["EcsAutoRenew"].isNull())
			nodesObject.ecsAutoRenew = valueNodesNode["EcsAutoRenew"].asString() == "true";
		if(!valueNodesNode["EmrAutoRenew"].isNull())
			nodesObject.emrAutoRenew = valueNodesNode["EmrAutoRenew"].asString() == "true";
		if(!valueNodesNode["ZoneId"].isNull())
			nodesObject.zoneId = valueNodesNode["ZoneId"].asString();
		nodes_.push_back(nodesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListNodesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNodesResult::getNextToken()const
{
	return nextToken_;
}

int ListNodesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListNodesResult::Node> ListNodesResult::getNodes()const
{
	return nodes_;
}

