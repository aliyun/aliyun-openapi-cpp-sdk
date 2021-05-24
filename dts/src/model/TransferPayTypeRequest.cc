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

#include <alibabacloud/dts/model/TransferPayTypeRequest.h>

using AlibabaCloud::Dts::Model::TransferPayTypeRequest;

TransferPayTypeRequest::TransferPayTypeRequest() :
	RpcServiceRequest("dts", "2020-01-01", "TransferPayType")
{
	setMethod(HttpRequest::Method::Post);
}

TransferPayTypeRequest::~TransferPayTypeRequest()
{}

std::string TransferPayTypeRequest::getPeriod()const
{
	return period_;
}

void TransferPayTypeRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string TransferPayTypeRequest::getBuyCount()const
{
	return buyCount_;
}

void TransferPayTypeRequest::setBuyCount(const std::string& buyCount)
{
	buyCount_ = buyCount;
	setParameter("BuyCount", buyCount);
}

std::string TransferPayTypeRequest::getInstanceClass()const
{
	return instanceClass_;
}

void TransferPayTypeRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string TransferPayTypeRequest::getRegionId()const
{
	return regionId_;
}

void TransferPayTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string TransferPayTypeRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void TransferPayTypeRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string TransferPayTypeRequest::getChargeType()const
{
	return chargeType_;
}

void TransferPayTypeRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

