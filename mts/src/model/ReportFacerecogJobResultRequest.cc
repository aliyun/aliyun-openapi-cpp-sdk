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

#include <alibabacloud/mts/model/ReportFacerecogJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportFacerecogJobResultRequest;

ReportFacerecogJobResultRequest::ReportFacerecogJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportFacerecogJobResult")
{}

ReportFacerecogJobResultRequest::~ReportFacerecogJobResultRequest()
{}

std::string ReportFacerecogJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportFacerecogJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

long ReportFacerecogJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportFacerecogJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportFacerecogJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportFacerecogJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportFacerecogJobResultRequest::getFacerecog()const
{
	return facerecog_;
}

void ReportFacerecogJobResultRequest::setFacerecog(const std::string& facerecog)
{
	facerecog_ = facerecog;
	setCoreParameter("Facerecog", facerecog);
}

std::string ReportFacerecogJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportFacerecogJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReportFacerecogJobResultRequest::getDetails()const
{
	return details_;
}

void ReportFacerecogJobResultRequest::setDetails(const std::string& details)
{
	details_ = details;
	setCoreParameter("Details", details);
}

long ReportFacerecogJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportFacerecogJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportFacerecogJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportFacerecogJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

