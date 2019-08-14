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

#include <alibabacloud/mts/model/ReportTagJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportTagJobResultRequest;

ReportTagJobResultRequest::ReportTagJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportTagJobResult")
{}

ReportTagJobResultRequest::~ReportTagJobResultRequest()
{}

std::string ReportTagJobResultRequest::getResult()const
{
	return result_;
}

void ReportTagJobResultRequest::setResult(const std::string& result)
{
	result_ = result;
	setCoreParameter("Result", result);
}

std::string ReportTagJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportTagJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

long ReportTagJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportTagJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportTagJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportTagJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportTagJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportTagJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReportTagJobResultRequest::getTag()const
{
	return tag_;
}

void ReportTagJobResultRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

long ReportTagJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportTagJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportTagJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportTagJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

