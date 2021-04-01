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

#include <alibabacloud/iot/model/GenerateFileUploadURLRequest.h>

using AlibabaCloud::Iot::Model::GenerateFileUploadURLRequest;

GenerateFileUploadURLRequest::GenerateFileUploadURLRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GenerateFileUploadURL")
{
	setMethod(HttpRequest::Method::Post);
}

GenerateFileUploadURLRequest::~GenerateFileUploadURLRequest()
{}

std::string GenerateFileUploadURLRequest::getFileSuffix()const
{
	return fileSuffix_;
}

void GenerateFileUploadURLRequest::setFileSuffix(const std::string& fileSuffix)
{
	fileSuffix_ = fileSuffix;
	setParameter("FileSuffix", fileSuffix);
}

std::string GenerateFileUploadURLRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GenerateFileUploadURLRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GenerateFileUploadURLRequest::getFileName()const
{
	return fileName_;
}

void GenerateFileUploadURLRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setParameter("FileName", fileName);
}

std::string GenerateFileUploadURLRequest::getBizCode()const
{
	return bizCode_;
}

void GenerateFileUploadURLRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string GenerateFileUploadURLRequest::getApiProduct()const
{
	return apiProduct_;
}

void GenerateFileUploadURLRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GenerateFileUploadURLRequest::getApiRevision()const
{
	return apiRevision_;
}

void GenerateFileUploadURLRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

