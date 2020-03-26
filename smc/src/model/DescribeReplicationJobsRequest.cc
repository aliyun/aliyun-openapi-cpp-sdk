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

#include <alibabacloud/smc/model/DescribeReplicationJobsRequest.h>

using AlibabaCloud::Smc::Model::DescribeReplicationJobsRequest;

DescribeReplicationJobsRequest::DescribeReplicationJobsRequest() :
	RpcServiceRequest("smc", "2019-06-01", "DescribeReplicationJobs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeReplicationJobsRequest::~DescribeReplicationJobsRequest()
{}

int DescribeReplicationJobsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeReplicationJobsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeReplicationJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicationJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<std::string> DescribeReplicationJobsRequest::getJobId()const
{
	return jobId_;
}

void DescribeReplicationJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int dep1 = 0; dep1!= jobId.size(); dep1++) {
		setParameter("JobId."+ std::to_string(dep1), jobId.at(dep1));
	}
}

std::string DescribeReplicationJobsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicationJobsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeReplicationJobsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeReplicationJobsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> DescribeReplicationJobsRequest::getSourceId()const
{
	return sourceId_;
}

void DescribeReplicationJobsRequest::setSourceId(const std::vector<std::string>& sourceId)
{
	sourceId_ = sourceId;
	for(int dep1 = 0; dep1!= sourceId.size(); dep1++) {
		setParameter("SourceId."+ std::to_string(dep1), sourceId.at(dep1));
	}
}

std::string DescribeReplicationJobsRequest::getBusinessStatus()const
{
	return businessStatus_;
}

void DescribeReplicationJobsRequest::setBusinessStatus(const std::string& businessStatus)
{
	businessStatus_ = businessStatus;
	setParameter("BusinessStatus", businessStatus);
}

std::string DescribeReplicationJobsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicationJobsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeReplicationJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicationJobsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeReplicationJobsRequest::getName()const
{
	return name_;
}

void DescribeReplicationJobsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeReplicationJobsRequest::getStatus()const
{
	return status_;
}

void DescribeReplicationJobsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

