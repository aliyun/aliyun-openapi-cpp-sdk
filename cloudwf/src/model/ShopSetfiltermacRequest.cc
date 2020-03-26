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

#include <alibabacloud/cloudwf/model/ShopSetfiltermacRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopSetfiltermacRequest;

ShopSetfiltermacRequest::ShopSetfiltermacRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopSetfiltermac")
{
	setMethod(HttpRequest::Method::Post);
}

ShopSetfiltermacRequest::~ShopSetfiltermacRequest()
{}

std::string ShopSetfiltermacRequest::getMac()const
{
	return mac_;
}

void ShopSetfiltermacRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setParameter("Mac", mac);
}

std::string ShopSetfiltermacRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopSetfiltermacRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ShopSetfiltermacRequest::getSid()const
{
	return sid_;
}

void ShopSetfiltermacRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

