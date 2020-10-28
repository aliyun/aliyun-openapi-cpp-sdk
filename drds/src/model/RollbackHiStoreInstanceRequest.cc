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

#include <alibabacloud/drds/model/RollbackHiStoreInstanceRequest.h>

using AlibabaCloud::Drds::Model::RollbackHiStoreInstanceRequest;

RollbackHiStoreInstanceRequest::RollbackHiStoreInstanceRequest() :
	RpcServiceRequest("drds", "2019-01-23", "RollbackHiStoreInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RollbackHiStoreInstanceRequest::~RollbackHiStoreInstanceRequest()
{}

std::string RollbackHiStoreInstanceRequest::getHistoreInstanceId()const
{
	return historeInstanceId_;
}

void RollbackHiStoreInstanceRequest::setHistoreInstanceId(const std::string& historeInstanceId)
{
	historeInstanceId_ = historeInstanceId;
	setParameter("HistoreInstanceId", historeInstanceId);
}

std::string RollbackHiStoreInstanceRequest::getDrdsPassword()const
{
	return drdsPassword_;
}

void RollbackHiStoreInstanceRequest::setDrdsPassword(const std::string& drdsPassword)
{
	drdsPassword_ = drdsPassword;
	setParameter("DrdsPassword", drdsPassword);
}

std::string RollbackHiStoreInstanceRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void RollbackHiStoreInstanceRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string RollbackHiStoreInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RollbackHiStoreInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

