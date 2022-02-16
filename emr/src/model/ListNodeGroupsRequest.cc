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

#include <alibabacloud/emr/model/ListNodeGroupsRequest.h>

using AlibabaCloud::Emr::Model::ListNodeGroupsRequest;

ListNodeGroupsRequest::ListNodeGroupsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListNodeGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeGroupsRequest::~ListNodeGroupsRequest()
{}

std::string ListNodeGroupsRequest::getClientToken()const
{
	return clientToken_;
}

void ListNodeGroupsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListNodeGroupsRequest::getNodeGroupIds()const
{
	return nodeGroupIds_;
}

void ListNodeGroupsRequest::setNodeGroupIds(const Array& nodeGroupIds)
{
	nodeGroupIds_ = nodeGroupIds;
	setParameter("NodeGroupIds", std::to_string(nodeGroupIds));
}

Array ListNodeGroupsRequest::getNodeGroupTypes()const
{
	return nodeGroupTypes_;
}

void ListNodeGroupsRequest::setNodeGroupTypes(const Array& nodeGroupTypes)
{
	nodeGroupTypes_ = nodeGroupTypes;
	setParameter("NodeGroupTypes", std::to_string(nodeGroupTypes));
}

std::string ListNodeGroupsRequest::getNextToken()const
{
	return nextToken_;
}

void ListNodeGroupsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListNodeGroupsRequest::getRegionId()const
{
	return regionId_;
}

void ListNodeGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array ListNodeGroupsRequest::getNodeGroupStatuses()const
{
	return nodeGroupStatuses_;
}

void ListNodeGroupsRequest::setNodeGroupStatuses(const Array& nodeGroupStatuses)
{
	nodeGroupStatuses_ = nodeGroupStatuses;
	setParameter("NodeGroupStatuses", std::to_string(nodeGroupStatuses));
}

Array ListNodeGroupsRequest::getNodeGroupNames()const
{
	return nodeGroupNames_;
}

void ListNodeGroupsRequest::setNodeGroupNames(const Array& nodeGroupNames)
{
	nodeGroupNames_ = nodeGroupNames;
	setParameter("NodeGroupNames", std::to_string(nodeGroupNames));
}

std::string ListNodeGroupsRequest::getClusterId()const
{
	return clusterId_;
}

void ListNodeGroupsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListNodeGroupsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListNodeGroupsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

Array ListNodeGroupsRequest::getStatuses()const
{
	return statuses_;
}

void ListNodeGroupsRequest::setStatuses(const Array& statuses)
{
	statuses_ = statuses;
	setParameter("Statuses", std::to_string(statuses));
}

std::string ListNodeGroupsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListNodeGroupsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

