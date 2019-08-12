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

#include <alibabacloud/mts/model/ReportTerrorismJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportTerrorismJobResultRequest;

ReportTerrorismJobResultRequest::ReportTerrorismJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportTerrorismJobResult")
{}

ReportTerrorismJobResultRequest::~ReportTerrorismJobResultRequest()
{}

std::string ReportTerrorismJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportTerrorismJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

long ReportTerrorismJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportTerrorismJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReportTerrorismJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportTerrorismJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportTerrorismJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportTerrorismJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReportTerrorismJobResultRequest::getLabel()const
{
	return label_;
}

void ReportTerrorismJobResultRequest::setLabel(const std::string& label)
{
	label_ = label;
	setCoreParameter("Label", label);
}

std::string ReportTerrorismJobResultRequest::getDetail()const
{
	return detail_;
}

void ReportTerrorismJobResultRequest::setDetail(const std::string& detail)
{
	detail_ = detail;
	setCoreParameter("Detail", detail);
}

long ReportTerrorismJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportTerrorismJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ReportTerrorismJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportTerrorismJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

