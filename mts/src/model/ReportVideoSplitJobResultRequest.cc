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

std::string ReportVideoSplitJobResultRequest::getResult()const
{
	return result_;
}

void ReportVideoSplitJobResultRequest::setResult(const std::string& result)
{
	result_ = result;
	setParameter("Result", result);
}

std::string ReportVideoSplitJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportVideoSplitJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

long ReportVideoSplitJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportVideoSplitJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportVideoSplitJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportVideoSplitJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportVideoSplitJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportVideoSplitJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReportVideoSplitJobResultRequest::getDetails()const
{
	return details_;
}

void ReportVideoSplitJobResultRequest::setDetails(const std::string& details)
{
	details_ = details;
	setParameter("Details", details);
}

long ReportVideoSplitJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportVideoSplitJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportVideoSplitJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportVideoSplitJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

