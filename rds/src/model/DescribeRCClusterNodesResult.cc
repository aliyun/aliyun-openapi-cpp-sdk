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

#include <alibabacloud/rds/model/DescribeRCClusterNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCClusterNodesResult::DescribeRCClusterNodesResult() :
	ServiceResult()
{}

DescribeRCClusterNodesResult::DescribeRCClusterNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCClusterNodesResult::~DescribeRCClusterNodesResult()
{}

void DescribeRCClusterNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["Node"];
	for (auto valueNodesNode : allNodesNode)
	{
		Node nodesObject;
		if(!valueNodesNode["CreationTime"].isNull())
			nodesObject.creationTime = valueNodesNode["CreationTime"].asString();
		if(!valueNodesNode["DockerVersion"].isNull())
			nodesObject.dockerVersion = valueNodesNode["DockerVersion"].asString();
		if(!valueNodesNode["ImageId"].isNull())
			nodesObject.imageId = valueNodesNode["ImageId"].asString();
		if(!valueNodesNode["InstanceId"].isNull())
			nodesObject.instanceId = valueNodesNode["InstanceId"].asString();
		if(!valueNodesNode["InstanceRole"].isNull())
			nodesObject.instanceRole = valueNodesNode["InstanceRole"].asString();
		if(!valueNodesNode["IsAliyunNode"].isNull())
			nodesObject.isAliyunNode = valueNodesNode["IsAliyunNode"].asString() == "true";
		if(!valueNodesNode["NodeName"].isNull())
			nodesObject.nodeName = valueNodesNode["NodeName"].asString();
		if(!valueNodesNode["NodeStatus"].isNull())
			nodesObject.nodeStatus = valueNodesNode["NodeStatus"].asString();
		if(!valueNodesNode["NodePoolId"].isNull())
			nodesObject.nodePoolId = valueNodesNode["NodePoolId"].asString();
		if(!valueNodesNode["RuntimeVersion"].isNull())
			nodesObject.runtimeVersion = valueNodesNode["RuntimeVersion"].asString();
		if(!valueNodesNode["State"].isNull())
			nodesObject.state = valueNodesNode["State"].asString();
		auto allIpAddresses = value["IpAddresses"]["IpAddress"];
		for (auto value : allIpAddresses)
			nodesObject.ipAddresses.push_back(value.asString());
		nodes_.push_back(nodesObject);
	}
	auto pageNode = value["Page"];
	if(!pageNode["PageNumber"].isNull())
		page_.pageNumber = std::stol(pageNode["PageNumber"].asString());
	if(!pageNode["PageSize"].isNull())
		page_.pageSize = std::stol(pageNode["PageSize"].asString());
	if(!pageNode["TotalCount"].isNull())
		page_.totalCount = std::stol(pageNode["TotalCount"].asString());

}

DescribeRCClusterNodesResult::Page DescribeRCClusterNodesResult::getPage()const
{
	return page_;
}

std::vector<DescribeRCClusterNodesResult::Node> DescribeRCClusterNodesResult::getNodes()const
{
	return nodes_;
}

