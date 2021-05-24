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

#include <alibabacloud/dts/model/DeleteDtsJobRequest.h>

using AlibabaCloud::Dts::Model::DeleteDtsJobRequest;

DeleteDtsJobRequest::DeleteDtsJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DeleteDtsJob")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDtsJobRequest::~DeleteDtsJobRequest()
{}

std::string DeleteDtsJobRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDtsJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDtsJobRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void DeleteDtsJobRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string DeleteDtsJobRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void DeleteDtsJobRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

std::string DeleteDtsJobRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void DeleteDtsJobRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

