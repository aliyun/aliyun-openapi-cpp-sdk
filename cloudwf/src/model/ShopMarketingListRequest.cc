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

#include <alibabacloud/cloudwf/model/ShopMarketingListRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopMarketingListRequest;

ShopMarketingListRequest::ShopMarketingListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopMarketingList")
{}

ShopMarketingListRequest::~ShopMarketingListRequest()
{}

std::string ShopMarketingListRequest::getName()const
{
	return name_;
}

void ShopMarketingListRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int ShopMarketingListRequest::getPage()const
{
	return page_;
}

void ShopMarketingListRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

int ShopMarketingListRequest::getPer()const
{
	return per_;
}

void ShopMarketingListRequest::setPer(int per)
{
	per_ = per;
	setCoreParameter("Per", std::to_string(per));
}

std::string ShopMarketingListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopMarketingListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long ShopMarketingListRequest::getSid()const
{
	return sid_;
}

void ShopMarketingListRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", std::to_string(sid));
}

