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

#include <alibabacloud/emr/model/ListOnAckComponentsRequest.h>

using AlibabaCloud::Emr::Model::ListOnAckComponentsRequest;

ListOnAckComponentsRequest::ListOnAckComponentsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListOnAckComponents")
{
	setMethod(HttpRequest::Method::Post);
}

ListOnAckComponentsRequest::~ListOnAckComponentsRequest()
{}

std::string ListOnAckComponentsRequest::getClientToken()const
{
	return clientToken_;
}

void ListOnAckComponentsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListOnAckComponentsRequest::getNextToken()const
{
	return nextToken_;
}

void ListOnAckComponentsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListOnAckComponentsRequest::getRegionId()const
{
	return regionId_;
}

void ListOnAckComponentsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListOnAckComponentsRequest::getClusterId()const
{
	return clusterId_;
}

void ListOnAckComponentsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListOnAckComponentsRequest::getApplicationName()const
{
	return applicationName_;
}

void ListOnAckComponentsRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

int ListOnAckComponentsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListOnAckComponentsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListOnAckComponentsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListOnAckComponentsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

