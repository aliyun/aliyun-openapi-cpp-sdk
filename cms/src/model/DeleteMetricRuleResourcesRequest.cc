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

#include <alibabacloud/cms/model/DeleteMetricRuleResourcesRequest.h>

using AlibabaCloud::Cms::Model::DeleteMetricRuleResourcesRequest;

DeleteMetricRuleResourcesRequest::DeleteMetricRuleResourcesRequest() :
	RpcServiceRequest("cms", "2019-01-01", "DeleteMetricRuleResources")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteMetricRuleResourcesRequest::~DeleteMetricRuleResourcesRequest()
{}

std::string DeleteMetricRuleResourcesRequest::getResources()const
{
	return resources_;
}

void DeleteMetricRuleResourcesRequest::setResources(const std::string& resources)
{
	resources_ = resources;
	setParameter("Resources", resources);
}

std::string DeleteMetricRuleResourcesRequest::getRuleId()const
{
	return ruleId_;
}

void DeleteMetricRuleResourcesRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

