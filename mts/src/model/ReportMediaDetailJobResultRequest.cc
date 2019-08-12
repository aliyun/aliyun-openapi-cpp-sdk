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

#include <alibabacloud/mts/model/ReportMediaDetailJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportMediaDetailJobResultRequest;

ReportMediaDetailJobResultRequest::ReportMediaDetailJobResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ReportMediaDetailJobResult")
{}

ReportMediaDetailJobResultRequest::~ReportMediaDetailJobResultRequest()
{}

std::string ReportMediaDetailJobResultRequest::getJobId()const
{
	return jobId_;
}

void ReportMediaDetailJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", std::to_string(jobId));
}

long ReportMediaDetailJobResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportMediaDetailJobResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReportMediaDetailJobResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportMediaDetailJobResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ReportMediaDetailJobResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportMediaDetailJobResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ReportMediaDetailJobResultRequest::getTag()const
{
	return tag_;
}

void ReportMediaDetailJobResultRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", std::to_string(tag));
}

long ReportMediaDetailJobResultRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportMediaDetailJobResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ReportMediaDetailJobResultRequest::getResults()const
{
	return results_;
}

void ReportMediaDetailJobResultRequest::setResults(const std::string& results)
{
	results_ = results;
	setCoreParameter("Results", std::to_string(results));
}

std::string ReportMediaDetailJobResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportMediaDetailJobResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

