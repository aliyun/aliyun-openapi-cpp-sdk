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

#include <alibabacloud/cdn/model/DescribeLiveStreamsOnlineListRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamsOnlineListRequest;

DescribeLiveStreamsOnlineListRequest::DescribeLiveStreamsOnlineListRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamsOnlineList")
{}

DescribeLiveStreamsOnlineListRequest::~DescribeLiveStreamsOnlineListRequest()
{}

std::string DescribeLiveStreamsOnlineListRequest::getStreamType()const
{
	return streamType_;
}

void DescribeLiveStreamsOnlineListRequest::setStreamType(const std::string& streamType)
{
	streamType_ = streamType;
	setCoreParameter("StreamType", streamType);
}

std::string DescribeLiveStreamsOnlineListRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamsOnlineListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamsOnlineListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamsOnlineListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamsOnlineListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamsOnlineListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int DescribeLiveStreamsOnlineListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamsOnlineListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeLiveStreamsOnlineListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamsOnlineListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeLiveStreamsOnlineListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeLiveStreamsOnlineListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

