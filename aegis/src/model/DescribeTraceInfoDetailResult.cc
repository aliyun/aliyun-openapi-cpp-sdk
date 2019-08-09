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

#include <alibabacloud/aegis/model/DescribeTraceInfoDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeTraceInfoDetailResult::DescribeTraceInfoDetailResult() :
	ServiceResult()
{}

DescribeTraceInfoDetailResult::DescribeTraceInfoDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTraceInfoDetailResult::~DescribeTraceInfoDetailResult()
{}

void DescribeTraceInfoDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto traceInfoDetailNode = value["TraceInfoDetail"];
	auto allEdgeList = value["EdgeList"]["Edge"];
	for (auto value : allEdgeList)
	{
		TraceInfoDetail::Edge edgeObject;
		if(!value["EndId"].isNull())
			edgeObject.endId = value["EndId"].asString();
		if(!value["StartId"].isNull())
			edgeObject.startId = value["StartId"].asString();
		if(!value["Count"].isNull())
			edgeObject.count = std::stoi(value["Count"].asString());
		if(!value["Time"].isNull())
			edgeObject.time = value["Time"].asString();
		if(!value["Type"].isNull())
			edgeObject.type = value["Type"].asString();
		traceInfoDetail_.edgeList.push_back(edgeObject);
	}
	auto allVertexList = value["VertexList"]["Vertex"];
	for (auto value : allVertexList)
	{
		TraceInfoDetail::Vertex vertexObject;
		if(!value["Name"].isNull())
			vertexObject.name = value["Name"].asString();
		if(!value["Count"].isNull())
			vertexObject.count = std::stoi(value["Count"].asString());
		if(!value["Id"].isNull())
			vertexObject.id = value["Id"].asString();
		if(!value["Time"].isNull())
			vertexObject.time = value["Time"].asString();
		if(!value["Type"].isNull())
			vertexObject.type = value["Type"].asString();
		auto allNeighborList = value["NeighborList"]["Neighbor"];
		for (auto value : allNeighborList)
		{
			TraceInfoDetail::Vertex::Neighbor neighborListObject;
			if(!value["HasMore"].isNull())
				neighborListObject.hasMore = value["HasMore"].asString() == "true";
			if(!value["Count"].isNull())
				neighborListObject.count = std::stoi(value["Count"].asString());
			if(!value["Type"].isNull())
				neighborListObject.type = value["Type"].asString();
			vertexObject.neighborList.push_back(neighborListObject);
		}
		traceInfoDetail_.vertexList.push_back(vertexObject);
	}
	auto allEntityTypeList = value["EntityTypeList"]["EntityType"];
	for (auto value : allEntityTypeList)
	{
		TraceInfoDetail::EntityType entityTypeObject;
		if(!value["DisplayTemplate"].isNull())
			entityTypeObject.displayTemplate = value["DisplayTemplate"].asString();
		if(!value["GmtModified"].isNull())
			entityTypeObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["DisplayIcon"].isNull())
			entityTypeObject.displayIcon = value["DisplayIcon"].asString();
		if(!value["Offset"].isNull())
			entityTypeObject.offset = std::stoi(value["Offset"].asString());
		if(!value["DbId"].isNull())
			entityTypeObject.dbId = std::stoi(value["DbId"].asString());
		if(!value["Name"].isNull())
			entityTypeObject.name = value["Name"].asString();
		if(!value["Namespace"].isNull())
			entityTypeObject._namespace = value["Namespace"].asString();
		if(!value["Limit"].isNull())
			entityTypeObject.limit = std::stoi(value["Limit"].asString());
		if(!value["Id"].isNull())
			entityTypeObject.id = value["Id"].asString();
		if(!value["DisplayColor"].isNull())
			entityTypeObject.displayColor = value["DisplayColor"].asString();
		if(!value["GmtCreate"].isNull())
			entityTypeObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		traceInfoDetail_.entityTypeList.push_back(entityTypeObject);
	}
	auto allRelationTypeList = value["RelationTypeList"]["RelationType"];
	for (auto value : allRelationTypeList)
	{
		TraceInfoDetail::RelationType relationTypeObject;
		if(!value["RelationTypeId"].isNull())
			relationTypeObject.relationTypeId = value["RelationTypeId"].asString();
		if(!value["Name"].isNull())
			relationTypeObject.name = value["Name"].asString();
		if(!value["Directed"].isNull())
			relationTypeObject.directed = std::stoi(value["Directed"].asString());
		if(!value["DisplayColor"].isNull())
			relationTypeObject.displayColor = value["DisplayColor"].asString();
		if(!value["ShowType"].isNull())
			relationTypeObject.showType = value["ShowType"].asString();
		traceInfoDetail_.relationTypeList.push_back(relationTypeObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeTraceInfoDetailResult::TraceInfoDetail DescribeTraceInfoDetailResult::getTraceInfoDetail()const
{
	return traceInfoDetail_;
}

bool DescribeTraceInfoDetailResult::getSuccess()const
{
	return success_;
}

