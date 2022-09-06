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

#include <alibabacloud/iot/model/ReBindLicenseDeviceRequest.h>

using AlibabaCloud::Iot::Model::ReBindLicenseDeviceRequest;

ReBindLicenseDeviceRequest::ReBindLicenseDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ReBindLicenseDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ReBindLicenseDeviceRequest::~ReBindLicenseDeviceRequest()
{}

std::vector<std::string> ReBindLicenseDeviceRequest::getDeviceNameList()const
{
	return deviceNameList_;
}

void ReBindLicenseDeviceRequest::setDeviceNameList(const std::vector<std::string>& deviceNameList)
{
	deviceNameList_ = deviceNameList;
	for(int dep1 = 0; dep1!= deviceNameList.size(); dep1++) {
		setBodyParameter("DeviceNameList."+ std::to_string(dep1), deviceNameList.at(dep1));
	}
}

std::string ReBindLicenseDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ReBindLicenseDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ReBindLicenseDeviceRequest::getProductKey()const
{
	return productKey_;
}

void ReBindLicenseDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ReBindLicenseDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void ReBindLicenseDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ReBindLicenseDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void ReBindLicenseDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ReBindLicenseDeviceRequest::getLicenseCode()const
{
	return licenseCode_;
}

void ReBindLicenseDeviceRequest::setLicenseCode(const std::string& licenseCode)
{
	licenseCode_ = licenseCode;
	setParameter("LicenseCode", licenseCode);
}

