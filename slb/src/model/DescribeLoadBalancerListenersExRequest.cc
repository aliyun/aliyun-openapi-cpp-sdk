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

#include <alibabacloud/slb/model/DescribeLoadBalancerListenersExRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerListenersExRequest;

DescribeLoadBalancerListenersExRequest::DescribeLoadBalancerListenersExRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerListenersEx")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerListenersExRequest::~DescribeLoadBalancerListenersExRequest()
{}

int DescribeLoadBalancerListenersExRequest::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerListenersExRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string DescribeLoadBalancerListenersExRequest::getProtocol()const
{
	return protocol_;
}

void DescribeLoadBalancerListenersExRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setParameter("Protocol", protocol);
}

std::string DescribeLoadBalancerListenersExRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancerListenersExRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeLoadBalancerListenersExRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancerListenersExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

