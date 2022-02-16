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

#include <alibabacloud/emr/model/ListApplicationConfigsRequest.h>

using AlibabaCloud::Emr::Model::ListApplicationConfigsRequest;

ListApplicationConfigsRequest::ListApplicationConfigsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListApplicationConfigs")
{
	setMethod(HttpRequest::Method::Post);
}

ListApplicationConfigsRequest::~ListApplicationConfigsRequest()
{}

std::string ListApplicationConfigsRequest::getClientToken()const
{
	return clientToken_;
}

void ListApplicationConfigsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListApplicationConfigsRequest::getConfigVersion()const
{
	return configVersion_;
}

void ListApplicationConfigsRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setParameter("ConfigVersion", configVersion);
}

std::string ListApplicationConfigsRequest::getNextToken()const
{
	return nextToken_;
}

void ListApplicationConfigsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListApplicationConfigsRequest::getRegionId()const
{
	return regionId_;
}

void ListApplicationConfigsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListApplicationConfigsRequest::getNodeId()const
{
	return nodeId_;
}

void ListApplicationConfigsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string ListApplicationConfigsRequest::getClusterId()const
{
	return clusterId_;
}

void ListApplicationConfigsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListApplicationConfigsRequest::getConfigFileName()const
{
	return configFileName_;
}

void ListApplicationConfigsRequest::setConfigFileName(const std::string& configFileName)
{
	configFileName_ = configFileName;
	setParameter("ConfigFileName", configFileName);
}

std::string ListApplicationConfigsRequest::getConfigItemKey()const
{
	return configItemKey_;
}

void ListApplicationConfigsRequest::setConfigItemKey(const std::string& configItemKey)
{
	configItemKey_ = configItemKey;
	setParameter("ConfigItemKey", configItemKey);
}

std::string ListApplicationConfigsRequest::getApplicationName()const
{
	return applicationName_;
}

void ListApplicationConfigsRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

Array ListApplicationConfigsRequest::getLabels()const
{
	return labels_;
}

void ListApplicationConfigsRequest::setLabels(const Array& labels)
{
	labels_ = labels;
	setParameter("Labels", std::to_string(labels));
}

std::string ListApplicationConfigsRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListApplicationConfigsRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

int ListApplicationConfigsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListApplicationConfigsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListApplicationConfigsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListApplicationConfigsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

