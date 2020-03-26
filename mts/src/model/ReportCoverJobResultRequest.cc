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
{
	setMethod(HttpRequest::Method::Post);
}

ReportCoverJobResultRequest::~ReportCoverJobResultRequest()
{}

long ReportCoverJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportCoverJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportCoverJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportCoverJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReportCoverJobResultRequest::getResult()const
{
	return result_;
}

void ReportCoverJobResultRequest::setResult(const std::string& result)
{
	result_ = result;
	setParameter("Result", result);
}

std::string ReportCoverJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportCoverJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ReportCoverJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportCoverJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportCoverJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportCoverJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ReportCoverJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportCoverJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

