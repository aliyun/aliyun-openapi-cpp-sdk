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

#include <alibabacloud/emr/model/ListNodesv3Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListNodesv3Result::ListNodesv3Result() :
	ServiceResult()
{}

ListNodesv3Result::ListNodesv3Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesv3Result::~ListNodesv3Result()
{}

void ListNodesv3Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["Node"];
	for (auto valueNodesNode : allNodesNode)
	{
		Node nodesObject;
		if(!valueNodesNode["NodeName"].isNull())
			nodesObject.nodeName = valueNodesNode["NodeName"].asString();
		if(!valueNodesNode["NodeId"].isNull())
			nodesObject.nodeId = valueNodesNode["NodeId"].asString();
		if(!valueNodesNode["PublicIp"].isNull())
			nodesObject.publicIp = valueNodesNode["PublicIp"].asString();
		if(!valueNodesNode["PrivateIp"].isNull())
			nodesObject.privateIp = valueNodesNode["PrivateIp"].asString();
		if(!valueNodesNode["InstanceType"].isNull())
			nodesObject.instanceType = valueNodesNode["InstanceType"].asString();
		if(!valueNodesNode["NodeGroupId"].isNull())
			nodesObject.nodeGroupId = valueNodesNode["NodeGroupId"].asString();
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
		if(!valueNodesNode["StateChangeReason"].isNull())
			nodesObject.stateChangeReason = valueNodesNode["StateChangeReason"].asString();
		if(!valueNodesNode["NodeGroupName"].isNull())
			nodesObject.nodeGroupName = valueNodesNode["NodeGroupName"].asString();
		nodes_.push_back(nodesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListNodesv3Result::getTotalCount()const
{
	return totalCount_;
}

std::string ListNodesv3Result::getNextToken()const
{
	return nextToken_;
}

int ListNodesv3Result::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListNodesv3Result::Node> ListNodesv3Result::getNodes()const
{
	return nodes_;
}

