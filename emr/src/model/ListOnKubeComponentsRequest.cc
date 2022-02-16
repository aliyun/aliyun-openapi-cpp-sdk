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

#include <alibabacloud/emr/model/ListOnKubeComponentsRequest.h>

using AlibabaCloud::Emr::Model::ListOnKubeComponentsRequest;

ListOnKubeComponentsRequest::ListOnKubeComponentsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListOnKubeComponents")
{
	setMethod(HttpRequest::Method::Post);
}

ListOnKubeComponentsRequest::~ListOnKubeComponentsRequest()
{}

std::string ListOnKubeComponentsRequest::getClientToken()const
{
	return clientToken_;
}

void ListOnKubeComponentsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListOnKubeComponentsRequest::getNextToken()const
{
	return nextToken_;
}

void ListOnKubeComponentsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListOnKubeComponentsRequest::getRegionId()const
{
	return regionId_;
}

void ListOnKubeComponentsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListOnKubeComponentsRequest::getClusterId()const
{
	return clusterId_;
}

void ListOnKubeComponentsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListOnKubeComponentsRequest::getApplicationName()const
{
	return applicationName_;
}

void ListOnKubeComponentsRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

int ListOnKubeComponentsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListOnKubeComponentsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListOnKubeComponentsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListOnKubeComponentsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

