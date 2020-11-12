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

#include <alibabacloud/openanalytics-open/model/SetTrafficLimitPolicyRequest.h>

using AlibabaCloud::Openanalytics_open::Model::SetTrafficLimitPolicyRequest;

SetTrafficLimitPolicyRequest::SetTrafficLimitPolicyRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "SetTrafficLimitPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

SetTrafficLimitPolicyRequest::~SetTrafficLimitPolicyRequest()
{}

std::string SetTrafficLimitPolicyRequest::getRegionId()const
{
	return regionId_;
}

void SetTrafficLimitPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string SetTrafficLimitPolicyRequest::getPolicy()const
{
	return policy_;
}

void SetTrafficLimitPolicyRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setBodyParameter("Policy", policy);
}

std::string SetTrafficLimitPolicyRequest::getExternalBizAliyunUid()const
{
	return externalBizAliyunUid_;
}

void SetTrafficLimitPolicyRequest::setExternalBizAliyunUid(const std::string& externalBizAliyunUid)
{
	externalBizAliyunUid_ = externalBizAliyunUid;
	setBodyParameter("ExternalBizAliyunUid", externalBizAliyunUid);
}

