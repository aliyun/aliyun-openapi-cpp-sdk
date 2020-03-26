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
{
	setMethod(HttpRequest::Method::Post);
}

ReportTerrorismJobResultRequest::~ReportTerrorismJobResultRequest()
{}

long ReportTerrorismJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportTerrorismJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportTerrorismJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportTerrorismJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReportTerrorismJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportTerrorismJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ReportTerrorismJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportTerrorismJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportTerrorismJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportTerrorismJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReportTerrorismJobResultRequest::getLabel()const
{
	return label_;
}

void ReportTerrorismJobResultRequest::setLabel(const std::string& label)
{
	label_ = label;
	setParameter("Label", label);
}

long ReportTerrorismJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportTerrorismJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportTerrorismJobResultRequest::getDetail()const
{
	return detail_;
}

void ReportTerrorismJobResultRequest::setDetail(const std::string& detail)
{
	detail_ = detail;
	setParameter("Detail", detail);
}

