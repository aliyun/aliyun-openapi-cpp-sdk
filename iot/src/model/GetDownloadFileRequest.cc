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

#include <alibabacloud/iot/model/GetDownloadFileRequest.h>

using AlibabaCloud::Iot::Model::GetDownloadFileRequest;

GetDownloadFileRequest::GetDownloadFileRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetDownloadFile")
{
	setMethod(HttpRequest::Method::Post);
}

GetDownloadFileRequest::~GetDownloadFileRequest()
{}

std::string GetDownloadFileRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetDownloadFileRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string GetDownloadFileRequest::getContext()const
{
	return context_;
}

void GetDownloadFileRequest::setContext(const std::string& context)
{
	context_ = context;
	setBodyParameter("Context", context);
}

std::string GetDownloadFileRequest::getLongJobId()const
{
	return longJobId_;
}

void GetDownloadFileRequest::setLongJobId(const std::string& longJobId)
{
	longJobId_ = longJobId;
	setParameter("LongJobId", longJobId);
}

std::string GetDownloadFileRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetDownloadFileRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetDownloadFileRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetDownloadFileRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

