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

#include <alibabacloud/emr/model/ListApplicationsRequest.h>

using AlibabaCloud::Emr::Model::ListApplicationsRequest;

ListApplicationsRequest::ListApplicationsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListApplications")
{
	setMethod(HttpRequest::Method::Post);
}

ListApplicationsRequest::~ListApplicationsRequest()
{}

std::string ListApplicationsRequest::getClientToken()const
{
	return clientToken_;
}

void ListApplicationsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListApplicationsRequest::getNextToken()const
{
	return nextToken_;
}

void ListApplicationsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListApplicationsRequest::getRegionId()const
{
	return regionId_;
}

void ListApplicationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListApplicationsRequest::getClusterId()const
{
	return clusterId_;
}

void ListApplicationsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Array ListApplicationsRequest::getApplicationNames()const
{
	return applicationNames_;
}

void ListApplicationsRequest::setApplicationNames(const Array& applicationNames)
{
	applicationNames_ = applicationNames;
	setParameter("ApplicationNames", std::to_string(applicationNames));
}

int ListApplicationsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListApplicationsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListApplicationsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListApplicationsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

