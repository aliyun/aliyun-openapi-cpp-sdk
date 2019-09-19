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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto traceInfoDetailNode = value["TraceInfoDetail"];
	auto allEdgeListNode = traceInfoDetailNode["EdgeList"]["Edge"];
	for (auto traceInfoDetailNodeEdgeListEdge : allEdgeListNode)
	{
		TraceInfoDetail::Edge edgeObject;
		if(!traceInfoDetailNodeEdgeListEdge["EndId"].isNull())
			edgeObject.endId = traceInfoDetailNodeEdgeListEdge["EndId"].asString();
		if(!traceInfoDetailNodeEdgeListEdge["StartId"].isNull())
			edgeObject.startId = traceInfoDetailNodeEdgeListEdge["StartId"].asString();
		if(!traceInfoDetailNodeEdgeListEdge["Count"].isNull())
			edgeObject.count = std::stoi(traceInfoDetailNodeEdgeListEdge["Count"].asString());
		if(!traceInfoDetailNodeEdgeListEdge["Time"].isNull())
			edgeObject.time = traceInfoDetailNodeEdgeListEdge["Time"].asString();
		if(!traceInfoDetailNodeEdgeListEdge["Type"].isNull())
			edgeObject.type = traceInfoDetailNodeEdgeListEdge["Type"].asString();
		traceInfoDetail_.edgeList.push_back(edgeObject);
	}
	auto allVertexListNode = traceInfoDetailNode["VertexList"]["Vertex"];
	for (auto traceInfoDetailNodeVertexListVertex : allVertexListNode)
	{
		TraceInfoDetail::Vertex vertexObject;
		if(!traceInfoDetailNodeVertexListVertex["Name"].isNull())
			vertexObject.name = traceInfoDetailNodeVertexListVertex["Name"].asString();
		if(!traceInfoDetailNodeVertexListVertex["Count"].isNull())
			vertexObject.count = std::stoi(traceInfoDetailNodeVertexListVertex["Count"].asString());
		if(!traceInfoDetailNodeVertexListVertex["Id"].isNull())
			vertexObject.id = traceInfoDetailNodeVertexListVertex["Id"].asString();
		if(!traceInfoDetailNodeVertexListVertex["Time"].isNull())
			vertexObject.time = traceInfoDetailNodeVertexListVertex["Time"].asString();
		if(!traceInfoDetailNodeVertexListVertex["Type"].isNull())
			vertexObject.type = traceInfoDetailNodeVertexListVertex["Type"].asString();
		auto allNeighborListNode = allVertexListNode["NeighborList"]["Neighbor"];
		for (auto allVertexListNodeNeighborListNeighbor : allNeighborListNode)
		{
			TraceInfoDetail::Vertex::Neighbor neighborListObject;
			if(!allVertexListNodeNeighborListNeighbor["HasMore"].isNull())
				neighborListObject.hasMore = allVertexListNodeNeighborListNeighbor["HasMore"].asString() == "true";
			if(!allVertexListNodeNeighborListNeighbor["Count"].isNull())
				neighborListObject.count = std::stoi(allVertexListNodeNeighborListNeighbor["Count"].asString());
			if(!allVertexListNodeNeighborListNeighbor["Type"].isNull())
				neighborListObject.type = allVertexListNodeNeighborListNeighbor["Type"].asString();
			vertexObject.neighborList.push_back(neighborListObject);
		}
		traceInfoDetail_.vertexList.push_back(vertexObject);
	}
	auto allEntityTypeListNode = traceInfoDetailNode["EntityTypeList"]["EntityType"];
	for (auto traceInfoDetailNodeEntityTypeListEntityType : allEntityTypeListNode)
	{
		TraceInfoDetail::EntityType entityTypeObject;
		if(!traceInfoDetailNodeEntityTypeListEntityType["DisplayTemplate"].isNull())
			entityTypeObject.displayTemplate = traceInfoDetailNodeEntityTypeListEntityType["DisplayTemplate"].asString();
		if(!traceInfoDetailNodeEntityTypeListEntityType["GmtModified"].isNull())
			entityTypeObject.gmtModified = std::stol(traceInfoDetailNodeEntityTypeListEntityType["GmtModified"].asString());
		if(!traceInfoDetailNodeEntityTypeListEntityType["DisplayIcon"].isNull())
			entityTypeObject.displayIcon = traceInfoDetailNodeEntityTypeListEntityType["DisplayIcon"].asString();
		if(!traceInfoDetailNodeEntityTypeListEntityType["Offset"].isNull())
			entityTypeObject.offset = std::stoi(traceInfoDetailNodeEntityTypeListEntityType["Offset"].asString());
		if(!traceInfoDetailNodeEntityTypeListEntityType["DbId"].isNull())
			entityTypeObject.dbId = std::stoi(traceInfoDetailNodeEntityTypeListEntityType["DbId"].asString());
		if(!traceInfoDetailNodeEntityTypeListEntityType["Name"].isNull())
			entityTypeObject.name = traceInfoDetailNodeEntityTypeListEntityType["Name"].asString();
		if(!traceInfoDetailNodeEntityTypeListEntityType["Namespace"].isNull())
			entityTypeObject._namespace = traceInfoDetailNodeEntityTypeListEntityType["Namespace"].asString();
		if(!traceInfoDetailNodeEntityTypeListEntityType["Limit"].isNull())
			entityTypeObject.limit = std::stoi(traceInfoDetailNodeEntityTypeListEntityType["Limit"].asString());
		if(!traceInfoDetailNodeEntityTypeListEntityType["Id"].isNull())
			entityTypeObject.id = traceInfoDetailNodeEntityTypeListEntityType["Id"].asString();
		if(!traceInfoDetailNodeEntityTypeListEntityType["DisplayColor"].isNull())
			entityTypeObject.displayColor = traceInfoDetailNodeEntityTypeListEntityType["DisplayColor"].asString();
		if(!traceInfoDetailNodeEntityTypeListEntityType["GmtCreate"].isNull())
			entityTypeObject.gmtCreate = std::stol(traceInfoDetailNodeEntityTypeListEntityType["GmtCreate"].asString());
		traceInfoDetail_.entityTypeList.push_back(entityTypeObject);
	}
	auto allRelationTypeListNode = traceInfoDetailNode["RelationTypeList"]["RelationType"];
	for (auto traceInfoDetailNodeRelationTypeListRelationType : allRelationTypeListNode)
	{
		TraceInfoDetail::RelationType relationTypeObject;
		if(!traceInfoDetailNodeRelationTypeListRelationType["RelationTypeId"].isNull())
			relationTypeObject.relationTypeId = traceInfoDetailNodeRelationTypeListRelationType["RelationTypeId"].asString();
		if(!traceInfoDetailNodeRelationTypeListRelationType["Name"].isNull())
			relationTypeObject.name = traceInfoDetailNodeRelationTypeListRelationType["Name"].asString();
		if(!traceInfoDetailNodeRelationTypeListRelationType["Directed"].isNull())
			relationTypeObject.directed = std::stoi(traceInfoDetailNodeRelationTypeListRelationType["Directed"].asString());
		if(!traceInfoDetailNodeRelationTypeListRelationType["DisplayColor"].isNull())
			relationTypeObject.displayColor = traceInfoDetailNodeRelationTypeListRelationType["DisplayColor"].asString();
		if(!traceInfoDetailNodeRelationTypeListRelationType["ShowType"].isNull())
			relationTypeObject.showType = traceInfoDetailNodeRelationTypeListRelationType["ShowType"].asString();
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

