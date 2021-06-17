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

#include <alibabacloud/ga/model/CreateForwardingRulesRequest.h>

using AlibabaCloud::Ga::Model::CreateForwardingRulesRequest;

CreateForwardingRulesRequest::CreateForwardingRulesRequest() :
	RpcServiceRequest("ga", "2019-11-20", "CreateForwardingRules")
{
	setMethod(HttpRequest::Method::Post);
}

CreateForwardingRulesRequest::~CreateForwardingRulesRequest()
{}

std::string CreateForwardingRulesRequest::getClientToken()const
{
	return clientToken_;
}

void CreateForwardingRulesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateForwardingRulesRequest::getListenerId()const
{
	return listenerId_;
}

void CreateForwardingRulesRequest::setListenerId(const std::string& listenerId)
{
	listenerId_ = listenerId;
	setParameter("ListenerId", listenerId);
}

std::string CreateForwardingRulesRequest::getRegionId()const
{
	return regionId_;
}

void CreateForwardingRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateForwardingRulesRequest::getAcceleratorId()const
{
	return acceleratorId_;
}

void CreateForwardingRulesRequest::setAcceleratorId(const std::string& acceleratorId)
{
	acceleratorId_ = acceleratorId;
	setParameter("AcceleratorId", acceleratorId);
}

Array CreateForwardingRulesRequest::getForwardingRules()const
{
	return forwardingRules_;
}

void CreateForwardingRulesRequest::setForwardingRules(const Array& forwardingRules)
{
	forwardingRules_ = forwardingRules;
	setParameter("ForwardingRules", std::to_string(forwardingRules));
}

