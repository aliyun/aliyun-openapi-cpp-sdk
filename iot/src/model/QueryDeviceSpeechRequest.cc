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

#include <alibabacloud/iot/model/QueryDeviceSpeechRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceSpeechRequest;

QueryDeviceSpeechRequest::QueryDeviceSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceSpeechRequest::~QueryDeviceSpeechRequest()
{}

int QueryDeviceSpeechRequest::getPageId()const
{
	return pageId_;
}

void QueryDeviceSpeechRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QueryDeviceSpeechRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceSpeechRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string QueryDeviceSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceSpeechRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceSpeechRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDeviceSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

