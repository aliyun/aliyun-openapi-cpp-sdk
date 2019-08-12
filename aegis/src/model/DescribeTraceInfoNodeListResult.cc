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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto nodeListInfoNode = value["NodeListInfo"];
	auto allEdgeList = value["EdgeList"]["Edge"];
	for (auto value : allEdgeList)
	{
		NodeListInfo::Edge edgeObject;
		if(!value["EndId"].isNull())
			edgeObject.endId = value["EndId"].asString();
		if(!value["StartId"].isNull())
			edgeObject.startId = value["StartId"].asString();
		if(!value["Time"].isNull())
			edgeObject.time = value["Time"].asString();
		nodeListInfo_.edgeList.push_back(edgeObject);
	}
	auto allVertexList = value["VertexList"]["Vertex"];
	for (auto value : allVertexList)
	{
		NodeListInfo::Vertex vertexObject;
		if(!value["Name"].isNull())
			vertexObject.name = value["Name"].asString();
		if(!value["Id"].isNull())
			vertexObject.id = value["Id"].asString();
		if(!value["Time"].isNull())
			vertexObject.time = value["Time"].asString();
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

