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

#include <alibabacloud/saf/model/RequestDecisionRequest.h>

using AlibabaCloud::Saf::Model::RequestDecisionRequest;

RequestDecisionRequest::RequestDecisionRequest() :
	RpcServiceRequest("saf", "2019-05-21", "RequestDecision")
{
	setMethod(HttpRequest::Method::Post);
}

RequestDecisionRequest::~RequestDecisionRequest()
{}

std::string RequestDecisionRequest::getServiceParameters()const
{
	return serviceParameters_;
}

void RequestDecisionRequest::setServiceParameters(const std::string& serviceParameters)
{
	serviceParameters_ = serviceParameters;
	setParameter("ServiceParameters", serviceParameters);
}

std::string RequestDecisionRequest::getEventCode()const
{
	return eventCode_;
}

void RequestDecisionRequest::setEventCode(const std::string& eventCode)
{
	eventCode_ = eventCode;
	setParameter("EventCode", eventCode);
}

