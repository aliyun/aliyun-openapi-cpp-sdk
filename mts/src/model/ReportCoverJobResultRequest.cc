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

#include <alibabacloud/mts/model/ReportCoverJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportCoverJobResultRequest;

ReportCoverJobResultRequest::ReportCoverJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportCoverJobResult")
{}

ReportCoverJobResultRequest::~ReportCoverJobResultRequest()
{}

std::string ReportCoverJobResultRequest::getResult()const
{
	return result_;
}

void ReportCoverJobResultRequest::setResult(const std::string& result)
{
	result_ = result;
	setCoreParameter("Result", result);
}

std::string ReportCoverJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportCoverJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

long ReportCoverJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportCoverJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReportCoverJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportCoverJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportCoverJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportCoverJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ReportCoverJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportCoverJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ReportCoverJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportCoverJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

