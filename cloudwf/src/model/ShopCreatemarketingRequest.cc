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

#include <alibabacloud/cloudwf/model/ShopCreatemarketingRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopCreatemarketingRequest;

ShopCreatemarketingRequest::ShopCreatemarketingRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopCreatemarketing")
{}

ShopCreatemarketingRequest::~ShopCreatemarketingRequest()
{}

std::string ShopCreatemarketingRequest::getEtime()const
{
	return etime_;
}

void ShopCreatemarketingRequest::setEtime(const std::string& etime)
{
	etime_ = etime;
	setCoreParameter("Etime", etime);
}

std::string ShopCreatemarketingRequest::getName()const
{
	return name_;
}

void ShopCreatemarketingRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ShopCreatemarketingRequest::getStime()const
{
	return stime_;
}

void ShopCreatemarketingRequest::setStime(const std::string& stime)
{
	stime_ = stime;
	setCoreParameter("Stime", stime);
}

std::string ShopCreatemarketingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopCreatemarketingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long ShopCreatemarketingRequest::getSid()const
{
	return sid_;
}

void ShopCreatemarketingRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", sid);
}

