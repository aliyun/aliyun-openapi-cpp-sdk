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

#include <alibabacloud/ga/model/DetachLogStoreFromEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::DetachLogStoreFromEndpointGroupRequest;

DetachLogStoreFromEndpointGroupRequest::DetachLogStoreFromEndpointGroupRequest() :
	RpcServiceRequest("ga", "2019-11-20", "DetachLogStoreFromEndpointGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DetachLogStoreFromEndpointGroupRequest::~DetachLogStoreFromEndpointGroupRequest()
{}

std::string DetachLogStoreFromEndpointGroupRequest::getClientToken()const
{
	return clientToken_;
}

void DetachLogStoreFromEndpointGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DetachLogStoreFromEndpointGroupRequest::getListenerId()const
{
	return listenerId_;
}

void DetachLogStoreFromEndpointGroupRequest::setListenerId(const std::string& listenerId)
{
	listenerId_ = listenerId;
	setParameter("ListenerId", listenerId);
}

std::vector<std::string> DetachLogStoreFromEndpointGroupRequest::getEndpointGroupIds()const
{
	return endpointGroupIds_;
}

void DetachLogStoreFromEndpointGroupRequest::setEndpointGroupIds(const std::vector<std::string>& endpointGroupIds)
{
	endpointGroupIds_ = endpointGroupIds;
	for(int dep1 = 0; dep1!= endpointGroupIds.size(); dep1++) {
		setParameter("EndpointGroupIds."+ std::to_string(dep1), endpointGroupIds.at(dep1));
	}
}

std::string DetachLogStoreFromEndpointGroupRequest::getRegionId()const
{
	return regionId_;
}

void DetachLogStoreFromEndpointGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DetachLogStoreFromEndpointGroupRequest::getAcceleratorId()const
{
	return acceleratorId_;
}

void DetachLogStoreFromEndpointGroupRequest::setAcceleratorId(const std::string& acceleratorId)
{
	acceleratorId_ = acceleratorId;
	setParameter("AcceleratorId", acceleratorId);
}

