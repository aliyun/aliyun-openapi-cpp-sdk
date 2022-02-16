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

#include <alibabacloud/emr/model/ListComponentInstancesRequest.h>

using AlibabaCloud::Emr::Model::ListComponentInstancesRequest;

ListComponentInstancesRequest::ListComponentInstancesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListComponentInstances")
{
	setMethod(HttpRequest::Method::Post);
}

ListComponentInstancesRequest::~ListComponentInstancesRequest()
{}

std::string ListComponentInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void ListComponentInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListComponentInstancesRequest::getNodeNames()const
{
	return nodeNames_;
}

void ListComponentInstancesRequest::setNodeNames(const Array& nodeNames)
{
	nodeNames_ = nodeNames;
	setParameter("NodeNames", std::to_string(nodeNames));
}

Array ListComponentInstancesRequest::getComponentNames()const
{
	return componentNames_;
}

void ListComponentInstancesRequest::setComponentNames(const Array& componentNames)
{
	componentNames_ = componentNames;
	setParameter("ComponentNames", std::to_string(componentNames));
}

std::string ListComponentInstancesRequest::getNextToken()const
{
	return nextToken_;
}

void ListComponentInstancesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListComponentInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ListComponentInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListComponentInstancesRequest::getClusterId()const
{
	return clusterId_;
}

void ListComponentInstancesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Array ListComponentInstancesRequest::getApplicationNames()const
{
	return applicationNames_;
}

void ListComponentInstancesRequest::setApplicationNames(const Array& applicationNames)
{
	applicationNames_ = applicationNames;
	setParameter("ApplicationNames", std::to_string(applicationNames));
}

Array ListComponentInstancesRequest::getComponentStatuses()const
{
	return componentStatuses_;
}

void ListComponentInstancesRequest::setComponentStatuses(const Array& componentStatuses)
{
	componentStatuses_ = componentStatuses;
	setParameter("ComponentStatuses", std::to_string(componentStatuses));
}

int ListComponentInstancesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListComponentInstancesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListComponentInstancesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListComponentInstancesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array ListComponentInstancesRequest::getNodeIds()const
{
	return nodeIds_;
}

void ListComponentInstancesRequest::setNodeIds(const Array& nodeIds)
{
	nodeIds_ = nodeIds;
	setParameter("NodeIds", std::to_string(nodeIds));
}

