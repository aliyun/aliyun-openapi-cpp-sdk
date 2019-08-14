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

#include <alibabacloud/emr/model/CreateVerificationCodeRequest.h>

using AlibabaCloud::Emr::Model::CreateVerificationCodeRequest;

CreateVerificationCodeRequest::CreateVerificationCodeRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateVerificationCode")
{}

CreateVerificationCodeRequest::~CreateVerificationCodeRequest()
{}

std::string CreateVerificationCodeRequest::getMode()const
{
	return mode_;
}

void CreateVerificationCodeRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setCoreParameter("Mode", mode);
}

long CreateVerificationCodeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVerificationCodeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateVerificationCodeRequest::getRegionId()const
{
	return regionId_;
}

void CreateVerificationCodeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateVerificationCodeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateVerificationCodeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateVerificationCodeRequest::getTarget()const
{
	return target_;
}

void CreateVerificationCodeRequest::setTarget(const std::string& target)
{
	target_ = target;
	setCoreParameter("Target", target);
}

