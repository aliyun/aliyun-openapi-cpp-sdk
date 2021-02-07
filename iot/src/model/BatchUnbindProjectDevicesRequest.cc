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

#include <alibabacloud/iot/model/BatchUnbindProjectDevicesRequest.h>

using AlibabaCloud::Iot::Model::BatchUnbindProjectDevicesRequest;

BatchUnbindProjectDevicesRequest::BatchUnbindProjectDevicesRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchUnbindProjectDevices")
{
	setMethod(HttpRequest::Method::Post);
}

BatchUnbindProjectDevicesRequest::~BatchUnbindProjectDevicesRequest()
{}

std::string BatchUnbindProjectDevicesRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchUnbindProjectDevicesRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string BatchUnbindProjectDevicesRequest::getProjectId()const
{
	return projectId_;
}

void BatchUnbindProjectDevicesRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::vector<BatchUnbindProjectDevicesRequest::Devices> BatchUnbindProjectDevicesRequest::getDevices()const
{
	return devices_;
}

void BatchUnbindProjectDevicesRequest::setDevices(const std::vector<Devices>& devices)
{
	devices_ = devices;
	for(int dep1 = 0; dep1!= devices.size(); dep1++) {
		auto devicesObj = devices.at(dep1);
		std::string devicesObjStr = "Devices." + std::to_string(dep1 + 1);
		setParameter(devicesObjStr + ".DeviceName", devicesObj.deviceName);
		setParameter(devicesObjStr + ".ProductKey", devicesObj.productKey);
	}
}

std::string BatchUnbindProjectDevicesRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchUnbindProjectDevicesRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchUnbindProjectDevicesRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchUnbindProjectDevicesRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

