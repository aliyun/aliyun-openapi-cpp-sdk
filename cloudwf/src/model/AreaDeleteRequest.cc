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

#include <alibabacloud/cloudwf/model/AreaDeleteRequest.h>

using AlibabaCloud::Cloudwf::Model::AreaDeleteRequest;

AreaDeleteRequest::AreaDeleteRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "AreaDelete")
{
	setMethod(HttpRequest::Method::Post);
}

AreaDeleteRequest::~AreaDeleteRequest()
{}

std::string AreaDeleteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AreaDeleteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long AreaDeleteRequest::getSid()const
{
	return sid_;
}

void AreaDeleteRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

long AreaDeleteRequest::getAid()const
{
	return aid_;
}

void AreaDeleteRequest::setAid(long aid)
{
	aid_ = aid;
	setParameter("Aid", std::to_string(aid));
}

