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

#include <alibabacloud/emr/model/ListClusters2Request.h>

using AlibabaCloud::Emr::Model::ListClusters2Request;

ListClusters2Request::ListClusters2Request() :
	RpcServiceRequest("emr", "2021-03-20", "ListClusters2")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusters2Request::~ListClusters2Request()
{}

std::string ListClusters2Request::getClusterName()const
{
	return clusterName_;
}

void ListClusters2Request::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ListClusters2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListClusters2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

Array ListClusters2Request::getIaasTypes()const
{
	return iaasTypes_;
}

void ListClusters2Request::setIaasTypes(const Array& iaasTypes)
{
	iaasTypes_ = iaasTypes;
	setParameter("IaasTypes", std::to_string(iaasTypes));
}

Array ListClusters2Request::getClusterIds()const
{
	return clusterIds_;
}

void ListClusters2Request::setClusterIds(const Array& clusterIds)
{
	clusterIds_ = clusterIds;
	setParameter("ClusterIds", std::to_string(clusterIds));
}

Array ListClusters2Request::getTags()const
{
	return tags_;
}

void ListClusters2Request::setTags(const Array& tags)
{
	tags_ = tags;
	setParameter("Tags", std::to_string(tags));
}

Array ListClusters2Request::getClusterStates()const
{
	return clusterStates_;
}

void ListClusters2Request::setClusterStates(const Array& clusterStates)
{
	clusterStates_ = clusterStates;
	setParameter("ClusterStates", std::to_string(clusterStates));
}

Array ListClusters2Request::getPaymentTypes()const
{
	return paymentTypes_;
}

void ListClusters2Request::setPaymentTypes(const Array& paymentTypes)
{
	paymentTypes_ = paymentTypes;
	setParameter("PaymentTypes", std::to_string(paymentTypes));
}

int ListClusters2Request::getMaxResults()const
{
	return maxResults_;
}

void ListClusters2Request::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListClusters2Request::getSystemDebug()const
{
	return systemDebug_;
}

void ListClusters2Request::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array ListClusters2Request::getClusterTypes()const
{
	return clusterTypes_;
}

void ListClusters2Request::setClusterTypes(const Array& clusterTypes)
{
	clusterTypes_ = clusterTypes;
	setParameter("ClusterTypes", std::to_string(clusterTypes));
}

std::string ListClusters2Request::getClientToken()const
{
	return clientToken_;
}

void ListClusters2Request::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListClusters2Request::getNextToken()const
{
	return nextToken_;
}

void ListClusters2Request::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListClusters2Request::getRegionId()const
{
	return regionId_;
}

void ListClusters2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array ListClusters2Request::getPaymentStatuses()const
{
	return paymentStatuses_;
}

void ListClusters2Request::setPaymentStatuses(const Array& paymentStatuses)
{
	paymentStatuses_ = paymentStatuses;
	setParameter("PaymentStatuses", std::to_string(paymentStatuses));
}

