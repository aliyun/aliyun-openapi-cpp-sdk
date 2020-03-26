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

#include <alibabacloud/smc/model/DescribeSourceServersRequest.h>

using AlibabaCloud::Smc::Model::DescribeSourceServersRequest;

DescribeSourceServersRequest::DescribeSourceServersRequest() :
	RpcServiceRequest("smc", "2019-06-01", "DescribeSourceServers")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSourceServersRequest::~DescribeSourceServersRequest()
{}

int DescribeSourceServersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSourceServersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSourceServersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSourceServersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSourceServersRequest::getJobId()const
{
	return jobId_;
}

void DescribeSourceServersRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

int DescribeSourceServersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSourceServersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSourceServersRequest::getState()const
{
	return state_;
}

void DescribeSourceServersRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::vector<std::string> DescribeSourceServersRequest::getSourceId()const
{
	return sourceId_;
}

void DescribeSourceServersRequest::setSourceId(const std::vector<std::string>& sourceId)
{
	sourceId_ = sourceId;
	for(int dep1 = 0; dep1!= sourceId.size(); dep1++) {
		setParameter("SourceId."+ std::to_string(dep1), sourceId.at(dep1));
	}
}

std::string DescribeSourceServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSourceServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeSourceServersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSourceServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSourceServersRequest::getName()const
{
	return name_;
}

void DescribeSourceServersRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

