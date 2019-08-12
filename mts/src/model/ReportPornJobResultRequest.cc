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

#include <alibabacloud/mts/model/ReportPornJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportPornJobResultRequest;

ReportPornJobResultRequest::ReportPornJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportPornJobResult")
{}

ReportPornJobResultRequest::~ReportPornJobResultRequest()
{}

std::string ReportPornJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportPornJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", std::to_string(jobId));
}

long ReportPornJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportPornJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReportPornJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportPornJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ReportPornJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportPornJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ReportPornJobResultRequest::getLabel()const
{
	return label_;
}

void ReportPornJobResultRequest::setLabel(const std::string& label)
{
	label_ = label;
	setCoreParameter("Label", std::to_string(label));
}

std::string ReportPornJobResultRequest::getDetail()const
{
	return detail_;
}

void ReportPornJobResultRequest::setDetail(const std::string& detail)
{
	detail_ = detail;
	setCoreParameter("Detail", std::to_string(detail));
}

long ReportPornJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportPornJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ReportPornJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportPornJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

