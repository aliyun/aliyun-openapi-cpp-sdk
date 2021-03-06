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

#include <alibabacloud/privatelink/model/ListVpcEndpointConnectionsRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointConnectionsRequest;

ListVpcEndpointConnectionsRequest::ListVpcEndpointConnectionsRequest() :
	RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointConnections")
{
	setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointConnectionsRequest::~ListVpcEndpointConnectionsRequest()
{}

std::string ListVpcEndpointConnectionsRequest::getEndpointId()const
{
	return endpointId_;
}

void ListVpcEndpointConnectionsRequest::setEndpointId(const std::string& endpointId)
{
	endpointId_ = endpointId;
	setParameter("EndpointId", endpointId);
}

long ListVpcEndpointConnectionsRequest::getEndpointOwnerId()const
{
	return endpointOwnerId_;
}

void ListVpcEndpointConnectionsRequest::setEndpointOwnerId(long endpointOwnerId)
{
	endpointOwnerId_ = endpointOwnerId;
	setParameter("EndpointOwnerId", std::to_string(endpointOwnerId));
}

std::string ListVpcEndpointConnectionsRequest::getRegionId()const
{
	return regionId_;
}

void ListVpcEndpointConnectionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListVpcEndpointConnectionsRequest::getNextToken()const
{
	return nextToken_;
}

void ListVpcEndpointConnectionsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListVpcEndpointConnectionsRequest::getConnectionStatus()const
{
	return connectionStatus_;
}

void ListVpcEndpointConnectionsRequest::setConnectionStatus(const std::string& connectionStatus)
{
	connectionStatus_ = connectionStatus;
	setParameter("ConnectionStatus", connectionStatus);
}

int ListVpcEndpointConnectionsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListVpcEndpointConnectionsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListVpcEndpointConnectionsRequest::getServiceId()const
{
	return serviceId_;
}

void ListVpcEndpointConnectionsRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

