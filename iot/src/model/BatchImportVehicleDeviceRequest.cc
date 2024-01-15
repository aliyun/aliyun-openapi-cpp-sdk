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

#include <alibabacloud/iot/model/BatchImportVehicleDeviceRequest.h>

using AlibabaCloud::Iot::Model::BatchImportVehicleDeviceRequest;

BatchImportVehicleDeviceRequest::BatchImportVehicleDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchImportVehicleDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BatchImportVehicleDeviceRequest::~BatchImportVehicleDeviceRequest()
{}

std::string BatchImportVehicleDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchImportVehicleDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BatchImportVehicleDeviceRequest::getProductKey()const
{
	return productKey_;
}

void BatchImportVehicleDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::vector<BatchImportVehicleDeviceRequest::DeviceList> BatchImportVehicleDeviceRequest::getDeviceList()const
{
	return deviceList_;
}

void BatchImportVehicleDeviceRequest::setDeviceList(const std::vector<DeviceList>& deviceList)
{
	deviceList_ = deviceList;
	for(int dep1 = 0; dep1!= deviceList.size(); dep1++) {
		auto deviceListObj = deviceList.at(dep1);
		std::string deviceListObjStr = "DeviceList." + std::to_string(dep1 + 1);
		setParameter(deviceListObjStr + ".DeviceSecret", deviceListObj.deviceSecret);
		setParameter(deviceListObjStr + ".DeviceName", deviceListObj.deviceName);
		setParameter(deviceListObjStr + ".DeviceId", deviceListObj.deviceId);
		setParameter(deviceListObjStr + ".Manufacturer", deviceListObj.manufacturer);
		setParameter(deviceListObjStr + ".DeviceModel", deviceListObj.deviceModel);
	}
}

std::string BatchImportVehicleDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchImportVehicleDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchImportVehicleDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchImportVehicleDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

