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

#include <alibabacloud/mts/model/ReportAnnotationJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportAnnotationJobResultRequest;

ReportAnnotationJobResultRequest::ReportAnnotationJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportAnnotationJobResult")
{}

ReportAnnotationJobResultRequest::~ReportAnnotationJobResultRequest()
{}

std::string ReportAnnotationJobResultRequest::getAnnotation()const
{
	return annotation_;
}

void ReportAnnotationJobResultRequest::setAnnotation(const std::string& annotation)
{
	annotation_ = annotation;
	setParameter("Annotation", annotation);
}

std::string ReportAnnotationJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportAnnotationJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

long ReportAnnotationJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportAnnotationJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportAnnotationJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportAnnotationJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportAnnotationJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportAnnotationJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReportAnnotationJobResultRequest::getDetails()const
{
	return details_;
}

void ReportAnnotationJobResultRequest::setDetails(const std::string& details)
{
	details_ = details;
	setParameter("Details", details);
}

long ReportAnnotationJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportAnnotationJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReportAnnotationJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportAnnotationJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

