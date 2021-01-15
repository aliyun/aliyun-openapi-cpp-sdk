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

#include <alibabacloud/dts/model/DescribeMigrationJobsRequest.h>

using AlibabaCloud::Dts::Model::DescribeMigrationJobsRequest;

DescribeMigrationJobsRequest::DescribeMigrationJobsRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeMigrationJobs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMigrationJobsRequest::~DescribeMigrationJobsRequest()
{}

int DescribeMigrationJobsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeMigrationJobsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeMigrationJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMigrationJobsRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeMigrationJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMigrationJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeMigrationJobsRequest::getAccountId()const
{
	return accountId_;
}

void DescribeMigrationJobsRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

int DescribeMigrationJobsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMigrationJobsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMigrationJobsRequest::getMigrationJobName()const
{
	return migrationJobName_;
}

void DescribeMigrationJobsRequest::setMigrationJobName(const std::string& migrationJobName)
{
	migrationJobName_ = migrationJobName;
	setParameter("MigrationJobName", migrationJobName);
}

std::vector<DescribeMigrationJobsRequest::Tag> DescribeMigrationJobsRequest::getTag()const
{
	return tag_;
}

void DescribeMigrationJobsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

