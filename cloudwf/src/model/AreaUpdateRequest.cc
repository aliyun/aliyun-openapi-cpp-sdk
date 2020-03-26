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

#include <alibabacloud/cloudwf/model/AreaUpdateRequest.h>

using AlibabaCloud::Cloudwf::Model::AreaUpdateRequest;

AreaUpdateRequest::AreaUpdateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "AreaUpdate")
{
	setMethod(HttpRequest::Method::Post);
}

AreaUpdateRequest::~AreaUpdateRequest()
{}

std::string AreaUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AreaUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long AreaUpdateRequest::getSid()const
{
	return sid_;
}

void AreaUpdateRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

std::string AreaUpdateRequest::getName()const
{
	return name_;
}

void AreaUpdateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AreaUpdateRequest::getDids()const
{
	return dids_;
}

void AreaUpdateRequest::setDids(const std::string& dids)
{
	dids_ = dids;
	setParameter("Dids", dids);
}

long AreaUpdateRequest::getAid()const
{
	return aid_;
}

void AreaUpdateRequest::setAid(long aid)
{
	aid_ = aid;
	setParameter("Aid", std::to_string(aid));
}

