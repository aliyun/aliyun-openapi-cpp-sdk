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

#include <alibabacloud/iot/model/BatchCheckDeviceNamesRequest.h>

using AlibabaCloud::Iot::Model::BatchCheckDeviceNamesRequest;

BatchCheckDeviceNamesRequest::BatchCheckDeviceNamesRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchCheckDeviceNames")
{
	setMethod(HttpRequest::Method::Post);
}

BatchCheckDeviceNamesRequest::~BatchCheckDeviceNamesRequest()
{}

std::string BatchCheckDeviceNamesRequest::getRealTenantId()const
{
	return realTenantId_;
}

void BatchCheckDeviceNamesRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string BatchCheckDeviceNamesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchCheckDeviceNamesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BatchCheckDeviceNamesRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void BatchCheckDeviceNamesRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::vector<BatchCheckDeviceNamesRequest::DeviceNameList> BatchCheckDeviceNamesRequest::getDeviceNameList()const
{
	return deviceNameList_;
}

void BatchCheckDeviceNamesRequest::setDeviceNameList(const std::vector<DeviceNameList>& deviceNameList)
{
	deviceNameList_ = deviceNameList;
	for(int dep1 = 0; dep1!= deviceNameList.size(); dep1++) {
		auto deviceNameListObj = deviceNameList.at(dep1);
		std::string deviceNameListObjStr = "DeviceNameList." + std::to_string(dep1 + 1);
		setParameter(deviceNameListObjStr + ".DeviceNickname", deviceNameListObj.deviceNickname);
		setParameter(deviceNameListObjStr + ".DeviceName", deviceNameListObj.deviceName);
	}
}

std::string BatchCheckDeviceNamesRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchCheckDeviceNamesRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BatchCheckDeviceNamesRequest::getProductKey()const
{
	return productKey_;
}

void BatchCheckDeviceNamesRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string BatchCheckDeviceNamesRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchCheckDeviceNamesRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchCheckDeviceNamesRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchCheckDeviceNamesRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<std::string> BatchCheckDeviceNamesRequest::getDeviceName()const
{
	return deviceName_;
}

void BatchCheckDeviceNamesRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int dep1 = 0; dep1!= deviceName.size(); dep1++) {
		setBodyParameter("DeviceName."+ std::to_string(dep1), deviceName.at(dep1));
	}
}

