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

#include <alibabacloud/cloudwf/model/ShopDeleteRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopDeleteRequest;

ShopDeleteRequest::ShopDeleteRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopDelete")
{}

ShopDeleteRequest::~ShopDeleteRequest()
{}

std::string ShopDeleteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopDeleteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long ShopDeleteRequest::getSid()const
{
	return sid_;
}

void ShopDeleteRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", std::to_string(sid));
}

