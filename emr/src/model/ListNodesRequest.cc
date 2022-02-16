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

#include <alibabacloud/emr/model/ListNodesRequest.h>

using AlibabaCloud::Emr::Model::ListNodesRequest;

ListNodesRequest::ListNodesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListNodes")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodesRequest::~ListNodesRequest()
{}

std::string ListNodesRequest::getClientToken()const
{
	return clientToken_;
}

void ListNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListNodesRequest::getNodeNames()const
{
	return nodeNames_;
}

void ListNodesRequest::setNodeNames(const Array& nodeNames)
{
	nodeNames_ = nodeNames;
	setParameter("NodeNames", std::to_string(nodeNames));
}

std::string ListNodesRequest::getPublicIp()const
{
	return publicIp_;
}

void ListNodesRequest::setPublicIp(const std::string& publicIp)
{
	publicIp_ = publicIp;
	setParameter("PublicIp", publicIp);
}

std::string ListNodesRequest::getNextToken()const
{
	return nextToken_;
}

void ListNodesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListNodesRequest::getRegionId()const
{
	return regionId_;
}

void ListNodesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListNodesRequest::getPrivateIp()const
{
	return privateIp_;
}

void ListNodesRequest::setPrivateIp(const std::string& privateIp)
{
	privateIp_ = privateIp;
	setParameter("PrivateIp", privateIp);
}

Array ListNodesRequest::getNodeStatuses()const
{
	return nodeStatuses_;
}

void ListNodesRequest::setNodeStatuses(const Array& nodeStatuses)
{
	nodeStatuses_ = nodeStatuses;
	setParameter("NodeStatuses", std::to_string(nodeStatuses));
}

std::string ListNodesRequest::getClusterId()const
{
	return clusterId_;
}

void ListNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListNodesRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListNodesRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

int ListNodesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListNodesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListNodesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListNodesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array ListNodesRequest::getNodeIds()const
{
	return nodeIds_;
}

void ListNodesRequest::setNodeIds(const Array& nodeIds)
{
	nodeIds_ = nodeIds;
	setParameter("NodeIds", std::to_string(nodeIds));
}

