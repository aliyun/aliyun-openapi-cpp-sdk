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

#include <alibabacloud/aegis/model/DescribeTraceInfoNodeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeTraceInfoNodeListResult::DescribeTraceInfoNodeListResult() :
	ServiceResult()
{}

DescribeTraceInfoNodeListResult::DescribeTraceInfoNodeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTraceInfoNodeListResult::~DescribeTraceInfoNodeListResult()
{}

void DescribeTraceInfoNodeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto nodeListInfoNode = value["NodeListInfo"];
	auto allEdgeListNode = nodeListInfoNode["EdgeList"]["Edge"];
	for (auto nodeListInfoNodeEdgeListEdge : allEdgeListNode)
	{
		NodeListInfo::Edge edgeObject;
		if(!nodeListInfoNodeEdgeListEdge["EndId"].isNull())
			edgeObject.endId = nodeListInfoNodeEdgeListEdge["EndId"].asString();
		if(!nodeListInfoNodeEdgeListEdge["StartId"].isNull())
			edgeObject.startId = nodeListInfoNodeEdgeListEdge["StartId"].asString();
		if(!nodeListInfoNodeEdgeListEdge["Time"].isNull())
			edgeObject.time = nodeListInfoNodeEdgeListEdge["Time"].asString();
		nodeListInfo_.edgeList.push_back(edgeObject);
	}
	auto allVertexListNode = nodeListInfoNode["VertexList"]["Vertex"];
	for (auto nodeListInfoNodeVertexListVertex : allVertexListNode)
	{
		NodeListInfo::Vertex vertexObject;
		if(!nodeListInfoNodeVertexListVertex["Name"].isNull())
			vertexObject.name = nodeListInfoNodeVertexListVertex["Name"].asString();
		if(!nodeListInfoNodeVertexListVertex["Id"].isNull())
			vertexObject.id = nodeListInfoNodeVertexListVertex["Id"].asString();
		if(!nodeListInfoNodeVertexListVertex["Time"].isNull())
			vertexObject.time = nodeListInfoNodeVertexListVertex["Time"].asString();
		auto allNeighborList = value["NeighborList"]["StringItem"];
		for (auto value : allNeighborList)
			vertexObject.neighborList.push_back(value.asString());
		nodeListInfo_.vertexList.push_back(vertexObject);
	}
		auto allEntityTypeList = nodeListInfoNode["EntityTypeList"]["StringItem"];
		for (auto value : allEntityTypeList)
			nodeListInfo_.entityTypeList.push_back(value.asString());

}

DescribeTraceInfoNodeListResult::NodeListInfo DescribeTraceInfoNodeListResult::getNodeListInfo()const
{
	return nodeListInfo_;
}

