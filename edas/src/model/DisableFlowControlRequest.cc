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

#include <alibabacloud/edas/model/DisableFlowControlRequest.h>

using AlibabaCloud::Edas::Model::DisableFlowControlRequest;

DisableFlowControlRequest::DisableFlowControlRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/flowcontrol/disable");
	setMethod(HttpRequest::Method::Put);
}

DisableFlowControlRequest::~DisableFlowControlRequest()
{}

std::string DisableFlowControlRequest::getAppId()const
{
	return appId_;
}

void DisableFlowControlRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DisableFlowControlRequest::getRuleId()const
{
	return ruleId_;
}

void DisableFlowControlRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

