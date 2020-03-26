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

#include <alibabacloud/cloudwf/model/GetBidRequest.h>

using AlibabaCloud::Cloudwf::Model::GetBidRequest;

GetBidRequest::GetBidRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetBid")
{
	setMethod(HttpRequest::Method::Post);
}

GetBidRequest::~GetBidRequest()
{}

int GetBidRequest::getLength()const
{
	return length_;
}

void GetBidRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string GetBidRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetBidRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int GetBidRequest::getPageIndex()const
{
	return pageIndex_;
}

void GetBidRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

