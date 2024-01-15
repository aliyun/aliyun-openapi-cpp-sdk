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

#include <alibabacloud/iot/model/BatchCheckVehicleDeviceRequest.h>

using AlibabaCloud::Iot::Model::BatchCheckVehicleDeviceRequest;

BatchCheckVehicleDeviceRequest::BatchCheckVehicleDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchCheckVehicleDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BatchCheckVehicleDeviceRequest::~BatchCheckVehicleDeviceRequest()
{}

std::string BatchCheckVehicleDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchCheckVehicleDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BatchCheckVehicleDeviceRequest::getProductKey()const
{
	return productKey_;
}

void BatchCheckVehicleDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::vector<BatchCheckVehicleDeviceRequest::DeviceList> BatchCheckVehicleDeviceRequest::getDeviceList()const
{
	return deviceList_;
}

void BatchCheckVehicleDeviceRequest::setDeviceList(const std::vector<DeviceList>& deviceList)
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

std::string BatchCheckVehicleDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchCheckVehicleDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchCheckVehicleDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchCheckVehicleDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

