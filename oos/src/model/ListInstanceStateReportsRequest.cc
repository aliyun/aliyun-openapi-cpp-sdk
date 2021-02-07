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

#include <alibabacloud/oos/model/ListInstanceStateReportsRequest.h>

using AlibabaCloud::Oos::Model::ListInstanceStateReportsRequest;

ListInstanceStateReportsRequest::ListInstanceStateReportsRequest() :
	RpcServiceRequest("oos", "2019-06-01", "ListInstanceStateReports")
{
	setMethod(HttpRequest::Method::Post);
}

ListInstanceStateReportsRequest::~ListInstanceStateReportsRequest()
{}

std::string ListInstanceStateReportsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListInstanceStateReportsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListInstanceStateReportsRequest::getRegionId()const
{
	return regionId_;
}

void ListInstanceStateReportsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListInstanceStateReportsRequest::getNextToken()const
{
	return nextToken_;
}

void ListInstanceStateReportsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListInstanceStateReportsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListInstanceStateReportsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListInstanceStateReportsRequest::getStateConfigurationId()const
{
	return stateConfigurationId_;
}

void ListInstanceStateReportsRequest::setStateConfigurationId(const std::string& stateConfigurationId)
{
	stateConfigurationId_ = stateConfigurationId;
	setParameter("StateConfigurationId", stateConfigurationId);
}

