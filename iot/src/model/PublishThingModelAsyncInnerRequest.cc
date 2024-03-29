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

#include <alibabacloud/iot/model/PublishThingModelAsyncInnerRequest.h>

using AlibabaCloud::Iot::Model::PublishThingModelAsyncInnerRequest;

PublishThingModelAsyncInnerRequest::PublishThingModelAsyncInnerRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PublishThingModelAsyncInner")
{
	setMethod(HttpRequest::Method::Post);
}

PublishThingModelAsyncInnerRequest::~PublishThingModelAsyncInnerRequest()
{}

std::string PublishThingModelAsyncInnerRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PublishThingModelAsyncInnerRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string PublishThingModelAsyncInnerRequest::getProductKey()const
{
	return productKey_;
}

void PublishThingModelAsyncInnerRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string PublishThingModelAsyncInnerRequest::getInsId()const
{
	return insId_;
}

void PublishThingModelAsyncInnerRequest::setInsId(const std::string& insId)
{
	insId_ = insId;
	setParameter("InsId", insId);
}

std::string PublishThingModelAsyncInnerRequest::getApiProduct()const
{
	return apiProduct_;
}

void PublishThingModelAsyncInnerRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PublishThingModelAsyncInnerRequest::getApiRevision()const
{
	return apiRevision_;
}

void PublishThingModelAsyncInnerRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

