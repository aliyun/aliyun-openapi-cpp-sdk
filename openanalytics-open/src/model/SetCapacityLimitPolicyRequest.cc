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

#include <alibabacloud/openanalytics-open/model/SetCapacityLimitPolicyRequest.h>

using AlibabaCloud::Openanalytics_open::Model::SetCapacityLimitPolicyRequest;

SetCapacityLimitPolicyRequest::SetCapacityLimitPolicyRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "SetCapacityLimitPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

SetCapacityLimitPolicyRequest::~SetCapacityLimitPolicyRequest()
{}

std::string SetCapacityLimitPolicyRequest::getRegionId()const
{
	return regionId_;
}

void SetCapacityLimitPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string SetCapacityLimitPolicyRequest::getPolicy()const
{
	return policy_;
}

void SetCapacityLimitPolicyRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setBodyParameter("Policy", policy);
}

std::string SetCapacityLimitPolicyRequest::getExternalBizAliyunUid()const
{
	return externalBizAliyunUid_;
}

void SetCapacityLimitPolicyRequest::setExternalBizAliyunUid(const std::string& externalBizAliyunUid)
{
	externalBizAliyunUid_ = externalBizAliyunUid;
	setBodyParameter("ExternalBizAliyunUid", externalBizAliyunUid);
}

