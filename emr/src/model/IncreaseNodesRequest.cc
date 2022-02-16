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

#include <alibabacloud/emr/model/IncreaseNodesRequest.h>

using AlibabaCloud::Emr::Model::IncreaseNodesRequest;

IncreaseNodesRequest::IncreaseNodesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "IncreaseNodes")
{
	setMethod(HttpRequest::Method::Post);
}

IncreaseNodesRequest::~IncreaseNodesRequest()
{}

bool IncreaseNodesRequest::getAutoPayOrder()const
{
	return autoPayOrder_;
}

void IncreaseNodesRequest::setAutoPayOrder(bool autoPayOrder)
{
	autoPayOrder_ = autoPayOrder;
	setParameter("AutoPayOrder", autoPayOrder ? "true" : "false");
}

std::string IncreaseNodesRequest::getClientToken()const
{
	return clientToken_;
}

void IncreaseNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array IncreaseNodesRequest::getNodeGroupList()const
{
	return nodeGroupList_;
}

void IncreaseNodesRequest::setNodeGroupList(const Array& nodeGroupList)
{
	nodeGroupList_ = nodeGroupList;
	setParameter("NodeGroupList", std::to_string(nodeGroupList));
}

std::string IncreaseNodesRequest::getRegionId()const
{
	return regionId_;
}

void IncreaseNodesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array IncreaseNodesRequest::getNodeGroups()const
{
	return nodeGroups_;
}

void IncreaseNodesRequest::setNodeGroups(const Array& nodeGroups)
{
	nodeGroups_ = nodeGroups;
	setParameter("NodeGroups", std::to_string(nodeGroups));
}

Array IncreaseNodesRequest::getApplicationConfigs()const
{
	return applicationConfigs_;
}

void IncreaseNodesRequest::setApplicationConfigs(const Array& applicationConfigs)
{
	applicationConfigs_ = applicationConfigs;
	setParameter("ApplicationConfigs", std::to_string(applicationConfigs));
}

std::string IncreaseNodesRequest::getClusterId()const
{
	return clusterId_;
}

void IncreaseNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Array IncreaseNodesRequest::getPromotions()const
{
	return promotions_;
}

void IncreaseNodesRequest::setPromotions(const Array& promotions)
{
	promotions_ = promotions;
	setParameter("Promotions", std::to_string(promotions));
}

std::string IncreaseNodesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void IncreaseNodesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

