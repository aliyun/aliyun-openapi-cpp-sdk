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

#include <alibabacloud/emr/model/ListOnAckClustersRequest.h>

using AlibabaCloud::Emr::Model::ListOnAckClustersRequest;

ListOnAckClustersRequest::ListOnAckClustersRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListOnAckClusters")
{
	setMethod(HttpRequest::Method::Post);
}

ListOnAckClustersRequest::~ListOnAckClustersRequest()
{}

Array ListOnAckClustersRequest::getClusterTypes()const
{
	return clusterTypes_;
}

void ListOnAckClustersRequest::setClusterTypes(const Array& clusterTypes)
{
	clusterTypes_ = clusterTypes;
	setParameter("ClusterTypes", std::to_string(clusterTypes));
}

std::string ListOnAckClustersRequest::getMainVersion()const
{
	return mainVersion_;
}

void ListOnAckClustersRequest::setMainVersion(const std::string& mainVersion)
{
	mainVersion_ = mainVersion;
	setParameter("MainVersion", mainVersion);
}

std::string ListOnAckClustersRequest::getClusterName()const
{
	return clusterName_;
}

void ListOnAckClustersRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ListOnAckClustersRequest::getClientToken()const
{
	return clientToken_;
}

void ListOnAckClustersRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListOnAckClustersRequest::getReleaseVersion()const
{
	return releaseVersion_;
}

void ListOnAckClustersRequest::setReleaseVersion(const std::string& releaseVersion)
{
	releaseVersion_ = releaseVersion;
	setParameter("ReleaseVersion", releaseVersion);
}

std::string ListOnAckClustersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListOnAckClustersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

Array ListOnAckClustersRequest::getClusterStatuses()const
{
	return clusterStatuses_;
}

void ListOnAckClustersRequest::setClusterStatuses(const Array& clusterStatuses)
{
	clusterStatuses_ = clusterStatuses;
	setParameter("ClusterStatuses", std::to_string(clusterStatuses));
}

std::string ListOnAckClustersRequest::getNextToken()const
{
	return nextToken_;
}

void ListOnAckClustersRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListOnAckClustersRequest::getRegionId()const
{
	return regionId_;
}

void ListOnAckClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListOnAckClustersRequest::getClusterId()const
{
	return clusterId_;
}

void ListOnAckClustersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListOnAckClustersRequest::getMaxResults()const
{
	return maxResults_;
}

void ListOnAckClustersRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListOnAckClustersRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListOnAckClustersRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

