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

#include <alibabacloud/iot/model/StartPTDetectionRequest.h>

using AlibabaCloud::Iot::Model::StartPTDetectionRequest;

StartPTDetectionRequest::StartPTDetectionRequest() :
	RpcServiceRequest("iot", "2018-01-20", "StartPTDetection")
{
	setMethod(HttpRequest::Method::Post);
}

StartPTDetectionRequest::~StartPTDetectionRequest()
{}

std::string StartPTDetectionRequest::getPowerStationUid()const
{
	return powerStationUid_;
}

void StartPTDetectionRequest::setPowerStationUid(const std::string& powerStationUid)
{
	powerStationUid_ = powerStationUid;
	setParameter("PowerStationUid", powerStationUid);
}

std::string StartPTDetectionRequest::getData()const
{
	return data_;
}

void StartPTDetectionRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

int StartPTDetectionRequest::getPowerPlantsNumber()const
{
	return powerPlantsNumber_;
}

void StartPTDetectionRequest::setPowerPlantsNumber(int powerPlantsNumber)
{
	powerPlantsNumber_ = powerPlantsNumber;
	setParameter("PowerPlantsNumber", std::to_string(powerPlantsNumber));
}

std::string StartPTDetectionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void StartPTDetectionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string StartPTDetectionRequest::getAlgorithmInstanceUid()const
{
	return algorithmInstanceUid_;
}

void StartPTDetectionRequest::setAlgorithmInstanceUid(const std::string& algorithmInstanceUid)
{
	algorithmInstanceUid_ = algorithmInstanceUid;
	setParameter("AlgorithmInstanceUid", algorithmInstanceUid);
}

std::string StartPTDetectionRequest::getFileName()const
{
	return fileName_;
}

void StartPTDetectionRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setParameter("FileName", fileName);
}

std::string StartPTDetectionRequest::getApiProduct()const
{
	return apiProduct_;
}

void StartPTDetectionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

long StartPTDetectionRequest::getDataCollectionTime()const
{
	return dataCollectionTime_;
}

void StartPTDetectionRequest::setDataCollectionTime(long dataCollectionTime)
{
	dataCollectionTime_ = dataCollectionTime;
	setParameter("DataCollectionTime", std::to_string(dataCollectionTime));
}

std::string StartPTDetectionRequest::getApiRevision()const
{
	return apiRevision_;
}

void StartPTDetectionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int StartPTDetectionRequest::getSensitivity()const
{
	return sensitivity_;
}

void StartPTDetectionRequest::setSensitivity(int sensitivity)
{
	sensitivity_ = sensitivity;
	setParameter("Sensitivity", std::to_string(sensitivity));
}

