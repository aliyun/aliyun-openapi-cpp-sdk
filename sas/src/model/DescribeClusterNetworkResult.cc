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

#include <alibabacloud/sas/model/DescribeClusterNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeClusterNetworkResult::DescribeClusterNetworkResult() :
	ServiceResult()
{}

DescribeClusterNetworkResult::DescribeClusterNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterNetworkResult::~DescribeClusterNetworkResult()
{}

void DescribeClusterNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterNetworkNode = value["ClusterNetwork"];
	auto allNodeNode = clusterNetworkNode["Node"]["ClusterNode"];
	for (auto clusterNetworkNodeNodeClusterNode : allNodeNode)
	{
		ClusterNetwork::ClusterNode clusterNodeObject;
		if(!clusterNetworkNodeNodeClusterNode["Type"].isNull())
			clusterNodeObject.type = clusterNetworkNodeNodeClusterNode["Type"].asString();
		if(!clusterNetworkNodeNodeClusterNode["RiskLevel"].isNull())
			clusterNodeObject.riskLevel = clusterNetworkNodeNodeClusterNode["RiskLevel"].asString();
		if(!clusterNetworkNodeNodeClusterNode["NetTopoSwitch"].isNull())
			clusterNodeObject.netTopoSwitch = clusterNetworkNodeNodeClusterNode["NetTopoSwitch"].asString();
		if(!clusterNetworkNodeNodeClusterNode["InterceptionType"].isNull())
			clusterNodeObject.interceptionType = std::stoi(clusterNetworkNodeNodeClusterNode["InterceptionType"].asString());
		if(!clusterNetworkNodeNodeClusterNode["CnnfSwitch"].isNull())
			clusterNodeObject.cnnfSwitch = std::stoi(clusterNetworkNodeNodeClusterNode["CnnfSwitch"].asString());
		if(!clusterNetworkNodeNodeClusterNode["Name"].isNull())
			clusterNodeObject.name = clusterNetworkNodeNodeClusterNode["Name"].asString();
		if(!clusterNetworkNodeNodeClusterNode["Id"].isNull())
			clusterNodeObject.id = clusterNetworkNodeNodeClusterNode["Id"].asString();
		clusterNetwork_.node.push_back(clusterNodeObject);
	}
	auto allEdgeNode = clusterNetworkNode["Edge"]["BasicEdge"];
	for (auto clusterNetworkNodeEdgeBasicEdge : allEdgeNode)
	{
		ClusterNetwork::BasicEdge basicEdgeObject;
		if(!clusterNetworkNodeEdgeBasicEdge["DstNodeId"].isNull())
			basicEdgeObject.dstNodeId = clusterNetworkNodeEdgeBasicEdge["DstNodeId"].asString();
		if(!clusterNetworkNodeEdgeBasicEdge["Port"].isNull())
			basicEdgeObject.port = clusterNetworkNodeEdgeBasicEdge["Port"].asString();
		if(!clusterNetworkNodeEdgeBasicEdge["SrcNodeId"].isNull())
			basicEdgeObject.srcNodeId = clusterNetworkNodeEdgeBasicEdge["SrcNodeId"].asString();
		if(!clusterNetworkNodeEdgeBasicEdge["SrcNodeType"].isNull())
			basicEdgeObject.srcNodeType = clusterNetworkNodeEdgeBasicEdge["SrcNodeType"].asString();
		if(!clusterNetworkNodeEdgeBasicEdge["DstNodeType"].isNull())
			basicEdgeObject.dstNodeType = clusterNetworkNodeEdgeBasicEdge["DstNodeType"].asString();
		if(!clusterNetworkNodeEdgeBasicEdge["Id"].isNull())
			basicEdgeObject.id = clusterNetworkNodeEdgeBasicEdge["Id"].asString();
		clusterNetwork_.edge.push_back(basicEdgeObject);
	}

}

DescribeClusterNetworkResult::ClusterNetwork DescribeClusterNetworkResult::getClusterNetwork()const
{
	return clusterNetwork_;
}

