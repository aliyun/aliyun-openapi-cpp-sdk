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

#include <alibabacloud/sas/model/DescribeBackupDirsRequest.h>

using AlibabaCloud::Sas::Model::DescribeBackupDirsRequest;

DescribeBackupDirsRequest::DescribeBackupDirsRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeBackupDirs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupDirsRequest::~DescribeBackupDirsRequest()
{}

long DescribeBackupDirsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupDirsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupDirsRequest::getUuid()const
{
	return uuid_;
}

void DescribeBackupDirsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string DescribeBackupDirsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeBackupDirsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeBackupDirsRequest::getPolicyId()const
{
	return policyId_;
}

void DescribeBackupDirsRequest::setPolicyId(long policyId)
{
	policyId_ = policyId;
	setParameter("PolicyId", std::to_string(policyId));
}

int DescribeBackupDirsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupDirsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeBackupDirsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeBackupDirsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

