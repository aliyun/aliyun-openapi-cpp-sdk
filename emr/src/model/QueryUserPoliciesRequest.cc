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

#include <alibabacloud/emr/model/QueryUserPoliciesRequest.h>

using AlibabaCloud::Emr::Model::QueryUserPoliciesRequest;

QueryUserPoliciesRequest::QueryUserPoliciesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QueryUserPolicies")
{}

QueryUserPoliciesRequest::~QueryUserPoliciesRequest()
{}

long QueryUserPoliciesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryUserPoliciesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryUserPoliciesRequest::getResourceId()const
{
	return resourceId_;
}

void QueryUserPoliciesRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string QueryUserPoliciesRequest::getResourceType()const
{
	return resourceType_;
}

void QueryUserPoliciesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string QueryUserPoliciesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryUserPoliciesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryUserPoliciesRequest::getRegionId()const
{
	return regionId_;
}

void QueryUserPoliciesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

