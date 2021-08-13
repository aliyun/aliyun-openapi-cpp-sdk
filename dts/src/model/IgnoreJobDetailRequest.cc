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

#include <alibabacloud/dts/model/IgnoreJobDetailRequest.h>

using AlibabaCloud::Dts::Model::IgnoreJobDetailRequest;

IgnoreJobDetailRequest::IgnoreJobDetailRequest() :
	RpcServiceRequest("dts", "2020-01-01", "IgnoreJobDetail")
{
	setMethod(HttpRequest::Method::Post);
}

IgnoreJobDetailRequest::~IgnoreJobDetailRequest()
{}

std::string IgnoreJobDetailRequest::getRegionId()const
{
	return regionId_;
}

void IgnoreJobDetailRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string IgnoreJobDetailRequest::getJobCode()const
{
	return jobCode_;
}

void IgnoreJobDetailRequest::setJobCode(const std::string& jobCode)
{
	jobCode_ = jobCode;
	setParameter("JobCode", jobCode);
}

std::string IgnoreJobDetailRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void IgnoreJobDetailRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string IgnoreJobDetailRequest::getId()const
{
	return id_;
}

void IgnoreJobDetailRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string IgnoreJobDetailRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void IgnoreJobDetailRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

std::string IgnoreJobDetailRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void IgnoreJobDetailRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

