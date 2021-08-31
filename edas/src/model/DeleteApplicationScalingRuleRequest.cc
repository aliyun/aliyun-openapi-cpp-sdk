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

#include <alibabacloud/edas/model/DeleteApplicationScalingRuleRequest.h>

using AlibabaCloud::Edas::Model::DeleteApplicationScalingRuleRequest;

DeleteApplicationScalingRuleRequest::DeleteApplicationScalingRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v1/eam/scale/application_scaling_rule");
	setMethod(HttpRequest::Method::Delete);
}

DeleteApplicationScalingRuleRequest::~DeleteApplicationScalingRuleRequest()
{}

std::string DeleteApplicationScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void DeleteApplicationScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
}

std::string DeleteApplicationScalingRuleRequest::getAppId()const
{
	return appId_;
}

void DeleteApplicationScalingRuleRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

