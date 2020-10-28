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

#include <alibabacloud/drds/model/ReleaseHiStoreInstanceRequest.h>

using AlibabaCloud::Drds::Model::ReleaseHiStoreInstanceRequest;

ReleaseHiStoreInstanceRequest::ReleaseHiStoreInstanceRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ReleaseHiStoreInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseHiStoreInstanceRequest::~ReleaseHiStoreInstanceRequest()
{}

std::string ReleaseHiStoreInstanceRequest::getHistoreInstanceId()const
{
	return historeInstanceId_;
}

void ReleaseHiStoreInstanceRequest::setHistoreInstanceId(const std::string& historeInstanceId)
{
	historeInstanceId_ = historeInstanceId;
	setParameter("HistoreInstanceId", historeInstanceId);
}

std::string ReleaseHiStoreInstanceRequest::getDrdsPassword()const
{
	return drdsPassword_;
}

void ReleaseHiStoreInstanceRequest::setDrdsPassword(const std::string& drdsPassword)
{
	drdsPassword_ = drdsPassword;
	setParameter("DrdsPassword", drdsPassword);
}

std::string ReleaseHiStoreInstanceRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ReleaseHiStoreInstanceRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ReleaseHiStoreInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseHiStoreInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

