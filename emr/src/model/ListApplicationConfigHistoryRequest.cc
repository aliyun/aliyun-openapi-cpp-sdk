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

#include <alibabacloud/emr/model/ListApplicationConfigHistoryRequest.h>

using AlibabaCloud::Emr::Model::ListApplicationConfigHistoryRequest;

ListApplicationConfigHistoryRequest::ListApplicationConfigHistoryRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListApplicationConfigHistory")
{
	setMethod(HttpRequest::Method::Post);
}

ListApplicationConfigHistoryRequest::~ListApplicationConfigHistoryRequest()
{}

std::string ListApplicationConfigHistoryRequest::getModifier()const
{
	return modifier_;
}

void ListApplicationConfigHistoryRequest::setModifier(const std::string& modifier)
{
	modifier_ = modifier;
	setParameter("Modifier", modifier);
}

std::string ListApplicationConfigHistoryRequest::getConfigVersion()const
{
	return configVersion_;
}

void ListApplicationConfigHistoryRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setParameter("ConfigVersion", configVersion);
}

std::string ListApplicationConfigHistoryRequest::getNodeId()const
{
	return nodeId_;
}

void ListApplicationConfigHistoryRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string ListApplicationConfigHistoryRequest::getConfigFileName()const
{
	return configFileName_;
}

void ListApplicationConfigHistoryRequest::setConfigFileName(const std::string& configFileName)
{
	configFileName_ = configFileName;
	setParameter("ConfigFileName", configFileName);
}

std::string ListApplicationConfigHistoryRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListApplicationConfigHistoryRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

int ListApplicationConfigHistoryRequest::getMaxResults()const
{
	return maxResults_;
}

void ListApplicationConfigHistoryRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListApplicationConfigHistoryRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListApplicationConfigHistoryRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string ListApplicationConfigHistoryRequest::getClientToken()const
{
	return clientToken_;
}

void ListApplicationConfigHistoryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListApplicationConfigHistoryRequest::getDescription()const
{
	return description_;
}

void ListApplicationConfigHistoryRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ListApplicationConfigHistoryRequest::getNextToken()const
{
	return nextToken_;
}

void ListApplicationConfigHistoryRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListApplicationConfigHistoryRequest::getRegionId()const
{
	return regionId_;
}

void ListApplicationConfigHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListApplicationConfigHistoryRequest::getClusterId()const
{
	return clusterId_;
}

void ListApplicationConfigHistoryRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListApplicationConfigHistoryRequest::getConfigItemKey()const
{
	return configItemKey_;
}

void ListApplicationConfigHistoryRequest::setConfigItemKey(const std::string& configItemKey)
{
	configItemKey_ = configItemKey;
	setParameter("ConfigItemKey", configItemKey);
}

std::string ListApplicationConfigHistoryRequest::getApplicationName()const
{
	return applicationName_;
}

void ListApplicationConfigHistoryRequest::setApplicationName(const std::string& applicationName)
{
	applicationName_ = applicationName;
	setParameter("ApplicationName", applicationName);
}

