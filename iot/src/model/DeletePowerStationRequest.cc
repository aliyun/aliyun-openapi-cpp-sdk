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

#include <alibabacloud/iot/model/DeletePowerStationRequest.h>

using AlibabaCloud::Iot::Model::DeletePowerStationRequest;

DeletePowerStationRequest::DeletePowerStationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeletePowerStation")
{
	setMethod(HttpRequest::Method::Post);
}

DeletePowerStationRequest::~DeletePowerStationRequest()
{}

std::string DeletePowerStationRequest::getPowerStationUid()const
{
	return powerStationUid_;
}

void DeletePowerStationRequest::setPowerStationUid(const std::string& powerStationUid)
{
	powerStationUid_ = powerStationUid;
	setParameter("PowerStationUid", powerStationUid);
}

std::string DeletePowerStationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeletePowerStationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeletePowerStationRequest::getAlgorithmInstanceUid()const
{
	return algorithmInstanceUid_;
}

void DeletePowerStationRequest::setAlgorithmInstanceUid(const std::string& algorithmInstanceUid)
{
	algorithmInstanceUid_ = algorithmInstanceUid;
	setParameter("AlgorithmInstanceUid", algorithmInstanceUid);
}

std::string DeletePowerStationRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeletePowerStationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeletePowerStationRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeletePowerStationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

