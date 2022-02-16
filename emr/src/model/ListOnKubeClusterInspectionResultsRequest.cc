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

#include <alibabacloud/emr/model/ListOnKubeClusterInspectionResultsRequest.h>

using AlibabaCloud::Emr::Model::ListOnKubeClusterInspectionResultsRequest;

ListOnKubeClusterInspectionResultsRequest::ListOnKubeClusterInspectionResultsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListOnKubeClusterInspectionResults")
{
	setMethod(HttpRequest::Method::Post);
}

ListOnKubeClusterInspectionResultsRequest::~ListOnKubeClusterInspectionResultsRequest()
{}

std::string ListOnKubeClusterInspectionResultsRequest::getClientToken()const
{
	return clientToken_;
}

void ListOnKubeClusterInspectionResultsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListOnKubeClusterInspectionResultsRequest::getRegionId()const
{
	return regionId_;
}

void ListOnKubeClusterInspectionResultsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListOnKubeClusterInspectionResultsRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void ListOnKubeClusterInspectionResultsRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string ListOnKubeClusterInspectionResultsRequest::getClusterStatus()const
{
	return clusterStatus_;
}

void ListOnKubeClusterInspectionResultsRequest::setClusterStatus(const std::string& clusterStatus)
{
	clusterStatus_ = clusterStatus;
	setParameter("ClusterStatus", clusterStatus);
}

std::string ListOnKubeClusterInspectionResultsRequest::getAckNamespace()const
{
	return ackNamespace_;
}

void ListOnKubeClusterInspectionResultsRequest::setAckNamespace(const std::string& ackNamespace)
{
	ackNamespace_ = ackNamespace;
	setParameter("AckNamespace", ackNamespace);
}

std::string ListOnKubeClusterInspectionResultsRequest::getClusterId()const
{
	return clusterId_;
}

void ListOnKubeClusterInspectionResultsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListOnKubeClusterInspectionResultsRequest::getClusterType()const
{
	return clusterType_;
}

void ListOnKubeClusterInspectionResultsRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string ListOnKubeClusterInspectionResultsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListOnKubeClusterInspectionResultsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

