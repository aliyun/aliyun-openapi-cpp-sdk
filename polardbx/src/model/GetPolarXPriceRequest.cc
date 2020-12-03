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

#include <alibabacloud/polardbx/model/GetPolarXPriceRequest.h>

using AlibabaCloud::Polardbx::Model::GetPolarXPriceRequest;

GetPolarXPriceRequest::GetPolarXPriceRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "GetPolarXPrice")
{
	setMethod(HttpRequest::Method::Post);
}

GetPolarXPriceRequest::~GetPolarXPriceRequest()
{}

std::string GetPolarXPriceRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void GetPolarXPriceRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string GetPolarXPriceRequest::getRegionId()const
{
	return regionId_;
}

void GetPolarXPriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetPolarXPriceRequest::getNodeCount()const
{
	return nodeCount_;
}

void GetPolarXPriceRequest::setNodeCount(const std::string& nodeCount)
{
	nodeCount_ = nodeCount;
	setParameter("NodeCount", nodeCount);
}

