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

#include <alibabacloud/mts/model/ReportFpShotJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportFpShotJobResultRequest;

ReportFpShotJobResultRequest::ReportFpShotJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportFpShotJobResult")
{}

ReportFpShotJobResultRequest::~ReportFpShotJobResultRequest()
{}

std::string ReportFpShotJobResultRequest::getResult()const
{
	return result_;
}

void ReportFpShotJobResultRequest::setResult(const std::string& result)
{
	result_ = result;
	setParameter("Result", result);
}

std::string ReportFpShotJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportFpShotJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

long ReportFpShotJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportFpShotJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportFpShotJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportFpShotJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportFpShotJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportFpShotJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReportFpShotJobResultRequest::getDetails()const
{
	return details_;
}

void ReportFpShotJobResultRequest::setDetails(const std::string& details)
{
	details_ = details;
	setParameter("Details", details);
}

long ReportFpShotJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportFpShotJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportFpShotJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportFpShotJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

