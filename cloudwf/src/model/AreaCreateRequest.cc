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

#include <alibabacloud/cloudwf/model/AreaCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::AreaCreateRequest;

AreaCreateRequest::AreaCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "AreaCreate")
{
	setMethod(HttpRequest::Method::Post);
}

AreaCreateRequest::~AreaCreateRequest()
{}

std::string AreaCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AreaCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long AreaCreateRequest::getSid()const
{
	return sid_;
}

void AreaCreateRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

std::string AreaCreateRequest::getName()const
{
	return name_;
}

void AreaCreateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AreaCreateRequest::getDids()const
{
	return dids_;
}

void AreaCreateRequest::setDids(const std::string& dids)
{
	dids_ = dids;
	setParameter("Dids", dids);
}

