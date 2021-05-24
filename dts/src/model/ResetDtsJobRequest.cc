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

#include <alibabacloud/dts/model/ResetDtsJobRequest.h>

using AlibabaCloud::Dts::Model::ResetDtsJobRequest;

ResetDtsJobRequest::ResetDtsJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ResetDtsJob")
{
	setMethod(HttpRequest::Method::Post);
}

ResetDtsJobRequest::~ResetDtsJobRequest()
{}

std::string ResetDtsJobRequest::getRegionId()const
{
	return regionId_;
}

void ResetDtsJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ResetDtsJobRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void ResetDtsJobRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string ResetDtsJobRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void ResetDtsJobRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

std::string ResetDtsJobRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ResetDtsJobRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

