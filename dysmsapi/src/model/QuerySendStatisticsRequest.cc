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

#include <alibabacloud/dysmsapi/model/QuerySendStatisticsRequest.h>

using AlibabaCloud::Dysmsapi::Model::QuerySendStatisticsRequest;

QuerySendStatisticsRequest::QuerySendStatisticsRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "QuerySendStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySendStatisticsRequest::~QuerySendStatisticsRequest()
{}

long QuerySendStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySendStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int QuerySendStatisticsRequest::getIsGlobe()const
{
	return isGlobe_;
}

void QuerySendStatisticsRequest::setIsGlobe(int isGlobe)
{
	isGlobe_ = isGlobe;
	setParameter("IsGlobe", std::to_string(isGlobe));
}

std::string QuerySendStatisticsRequest::getStartDate()const
{
	return startDate_;
}

void QuerySendStatisticsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string QuerySendStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySendStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int QuerySendStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySendStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QuerySendStatisticsRequest::getPageIndex()const
{
	return pageIndex_;
}

void QuerySendStatisticsRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string QuerySendStatisticsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySendStatisticsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySendStatisticsRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySendStatisticsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QuerySendStatisticsRequest::getEndDate()const
{
	return endDate_;
}

void QuerySendStatisticsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

