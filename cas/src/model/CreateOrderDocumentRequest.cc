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

#include <alibabacloud/cas/model/CreateOrderDocumentRequest.h>

using AlibabaCloud::Cas::Model::CreateOrderDocumentRequest;

CreateOrderDocumentRequest::CreateOrderDocumentRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateOrderDocument")
{
	setMethod(HttpRequest::Method::Post);
}

CreateOrderDocumentRequest::~CreateOrderDocumentRequest()
{}

std::string CreateOrderDocumentRequest::getOssKey()const
{
	return ossKey_;
}

void CreateOrderDocumentRequest::setOssKey(const std::string& ossKey)
{
	ossKey_ = ossKey;
	setCoreParameter("OssKey", ossKey);
}

std::string CreateOrderDocumentRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateOrderDocumentRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateOrderDocumentRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrderDocumentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateOrderDocumentRequest::getLang()const
{
	return lang_;
}

void CreateOrderDocumentRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateOrderDocumentRequest::getExtName()const
{
	return extName_;
}

void CreateOrderDocumentRequest::setExtName(const std::string& extName)
{
	extName_ = extName;
	setCoreParameter("ExtName", extName);
}

long CreateOrderDocumentRequest::getOrderId()const
{
	return orderId_;
}

void CreateOrderDocumentRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", std::to_string(orderId));
}

int CreateOrderDocumentRequest::getDocumentType()const
{
	return documentType_;
}

void CreateOrderDocumentRequest::setDocumentType(int documentType)
{
	documentType_ = documentType;
	setCoreParameter("DocumentType", std::to_string(documentType));
}

