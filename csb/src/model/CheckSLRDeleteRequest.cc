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

#include <alibabacloud/csb/model/CheckSLRDeleteRequest.h>

using AlibabaCloud::CSB::Model::CheckSLRDeleteRequest;

CheckSLRDeleteRequest::CheckSLRDeleteRequest() :
	RpcServiceRequest("csb", "2017-11-18", "CheckSLRDelete")
{
	setMethod(HttpRequest::Method::Get);
}

CheckSLRDeleteRequest::~CheckSLRDeleteRequest()
{}

std::string CheckSLRDeleteRequest::getDeletionTaskId()const
{
	return deletionTaskId_;
}

void CheckSLRDeleteRequest::setDeletionTaskId(const std::string& deletionTaskId)
{
	deletionTaskId_ = deletionTaskId;
	setParameter("DeletionTaskId", deletionTaskId);
}

std::string CheckSLRDeleteRequest::getAccountId()const
{
	return accountId_;
}

void CheckSLRDeleteRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string CheckSLRDeleteRequest::getSPIRegionId()const
{
	return sPIRegionId_;
}

void CheckSLRDeleteRequest::setSPIRegionId(const std::string& sPIRegionId)
{
	sPIRegionId_ = sPIRegionId;
	setParameter("SPIRegionId", sPIRegionId);
}

std::string CheckSLRDeleteRequest::getRoleArn()const
{
	return roleArn_;
}

void CheckSLRDeleteRequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setParameter("RoleArn", roleArn);
}

std::string CheckSLRDeleteRequest::getServiceName()const
{
	return serviceName_;
}

void CheckSLRDeleteRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

