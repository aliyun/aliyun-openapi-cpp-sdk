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

#include <alibabacloud/iot/model/BatchAddDataForApiSourceRequest.h>

using AlibabaCloud::Iot::Model::BatchAddDataForApiSourceRequest;

BatchAddDataForApiSourceRequest::BatchAddDataForApiSourceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchAddDataForApiSource")
{
	setMethod(HttpRequest::Method::Post);
}

BatchAddDataForApiSourceRequest::~BatchAddDataForApiSourceRequest()
{}

std::string BatchAddDataForApiSourceRequest::getContentList()const
{
	return contentList_;
}

void BatchAddDataForApiSourceRequest::setContentList(const std::string& contentList)
{
	contentList_ = contentList;
	setParameter("ContentList", contentList);
}

std::string BatchAddDataForApiSourceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchAddDataForApiSourceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BatchAddDataForApiSourceRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchAddDataForApiSourceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchAddDataForApiSourceRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchAddDataForApiSourceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string BatchAddDataForApiSourceRequest::getApiId()const
{
	return apiId_;
}

void BatchAddDataForApiSourceRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setParameter("ApiId", apiId);
}

