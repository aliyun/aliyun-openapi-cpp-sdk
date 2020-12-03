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

#include <alibabacloud/polardbx/model/CancelPolarxOrderRequest.h>

using AlibabaCloud::Polardbx::Model::CancelPolarxOrderRequest;

CancelPolarxOrderRequest::CancelPolarxOrderRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "CancelPolarxOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CancelPolarxOrderRequest::~CancelPolarxOrderRequest()
{}

std::string CancelPolarxOrderRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void CancelPolarxOrderRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string CancelPolarxOrderRequest::getRegionId()const
{
	return regionId_;
}

void CancelPolarxOrderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CancelPolarxOrderRequest::getScaleOutToken()const
{
	return scaleOutToken_;
}

void CancelPolarxOrderRequest::setScaleOutToken(const std::string& scaleOutToken)
{
	scaleOutToken_ = scaleOutToken;
	setParameter("ScaleOutToken", scaleOutToken);
}

