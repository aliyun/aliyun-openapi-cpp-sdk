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

#include <alibabacloud/emr/model/ListNodesv3Request.h>

using AlibabaCloud::Emr::Model::ListNodesv3Request;

ListNodesv3Request::ListNodesv3Request() :
	RpcServiceRequest("emr", "2021-03-20", "ListNodesv3")
{
	setMethod(HttpRequest::Method::Get);
}

ListNodesv3Request::~ListNodesv3Request()
{}

std::string ListNodesv3Request::getClientToken()const
{
	return clientToken_;
}

void ListNodesv3Request::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListNodesv3Request::getNodeNames()const
{
	return nodeNames_;
}

void ListNodesv3Request::setNodeNames(const Array& nodeNames)
{
	nodeNames_ = nodeNames;
	setParameter("NodeNames", std::to_string(nodeNames));
}

std::string ListNodesv3Request::getPublicIp()const
{
	return publicIp_;
}

void ListNodesv3Request::setPublicIp(const std::string& publicIp)
{
	publicIp_ = publicIp;
	setParameter("PublicIp", publicIp);
}

std::string ListNodesv3Request::getNextToken()const
{
	return nextToken_;
}

void ListNodesv3Request::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListNodesv3Request::getRegionId()const
{
	return regionId_;
}

void ListNodesv3Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListNodesv3Request::getPrivateIp()const
{
	return privateIp_;
}

void ListNodesv3Request::setPrivateIp(const std::string& privateIp)
{
	privateIp_ = privateIp;
	setParameter("PrivateIp", privateIp);
}

std::string ListNodesv3Request::getClusterId()const
{
	return clusterId_;
}

void ListNodesv3Request::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListNodesv3Request::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListNodesv3Request::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

int ListNodesv3Request::getMaxResults()const
{
	return maxResults_;
}

void ListNodesv3Request::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListNodesv3Request::getSystemDebug()const
{
	return systemDebug_;
}

void ListNodesv3Request::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array ListNodesv3Request::getNodeIds()const
{
	return nodeIds_;
}

void ListNodesv3Request::setNodeIds(const Array& nodeIds)
{
	nodeIds_ = nodeIds;
	setParameter("NodeIds", std::to_string(nodeIds));
}

