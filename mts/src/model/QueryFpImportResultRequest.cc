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

#include <alibabacloud/mts/model/QueryFpImportResultRequest.h>

using AlibabaCloud::Mts::Model::QueryFpImportResultRequest;

QueryFpImportResultRequest::QueryFpImportResultRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryFpImportResult")
{}

QueryFpImportResultRequest::~QueryFpImportResultRequest()
{}

long QueryFpImportResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryFpImportResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryFpImportResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryFpImportResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryFpImportResultRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryFpImportResultRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryFpImportResultRequest::getPageSize()const
{
	return pageSize_;
}

void QueryFpImportResultRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryFpImportResultRequest::getEndTime()const
{
	return endTime_;
}

void QueryFpImportResultRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long QueryFpImportResultRequest::getPageIndex()const
{
	return pageIndex_;
}

void QueryFpImportResultRequest::setPageIndex(long pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

long QueryFpImportResultRequest::getStartTime()const
{
	return startTime_;
}

void QueryFpImportResultRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long QueryFpImportResultRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryFpImportResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryFpImportResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryFpImportResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

