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

#include <alibabacloud/emr/model/ListClustersRequest.h>

using AlibabaCloud::Emr::Model::ListClustersRequest;

ListClustersRequest::ListClustersRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListClusters")
{
	setMethod(HttpRequest::Method::Post);
}

ListClustersRequest::~ListClustersRequest()
{}

std::string ListClustersRequest::getClusterName()const
{
	return clusterName_;
}

void ListClustersRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ListClustersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListClustersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

Array ListClustersRequest::getIaasTypes()const
{
	return iaasTypes_;
}

void ListClustersRequest::setIaasTypes(const Array& iaasTypes)
{
	iaasTypes_ = iaasTypes;
	setParameter("IaasTypes", std::to_string(iaasTypes));
}

Array ListClustersRequest::getClusterIds()const
{
	return clusterIds_;
}

void ListClustersRequest::setClusterIds(const Array& clusterIds)
{
	clusterIds_ = clusterIds;
	setParameter("ClusterIds", std::to_string(clusterIds));
}

Array ListClustersRequest::getTags()const
{
	return tags_;
}

void ListClustersRequest::setTags(const Array& tags)
{
	tags_ = tags;
	setParameter("Tags", std::to_string(tags));
}

Array ListClustersRequest::getClusterStates()const
{
	return clusterStates_;
}

void ListClustersRequest::setClusterStates(const Array& clusterStates)
{
	clusterStates_ = clusterStates;
	setParameter("ClusterStates", std::to_string(clusterStates));
}

Array ListClustersRequest::getPaymentTypes()const
{
	return paymentTypes_;
}

void ListClustersRequest::setPaymentTypes(const Array& paymentTypes)
{
	paymentTypes_ = paymentTypes;
	setParameter("PaymentTypes", std::to_string(paymentTypes));
}

int ListClustersRequest::getMaxResults()const
{
	return maxResults_;
}

void ListClustersRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListClustersRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListClustersRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array ListClustersRequest::getClusterTypes()const
{
	return clusterTypes_;
}

void ListClustersRequest::setClusterTypes(const Array& clusterTypes)
{
	clusterTypes_ = clusterTypes;
	setParameter("ClusterTypes", std::to_string(clusterTypes));
}

std::string ListClustersRequest::getClientToken()const
{
	return clientToken_;
}

void ListClustersRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListClustersRequest::getNextToken()const
{
	return nextToken_;
}

void ListClustersRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListClustersRequest::getRegionId()const
{
	return regionId_;
}

void ListClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array ListClustersRequest::getPaymentStatuses()const
{
	return paymentStatuses_;
}

void ListClustersRequest::setPaymentStatuses(const Array& paymentStatuses)
{
	paymentStatuses_ = paymentStatuses;
	setParameter("PaymentStatuses", std::to_string(paymentStatuses));
}

