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

#include <alibabacloud/iot/model/UpdateThingModelValidationConfigRequest.h>

using AlibabaCloud::Iot::Model::UpdateThingModelValidationConfigRequest;

UpdateThingModelValidationConfigRequest::UpdateThingModelValidationConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateThingModelValidationConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateThingModelValidationConfigRequest::~UpdateThingModelValidationConfigRequest()
{}

int UpdateThingModelValidationConfigRequest::getValidateType()const
{
	return validateType_;
}

void UpdateThingModelValidationConfigRequest::setValidateType(int validateType)
{
	validateType_ = validateType;
	setParameter("ValidateType", std::to_string(validateType));
}

std::string UpdateThingModelValidationConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateThingModelValidationConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateThingModelValidationConfigRequest::getProductKey()const
{
	return productKey_;
}

void UpdateThingModelValidationConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UpdateThingModelValidationConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateThingModelValidationConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateThingModelValidationConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateThingModelValidationConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

