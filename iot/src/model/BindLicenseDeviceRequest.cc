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

#include <alibabacloud/iot/model/BindLicenseDeviceRequest.h>

using AlibabaCloud::Iot::Model::BindLicenseDeviceRequest;

BindLicenseDeviceRequest::BindLicenseDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BindLicenseDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BindLicenseDeviceRequest::~BindLicenseDeviceRequest()
{}

std::vector<std::string> BindLicenseDeviceRequest::getDeviceNameList()const
{
	return deviceNameList_;
}

void BindLicenseDeviceRequest::setDeviceNameList(const std::vector<std::string>& deviceNameList)
{
	deviceNameList_ = deviceNameList;
	for(int dep1 = 0; dep1!= deviceNameList.size(); dep1++) {
		setBodyParameter("DeviceNameList."+ std::to_string(dep1), deviceNameList.at(dep1));
	}
}

std::string BindLicenseDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BindLicenseDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> BindLicenseDeviceRequest::getIotIdList()const
{
	return iotIdList_;
}

void BindLicenseDeviceRequest::setIotIdList(const std::vector<std::string>& iotIdList)
{
	iotIdList_ = iotIdList;
	for(int dep1 = 0; dep1!= iotIdList.size(); dep1++) {
		setBodyParameter("IotIdList."+ std::to_string(dep1), iotIdList.at(dep1));
	}
}

std::string BindLicenseDeviceRequest::getProductKey()const
{
	return productKey_;
}

void BindLicenseDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string BindLicenseDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void BindLicenseDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BindLicenseDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void BindLicenseDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string BindLicenseDeviceRequest::getLicenseCode()const
{
	return licenseCode_;
}

void BindLicenseDeviceRequest::setLicenseCode(const std::string& licenseCode)
{
	licenseCode_ = licenseCode;
	setParameter("LicenseCode", licenseCode);
}

