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

#include <alibabacloud/cloudwf/model/CeaseInstanceRequest.h>

using AlibabaCloud::Cloudwf::Model::CeaseInstanceRequest;

CeaseInstanceRequest::CeaseInstanceRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "CeaseInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CeaseInstanceRequest::~CeaseInstanceRequest()
{}

std::string CeaseInstanceRequest::getTraceId()const
{
	return traceId_;
}

void CeaseInstanceRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setParameter("TraceId", traceId);
}

std::string CeaseInstanceRequest::getSpMsg()const
{
	return spMsg_;
}

void CeaseInstanceRequest::setSpMsg(const std::string& spMsg)
{
	spMsg_ = spMsg;
	setParameter("SpMsg", spMsg);
}

std::string CeaseInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CeaseInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

