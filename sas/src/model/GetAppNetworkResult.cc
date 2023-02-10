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

#include <alibabacloud/sas/model/GetAppNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetAppNetworkResult::GetAppNetworkResult() :
	ServiceResult()
{}

GetAppNetworkResult::GetAppNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppNetworkResult::~GetAppNetworkResult()
{}

void GetAppNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appNetworkNode = value["AppNetwork"];
	auto allNodeNode = appNetworkNode["Node"]["AppNode"];
	for (auto appNetworkNodeNodeAppNode : allNodeNode)
	{
		AppNetwork::AppNode appNodeObject;
		if(!appNetworkNodeNodeAppNode["RiskLevel"].isNull())
			appNodeObject.riskLevel = appNetworkNodeNodeAppNode["RiskLevel"].asString();
		if(!appNetworkNodeNodeAppNode["Id"].isNull())
			appNodeObject.id = appNetworkNodeNodeAppNode["Id"].asString();
		if(!appNetworkNodeNodeAppNode["NamespaceId"].isNull())
			appNodeObject.namespaceId = appNetworkNodeNodeAppNode["NamespaceId"].asString();
		if(!appNetworkNodeNodeAppNode["Type"].isNull())
			appNodeObject.type = appNetworkNodeNodeAppNode["Type"].asString();
		if(!appNetworkNodeNodeAppNode["Name"].isNull())
			appNodeObject.name = appNetworkNodeNodeAppNode["Name"].asString();
		auto allContainerIds = value["ContainerIds"]["ContainerId"];
		for (auto value : allContainerIds)
			appNodeObject.containerIds.push_back(value.asString());
		appNetwork_.node.push_back(appNodeObject);
	}
	auto allEdgeNode = appNetworkNode["Edge"]["BasicEdge"];
	for (auto appNetworkNodeEdgeBasicEdge : allEdgeNode)
	{
		AppNetwork::BasicEdge basicEdgeObject;
		if(!appNetworkNodeEdgeBasicEdge["Id"].isNull())
			basicEdgeObject.id = appNetworkNodeEdgeBasicEdge["Id"].asString();
		if(!appNetworkNodeEdgeBasicEdge["SrcNodeId"].isNull())
			basicEdgeObject.srcNodeId = appNetworkNodeEdgeBasicEdge["SrcNodeId"].asString();
		if(!appNetworkNodeEdgeBasicEdge["SrcNodeType"].isNull())
			basicEdgeObject.srcNodeType = appNetworkNodeEdgeBasicEdge["SrcNodeType"].asString();
		if(!appNetworkNodeEdgeBasicEdge["DstNodeId"].isNull())
			basicEdgeObject.dstNodeId = appNetworkNodeEdgeBasicEdge["DstNodeId"].asString();
		if(!appNetworkNodeEdgeBasicEdge["DstNodeType"].isNull())
			basicEdgeObject.dstNodeType = appNetworkNodeEdgeBasicEdge["DstNodeType"].asString();
		if(!appNetworkNodeEdgeBasicEdge["Port"].isNull())
			basicEdgeObject.port = appNetworkNodeEdgeBasicEdge["Port"].asString();
		appNetwork_.edge.push_back(basicEdgeObject);
	}
	auto all_NamespaceNode = appNetworkNode["Namespace"]["NamespaceItem"];
	for (auto appNetworkNodeNamespaceNamespaceItem : all_NamespaceNode)
	{
		AppNetwork::NamespaceItem namespaceItemObject;
		if(!appNetworkNodeNamespaceNamespaceItem["Id"].isNull())
			namespaceItemObject.id = appNetworkNodeNamespaceNamespaceItem["Id"].asString();
		if(!appNetworkNodeNamespaceNamespaceItem["Name"].isNull())
			namespaceItemObject.name = appNetworkNodeNamespaceNamespaceItem["Name"].asString();
		appNetwork_._namespace.push_back(namespaceItemObject);
	}

}

GetAppNetworkResult::AppNetwork GetAppNetworkResult::getAppNetwork()const
{
	return appNetwork_;
}

