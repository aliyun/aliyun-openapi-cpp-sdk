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

#include <alibabacloud/iot/model/AddPowerStationRequest.h>

using AlibabaCloud::Iot::Model::AddPowerStationRequest;

AddPowerStationRequest::AddPowerStationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "AddPowerStation")
{
	setMethod(HttpRequest::Method::Post);
}

AddPowerStationRequest::~AddPowerStationRequest()
{}

int AddPowerStationRequest::getRatedPower()const
{
	return ratedPower_;
}

void AddPowerStationRequest::setRatedPower(int ratedPower)
{
	ratedPower_ = ratedPower;
	setParameter("RatedPower", std::to_string(ratedPower));
}

std::string AddPowerStationRequest::getDescription()const
{
	return description_;
}

void AddPowerStationRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AddPowerStationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void AddPowerStationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string AddPowerStationRequest::getAlgorithmInstanceUid()const
{
	return algorithmInstanceUid_;
}

void AddPowerStationRequest::setAlgorithmInstanceUid(const std::string& algorithmInstanceUid)
{
	algorithmInstanceUid_ = algorithmInstanceUid;
	setParameter("AlgorithmInstanceUid", algorithmInstanceUid);
}

std::string AddPowerStationRequest::getPowerStationName()const
{
	return powerStationName_;
}

void AddPowerStationRequest::setPowerStationName(const std::string& powerStationName)
{
	powerStationName_ = powerStationName;
	setParameter("PowerStationName", powerStationName);
}

std::string AddPowerStationRequest::getApiProduct()const
{
	return apiProduct_;
}

void AddPowerStationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string AddPowerStationRequest::getApiRevision()const
{
	return apiRevision_;
}

void AddPowerStationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

