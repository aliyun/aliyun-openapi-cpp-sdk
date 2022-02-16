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

#include <alibabacloud/emr/model/ListComponentsRequest.h>

using AlibabaCloud::Emr::Model::ListComponentsRequest;

ListComponentsRequest::ListComponentsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListComponents")
{
	setMethod(HttpRequest::Method::Post);
}

ListComponentsRequest::~ListComponentsRequest()
{}

std::string ListComponentsRequest::getClientToken()const
{
	return clientToken_;
}

void ListComponentsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array ListComponentsRequest::getComponentNames()const
{
	return componentNames_;
}

void ListComponentsRequest::setComponentNames(const Array& componentNames)
{
	componentNames_ = componentNames;
	setParameter("ComponentNames", std::to_string(componentNames));
}

std::string ListComponentsRequest::getNextToken()const
{
	return nextToken_;
}

void ListComponentsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListComponentsRequest::getRegionId()const
{
	return regionId_;
}

void ListComponentsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListComponentsRequest::getClusterId()const
{
	return clusterId_;
}

void ListComponentsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Array ListComponentsRequest::getApplicationNames()const
{
	return applicationNames_;
}

void ListComponentsRequest::setApplicationNames(const Array& applicationNames)
{
	applicationNames_ = applicationNames;
	setParameter("ApplicationNames", std::to_string(applicationNames));
}

Array ListComponentsRequest::getComponentStatuses()const
{
	return componentStatuses_;
}

void ListComponentsRequest::setComponentStatuses(const Array& componentStatuses)
{
	componentStatuses_ = componentStatuses;
	setParameter("ComponentStatuses", std::to_string(componentStatuses));
}

int ListComponentsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListComponentsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListComponentsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListComponentsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

