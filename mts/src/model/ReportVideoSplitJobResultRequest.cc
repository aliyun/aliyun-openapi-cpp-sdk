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

#include <alibabacloud/mts/model/ReportVideoSplitJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportVideoSplitJobResultRequest;

ReportVideoSplitJobResultRequest::ReportVideoSplitJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportVideoSplitJobResult")
{}

ReportVideoSplitJobResultRequest::~ReportVideoSplitJobResultRequest()
{}

long ReportVideoSplitJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportVideoSplitJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportVideoSplitJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportVideoSplitJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ReportVideoSplitJobResultRequest::getResult()const
{
	return result_;
}

void ReportVideoSplitJobResultRequest::setResult(const std::string& result)
{
	result_ = result;
	setCoreParameter("Result", result);
}

std::string ReportVideoSplitJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportVideoSplitJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

std::string ReportVideoSplitJobResultRequest::getDetails()const
{
	return details_;
}

void ReportVideoSplitJobResultRequest::setDetails(const std::string& details)
{
	details_ = details;
	setCoreParameter("Details", details);
}

std::string ReportVideoSplitJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportVideoSplitJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportVideoSplitJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportVideoSplitJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ReportVideoSplitJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportVideoSplitJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

