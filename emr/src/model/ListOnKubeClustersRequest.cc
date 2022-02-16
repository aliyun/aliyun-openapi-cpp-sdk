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

#include <alibabacloud/emr/model/ListOnKubeClustersRequest.h>

using AlibabaCloud::Emr::Model::ListOnKubeClustersRequest;

ListOnKubeClustersRequest::ListOnKubeClustersRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListOnKubeClusters")
{
	setMethod(HttpRequest::Method::Post);
}

ListOnKubeClustersRequest::~ListOnKubeClustersRequest()
{}

Array ListOnKubeClustersRequest::getClusterTypes()const
{
	return clusterTypes_;
}

void ListOnKubeClustersRequest::setClusterTypes(const Array& clusterTypes)
{
	clusterTypes_ = clusterTypes;
	setParameter("ClusterTypes", std::to_string(clusterTypes));
}

std::string ListOnKubeClustersRequest::getMainVersion()const
{
	return mainVersion_;
}

void ListOnKubeClustersRequest::setMainVersion(const std::string& mainVersion)
{
	mainVersion_ = mainVersion;
	setParameter("MainVersion", mainVersion);
}

std::string ListOnKubeClustersRequest::getClusterName()const
{
	return clusterName_;
}

void ListOnKubeClustersRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ListOnKubeClustersRequest::getClientToken()const
{
	return clientToken_;
}

void ListOnKubeClustersRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListOnKubeClustersRequest::getReleaseVersion()const
{
	return releaseVersion_;
}

void ListOnKubeClustersRequest::setReleaseVersion(const std::string& releaseVersion)
{
	releaseVersion_ = releaseVersion;
	setParameter("ReleaseVersion", releaseVersion);
}

std::string ListOnKubeClustersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListOnKubeClustersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

Array ListOnKubeClustersRequest::getClusterStatuses()const
{
	return clusterStatuses_;
}

void ListOnKubeClustersRequest::setClusterStatuses(const Array& clusterStatuses)
{
	clusterStatuses_ = clusterStatuses;
	setParameter("ClusterStatuses", std::to_string(clusterStatuses));
}

std::string ListOnKubeClustersRequest::getNextToken()const
{
	return nextToken_;
}

void ListOnKubeClustersRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListOnKubeClustersRequest::getRegionId()const
{
	return regionId_;
}

void ListOnKubeClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListOnKubeClustersRequest::getClusterId()const
{
	return clusterId_;
}

void ListOnKubeClustersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListOnKubeClustersRequest::getMaxResults()const
{
	return maxResults_;
}

void ListOnKubeClustersRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListOnKubeClustersRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListOnKubeClustersRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

