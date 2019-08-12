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

#include <alibabacloud/live/model/DescribeLiveRecordConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveRecordConfigRequest;

DescribeLiveRecordConfigRequest::DescribeLiveRecordConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveRecordConfig")
{}

DescribeLiveRecordConfigRequest::~DescribeLiveRecordConfigRequest()
{}

std::string DescribeLiveRecordConfigRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveRecordConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DescribeLiveRecordConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveRecordConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveRecordConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveRecordConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

int DescribeLiveRecordConfigRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveRecordConfigRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeLiveRecordConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveRecordConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeLiveRecordConfigRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeLiveRecordConfigRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeLiveRecordConfigRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveRecordConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", std::to_string(streamName));
}

std::string DescribeLiveRecordConfigRequest::getOrder()const
{
	return order_;
}

void DescribeLiveRecordConfigRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

