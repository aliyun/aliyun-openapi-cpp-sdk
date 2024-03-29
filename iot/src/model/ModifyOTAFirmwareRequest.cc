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

#include <alibabacloud/iot/model/ModifyOTAFirmwareRequest.h>

using AlibabaCloud::Iot::Model::ModifyOTAFirmwareRequest;

ModifyOTAFirmwareRequest::ModifyOTAFirmwareRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ModifyOTAFirmware")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyOTAFirmwareRequest::~ModifyOTAFirmwareRequest()
{}

std::string ModifyOTAFirmwareRequest::getFirmwareUdi()const
{
	return firmwareUdi_;
}

void ModifyOTAFirmwareRequest::setFirmwareUdi(const std::string& firmwareUdi)
{
	firmwareUdi_ = firmwareUdi;
	setParameter("FirmwareUdi", firmwareUdi);
}

std::string ModifyOTAFirmwareRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyOTAFirmwareRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyOTAFirmwareRequest::getFirmwareDesc()const
{
	return firmwareDesc_;
}

void ModifyOTAFirmwareRequest::setFirmwareDesc(const std::string& firmwareDesc)
{
	firmwareDesc_ = firmwareDesc;
	setParameter("FirmwareDesc", firmwareDesc);
}

std::string ModifyOTAFirmwareRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ModifyOTAFirmwareRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ModifyOTAFirmwareRequest::getFirmwareName()const
{
	return firmwareName_;
}

void ModifyOTAFirmwareRequest::setFirmwareName(const std::string& firmwareName)
{
	firmwareName_ = firmwareName;
	setParameter("FirmwareName", firmwareName);
}

std::string ModifyOTAFirmwareRequest::getFirmwareId()const
{
	return firmwareId_;
}

void ModifyOTAFirmwareRequest::setFirmwareId(const std::string& firmwareId)
{
	firmwareId_ = firmwareId;
	setParameter("FirmwareId", firmwareId);
}

std::string ModifyOTAFirmwareRequest::getProductKey()const
{
	return productKey_;
}

void ModifyOTAFirmwareRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ModifyOTAFirmwareRequest::getApiProduct()const
{
	return apiProduct_;
}

void ModifyOTAFirmwareRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ModifyOTAFirmwareRequest::getApiRevision()const
{
	return apiRevision_;
}

void ModifyOTAFirmwareRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

