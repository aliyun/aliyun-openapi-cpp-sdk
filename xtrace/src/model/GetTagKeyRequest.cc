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

#include <alibabacloud/xtrace/model/GetTagKeyRequest.h>

using AlibabaCloud::Xtrace::Model::GetTagKeyRequest;

GetTagKeyRequest::GetTagKeyRequest() :
	RpcServiceRequest("xtrace", "2019-08-08", "GetTagKey")
{
	setMethod(HttpRequest::Method::Post);
}

GetTagKeyRequest::~GetTagKeyRequest()
{}

std::string GetTagKeyRequest::getRegionId()const
{
	return regionId_;
}

void GetTagKeyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long GetTagKeyRequest::getEndTime()const
{
	return endTime_;
}

void GetTagKeyRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string GetTagKeyRequest::getServiceName()const
{
	return serviceName_;
}

void GetTagKeyRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

long GetTagKeyRequest::getStartTime()const
{
	return startTime_;
}

void GetTagKeyRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string GetTagKeyRequest::getSpanName()const
{
	return spanName_;
}

void GetTagKeyRequest::setSpanName(const std::string& spanName)
{
	spanName_ = spanName;
	setParameter("SpanName", spanName);
}

