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

#include <alibabacloud/iot/model/BindLicenseProductRequest.h>

using AlibabaCloud::Iot::Model::BindLicenseProductRequest;

BindLicenseProductRequest::BindLicenseProductRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BindLicenseProduct")
{
	setMethod(HttpRequest::Method::Post);
}

BindLicenseProductRequest::~BindLicenseProductRequest()
{}

std::string BindLicenseProductRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BindLicenseProductRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BindLicenseProductRequest::getProductKey()const
{
	return productKey_;
}

void BindLicenseProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string BindLicenseProductRequest::getApiProduct()const
{
	return apiProduct_;
}

void BindLicenseProductRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BindLicenseProductRequest::getApiRevision()const
{
	return apiRevision_;
}

void BindLicenseProductRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string BindLicenseProductRequest::getLicenseCode()const
{
	return licenseCode_;
}

void BindLicenseProductRequest::setLicenseCode(const std::string& licenseCode)
{
	licenseCode_ = licenseCode;
	setParameter("LicenseCode", licenseCode);
}

