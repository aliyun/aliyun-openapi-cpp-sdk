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

#include <alibabacloud/cloudwf/model/AreaShowListRequest.h>

using AlibabaCloud::Cloudwf::Model::AreaShowListRequest;

AreaShowListRequest::AreaShowListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "AreaShowList")
{
	setMethod(HttpRequest::Method::Post);
}

AreaShowListRequest::~AreaShowListRequest()
{}

std::string AreaShowListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AreaShowListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long AreaShowListRequest::getSid()const
{
	return sid_;
}

void AreaShowListRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

int AreaShowListRequest::getPage()const
{
	return page_;
}

void AreaShowListRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

int AreaShowListRequest::getPer()const
{
	return per_;
}

void AreaShowListRequest::setPer(int per)
{
	per_ = per;
	setParameter("Per", std::to_string(per));
}

