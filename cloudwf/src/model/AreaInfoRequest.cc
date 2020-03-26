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

#include <alibabacloud/cloudwf/model/AreaInfoRequest.h>

using AlibabaCloud::Cloudwf::Model::AreaInfoRequest;

AreaInfoRequest::AreaInfoRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "AreaInfo")
{
	setMethod(HttpRequest::Method::Post);
}

AreaInfoRequest::~AreaInfoRequest()
{}

std::string AreaInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AreaInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long AreaInfoRequest::getSid()const
{
	return sid_;
}

void AreaInfoRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

long AreaInfoRequest::getAid()const
{
	return aid_;
}

void AreaInfoRequest::setAid(long aid)
{
	aid_ = aid;
	setParameter("Aid", std::to_string(aid));
}

