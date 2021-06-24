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

#include <alibabacloud/dts/model/TransferInstanceClassRequest.h>

using AlibabaCloud::Dts::Model::TransferInstanceClassRequest;

TransferInstanceClassRequest::TransferInstanceClassRequest() :
	RpcServiceRequest("dts", "2020-01-01", "TransferInstanceClass")
{
	setMethod(HttpRequest::Method::Post);
}

TransferInstanceClassRequest::~TransferInstanceClassRequest()
{}

std::string TransferInstanceClassRequest::getInstanceClass()const
{
	return instanceClass_;
}

void TransferInstanceClassRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string TransferInstanceClassRequest::getRegionId()const
{
	return regionId_;
}

void TransferInstanceClassRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string TransferInstanceClassRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void TransferInstanceClassRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string TransferInstanceClassRequest::getOrderType()const
{
	return orderType_;
}

void TransferInstanceClassRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

