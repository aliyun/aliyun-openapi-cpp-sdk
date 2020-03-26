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

#include <alibabacloud/slb/model/SetLoadBalancerListenerAttributeExRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerListenerAttributeExRequest;

SetLoadBalancerListenerAttributeExRequest::SetLoadBalancerListenerAttributeExRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerListenerAttributeEx")
{
	setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerListenerAttributeExRequest::~SetLoadBalancerListenerAttributeExRequest()
{}

int SetLoadBalancerListenerAttributeExRequest::getListenerPort()const
{
	return listenerPort_;
}

void SetLoadBalancerListenerAttributeExRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::vector<SetLoadBalancerListenerAttributeExRequest::KvAttribute> SetLoadBalancerListenerAttributeExRequest::getKvAttribute()const
{
	return kvAttribute_;
}

void SetLoadBalancerListenerAttributeExRequest::setKvAttribute(const std::vector<KvAttribute>& kvAttribute)
{
	kvAttribute_ = kvAttribute;
	for(int dep1 = 0; dep1!= kvAttribute.size(); dep1++) {
		auto kvAttributeObj = kvAttribute.at(dep1);
		std::string kvAttributeObjStr = "KvAttribute." + std::to_string(dep1 + 1);
		setParameter(kvAttributeObjStr + ".Value", kvAttributeObj.value);
		setParameter(kvAttributeObjStr + ".Key", kvAttributeObj.key);
	}
}

std::string SetLoadBalancerListenerAttributeExRequest::getProtocol()const
{
	return protocol_;
}

void SetLoadBalancerListenerAttributeExRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setParameter("Protocol", protocol);
}

std::string SetLoadBalancerListenerAttributeExRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerListenerAttributeExRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerListenerAttributeExRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerListenerAttributeExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

