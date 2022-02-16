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

#include <alibabacloud/emr/model/ListResourceHealthInspectionRequest.h>

using AlibabaCloud::Emr::Model::ListResourceHealthInspectionRequest;

ListResourceHealthInspectionRequest::ListResourceHealthInspectionRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListResourceHealthInspection")
{
	setMethod(HttpRequest::Method::Get);
}

ListResourceHealthInspectionRequest::~ListResourceHealthInspectionRequest()
{}

std::string ListResourceHealthInspectionRequest::getClientToken()const
{
	return clientToken_;
}

void ListResourceHealthInspectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListResourceHealthInspectionRequest::getNodeNames()const
{
	return nodeNames_;
}

void ListResourceHealthInspectionRequest::setNodeNames(const Array& nodeNames)
{
	nodeNames_ = nodeNames;
	setParameter("NodeNames", std::to_string(nodeNames));
}

std::string ListResourceHealthInspectionRequest::getComponentName()const
{
	return componentName_;
}

void ListResourceHealthInspectionRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setParameter("ComponentName", componentName);
}

std::string ListResourceHealthInspectionRequest::getNextToken()const
{
	return nextToken_;
}

void ListResourceHealthInspectionRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListResourceHealthInspectionRequest::getRegionId()const
{
	return regionId_;
}

void ListResourceHealthInspectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListResourceHealthInspectionRequest::getClusterId()const
{
	return clusterId_;
}

void ListResourceHealthInspectionRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListResourceHealthInspectionRequest::getResourceType()const
{
	return resourceType_;
}

void ListResourceHealthInspectionRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListResourceHealthInspectionRequest::getApplicationName()const
{
	return applicationName_;
}

void ListResourceHealthInspectionRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

Array ListResourceHealthInspectionRequest::getHealthStatuses()const
{
	return healthStatuses_;
}

void ListResourceHealthInspectionRequest::setHealthStatuses(const Array& healthStatuses)
{
	healthStatuses_ = healthStatuses;
	setParameter("HealthStatuses", std::to_string(healthStatuses));
}

int ListResourceHealthInspectionRequest::getMaxResults()const
{
	return maxResults_;
}

void ListResourceHealthInspectionRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListResourceHealthInspectionRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListResourceHealthInspectionRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

