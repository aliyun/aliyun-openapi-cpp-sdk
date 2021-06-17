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

#include <alibabacloud/ga/model/UpdateForwardingRulesRequest.h>

using AlibabaCloud::Ga::Model::UpdateForwardingRulesRequest;

UpdateForwardingRulesRequest::UpdateForwardingRulesRequest() :
	RpcServiceRequest("ga", "2019-11-20", "UpdateForwardingRules")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateForwardingRulesRequest::~UpdateForwardingRulesRequest()
{}

std::string UpdateForwardingRulesRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateForwardingRulesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateForwardingRulesRequest::getListenerId()const
{
	return listenerId_;
}

void UpdateForwardingRulesRequest::setListenerId(const std::string& listenerId)
{
	listenerId_ = listenerId;
	setParameter("ListenerId", listenerId);
}

std::string UpdateForwardingRulesRequest::getRegionId()const
{
	return regionId_;
}

void UpdateForwardingRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateForwardingRulesRequest::getAcceleratorId()const
{
	return acceleratorId_;
}

void UpdateForwardingRulesRequest::setAcceleratorId(const std::string& acceleratorId)
{
	acceleratorId_ = acceleratorId;
	setParameter("AcceleratorId", acceleratorId);
}

Array UpdateForwardingRulesRequest::getForwardingRules()const
{
	return forwardingRules_;
}

void UpdateForwardingRulesRequest::setForwardingRules(const Array& forwardingRules)
{
	forwardingRules_ = forwardingRules;
	setParameter("ForwardingRules", std::to_string(forwardingRules));
}

