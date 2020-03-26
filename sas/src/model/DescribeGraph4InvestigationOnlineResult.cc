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

#include <alibabacloud/sas/model/DescribeGraph4InvestigationOnlineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeGraph4InvestigationOnlineResult::DescribeGraph4InvestigationOnlineResult() :
	ServiceResult()
{}

DescribeGraph4InvestigationOnlineResult::DescribeGraph4InvestigationOnlineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGraph4InvestigationOnlineResult::~DescribeGraph4InvestigationOnlineResult()
{}

void DescribeGraph4InvestigationOnlineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allVertexListNode = dataNode["VertexList"]["Vertex"];
	for (auto dataNodeVertexListVertex : allVertexListNode)
	{
		Data::Vertex vertexObject;
		if(!dataNodeVertexListVertex["Id"].isNull())
			vertexObject.id = dataNodeVertexListVertex["Id"].asString();
		if(!dataNodeVertexListVertex["Name"].isNull())
			vertexObject.name = dataNodeVertexListVertex["Name"].asString();
		if(!dataNodeVertexListVertex["Type"].isNull())
			vertexObject.type = dataNodeVertexListVertex["Type"].asString();
		if(!dataNodeVertexListVertex["Time"].isNull())
			vertexObject.time = dataNodeVertexListVertex["Time"].asString();
		if(!dataNodeVertexListVertex["Uuid"].isNull())
			vertexObject.uuid = dataNodeVertexListVertex["Uuid"].asString();
		if(!dataNodeVertexListVertex["Aliuid"].isNull())
			vertexObject.aliuid = dataNodeVertexListVertex["Aliuid"].asString();
		if(!dataNodeVertexListVertex["Properties"].isNull())
			vertexObject.properties = dataNodeVertexListVertex["Properties"].asString();
		if(!dataNodeVertexListVertex["PositionId"].isNull())
			vertexObject.positionId = dataNodeVertexListVertex["PositionId"].asString();
		if(!dataNodeVertexListVertex["Position"].isNull())
			vertexObject.position = dataNodeVertexListVertex["Position"].asString();
		auto allNeighborListNode = allVertexListNode["NeighborList"]["Neighbor"];
		for (auto allVertexListNodeNeighborListNeighbor : allNeighborListNode)
		{
			Data::Vertex::Neighbor neighborListObject;
			if(!allVertexListNodeNeighborListNeighbor["Type"].isNull())
				neighborListObject.type = allVertexListNodeNeighborListNeighbor["Type"].asString();
			if(!allVertexListNodeNeighborListNeighbor["Count"].isNull())
				neighborListObject.count = std::stoi(allVertexListNodeNeighborListNeighbor["Count"].asString());
			if(!allVertexListNodeNeighborListNeighbor["HasMore"].isNull())
				neighborListObject.hasMore = allVertexListNodeNeighborListNeighbor["HasMore"].asString() == "true";
			vertexObject.neighborList.push_back(neighborListObject);
		}
		data_.vertexList.push_back(vertexObject);
	}
	auto allEdgeListNode = dataNode["EdgeList"]["Edge"];
	for (auto dataNodeEdgeListEdge : allEdgeListNode)
	{
		Data::Edge edgeObject;
		if(!dataNodeEdgeListEdge["Id"].isNull())
			edgeObject.id = std::stoi(dataNodeEdgeListEdge["Id"].asString());
		if(!dataNodeEdgeListEdge["StartId"].isNull())
			edgeObject.startId = dataNodeEdgeListEdge["StartId"].asString();
		if(!dataNodeEdgeListEdge["EndId"].isNull())
			edgeObject.endId = dataNodeEdgeListEdge["EndId"].asString();
		if(!dataNodeEdgeListEdge["StartType"].isNull())
			edgeObject.startType = dataNodeEdgeListEdge["StartType"].asString();
		if(!dataNodeEdgeListEdge["EndType"].isNull())
			edgeObject.endType = dataNodeEdgeListEdge["EndType"].asString();
		if(!dataNodeEdgeListEdge["Name"].isNull())
			edgeObject.name = dataNodeEdgeListEdge["Name"].asString();
		if(!dataNodeEdgeListEdge["Type"].isNull())
			edgeObject.type = dataNodeEdgeListEdge["Type"].asString();
		if(!dataNodeEdgeListEdge["Time"].isNull())
			edgeObject.time = dataNodeEdgeListEdge["Time"].asString();
		data_.edgeList.push_back(edgeObject);
	}
	auto allEntityTypeListNode = dataNode["EntityTypeList"]["EntityType"];
	for (auto dataNodeEntityTypeListEntityType : allEntityTypeListNode)
	{
		Data::EntityType entityTypeObject;
		if(!dataNodeEntityTypeListEntityType["Id"].isNull())
			entityTypeObject.id = dataNodeEntityTypeListEntityType["Id"].asString();
		if(!dataNodeEntityTypeListEntityType["Name"].isNull())
			entityTypeObject.name = dataNodeEntityTypeListEntityType["Name"].asString();
		if(!dataNodeEntityTypeListEntityType["DisplayColor"].isNull())
			entityTypeObject.displayColor = dataNodeEntityTypeListEntityType["DisplayColor"].asString();
		if(!dataNodeEntityTypeListEntityType["DisplayIcon"].isNull())
			entityTypeObject.displayIcon = dataNodeEntityTypeListEntityType["DisplayIcon"].asString();
		if(!dataNodeEntityTypeListEntityType["DisplayOrder"].isNull())
			entityTypeObject.displayOrder = dataNodeEntityTypeListEntityType["DisplayOrder"].asString();
		data_.entityTypeList.push_back(entityTypeObject);
	}
	auto allRelationTypeListNode = dataNode["RelationTypeList"]["RelationType"];
	for (auto dataNodeRelationTypeListRelationType : allRelationTypeListNode)
	{
		Data::RelationType relationTypeObject;
		if(!dataNodeRelationTypeListRelationType["Id"].isNull())
			relationTypeObject.id = dataNodeRelationTypeListRelationType["Id"].asString();
		if(!dataNodeRelationTypeListRelationType["ShowType"].isNull())
			relationTypeObject.showType = dataNodeRelationTypeListRelationType["ShowType"].asString();
		if(!dataNodeRelationTypeListRelationType["Directed"].isNull())
			relationTypeObject.directed = std::stoi(dataNodeRelationTypeListRelationType["Directed"].asString());
		if(!dataNodeRelationTypeListRelationType["Name"].isNull())
			relationTypeObject.name = dataNodeRelationTypeListRelationType["Name"].asString();
		data_.relationTypeList.push_back(relationTypeObject);
	}

}

DescribeGraph4InvestigationOnlineResult::Data DescribeGraph4InvestigationOnlineResult::getData()const
{
	return data_;
}

