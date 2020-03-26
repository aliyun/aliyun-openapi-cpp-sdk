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

#include <alibabacloud/cloudwf/model/ShopGroupInfoRequest.h>

using AlibabaCloud::Cloudwf::Model::ShopGroupInfoRequest;

ShopGroupInfoRequest::ShopGroupInfoRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ShopGroupInfo")
{
	setMethod(HttpRequest::Method::Post);
}

ShopGroupInfoRequest::~ShopGroupInfoRequest()
{}

long ShopGroupInfoRequest::getGid()const
{
	return gid_;
}

void ShopGroupInfoRequest::setGid(long gid)
{
	gid_ = gid;
	setParameter("Gid", std::to_string(gid));
}

std::string ShopGroupInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ShopGroupInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

