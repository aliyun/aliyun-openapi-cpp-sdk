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

#include <alibabacloud/iot/model/PublishThingModelAsyncRequest.h>

using AlibabaCloud::Iot::Model::PublishThingModelAsyncRequest;

PublishThingModelAsyncRequest::PublishThingModelAsyncRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PublishThingModelAsync")
{
	setMethod(HttpRequest::Method::Post);
}

PublishThingModelAsyncRequest::~PublishThingModelAsyncRequest()
{}

std::string PublishThingModelAsyncRequest::getDescription()const
{
	return description_;
}

void PublishThingModelAsyncRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string PublishThingModelAsyncRequest::getThingModelVersion()const
{
	return thingModelVersion_;
}

void PublishThingModelAsyncRequest::setThingModelVersion(const std::string& thingModelVersion)
{
	thingModelVersion_ = thingModelVersion;
	setParameter("ThingModelVersion", thingModelVersion);
}

std::string PublishThingModelAsyncRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PublishThingModelAsyncRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string PublishThingModelAsyncRequest::getProductKey()const
{
	return productKey_;
}

void PublishThingModelAsyncRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string PublishThingModelAsyncRequest::getApiProduct()const
{
	return apiProduct_;
}

void PublishThingModelAsyncRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PublishThingModelAsyncRequest::getApiRevision()const
{
	return apiRevision_;
}

void PublishThingModelAsyncRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

