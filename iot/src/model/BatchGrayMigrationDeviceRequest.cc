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

#include <alibabacloud/iot/model/BatchGrayMigrationDeviceRequest.h>

using AlibabaCloud::Iot::Model::BatchGrayMigrationDeviceRequest;

BatchGrayMigrationDeviceRequest::BatchGrayMigrationDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchGrayMigrationDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BatchGrayMigrationDeviceRequest::~BatchGrayMigrationDeviceRequest()
{}

std::vector<std::string> BatchGrayMigrationDeviceRequest::getDeviceNames()const
{
	return deviceNames_;
}

void BatchGrayMigrationDeviceRequest::setDeviceNames(const std::vector<std::string>& deviceNames)
{
	deviceNames_ = deviceNames;
	for(int dep1 = 0; dep1!= deviceNames.size(); dep1++) {
		setBodyParameter("DeviceNames."+ std::to_string(dep1), deviceNames.at(dep1));
	}
}

std::string BatchGrayMigrationDeviceRequest::getProductKey()const
{
	return productKey_;
}

void BatchGrayMigrationDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string BatchGrayMigrationDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchGrayMigrationDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchGrayMigrationDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchGrayMigrationDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

