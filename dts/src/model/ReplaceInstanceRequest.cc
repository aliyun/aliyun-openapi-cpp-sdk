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

#include <alibabacloud/dts/model/ReplaceInstanceRequest.h>

using AlibabaCloud::Dts::Model::ReplaceInstanceRequest;

ReplaceInstanceRequest::ReplaceInstanceRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ReplaceInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ReplaceInstanceRequest::~ReplaceInstanceRequest()
{}

std::string ReplaceInstanceRequest::getNewInstanceId()const
{
	return newInstanceId_;
}

void ReplaceInstanceRequest::setNewInstanceId(const std::string& newInstanceId)
{
	newInstanceId_ = newInstanceId;
	setParameter("NewInstanceId", newInstanceId);
}

std::string ReplaceInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ReplaceInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReplaceInstanceRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void ReplaceInstanceRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string ReplaceInstanceRequest::getChargeType()const
{
	return chargeType_;
}

void ReplaceInstanceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

