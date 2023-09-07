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

#include <alibabacloud/iot/model/ReleaseProductRequest.h>

using AlibabaCloud::Iot::Model::ReleaseProductRequest;

ReleaseProductRequest::ReleaseProductRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ReleaseProduct")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseProductRequest::~ReleaseProductRequest()
{}

int ReleaseProductRequest::get_Template()const
{
	return _template_;
}

void ReleaseProductRequest::set_Template(int _template)
{
	_template_ = _template;
	setParameter("_Template", std::to_string(_template));
}

std::string ReleaseProductRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ReleaseProductRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string ReleaseProductRequest::getCategoryKey()const
{
	return categoryKey_;
}

void ReleaseProductRequest::setCategoryKey(const std::string& categoryKey)
{
	categoryKey_ = categoryKey;
	setParameter("CategoryKey", categoryKey);
}

std::string ReleaseProductRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseProductRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReleaseProductRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ReleaseProductRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ReleaseProductRequest::getTemplateIdentifier()const
{
	return templateIdentifier_;
}

void ReleaseProductRequest::setTemplateIdentifier(const std::string& templateIdentifier)
{
	templateIdentifier_ = templateIdentifier;
	setParameter("TemplateIdentifier", templateIdentifier);
}

std::string ReleaseProductRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ReleaseProductRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ReleaseProductRequest::getTemplateName()const
{
	return templateName_;
}

void ReleaseProductRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string ReleaseProductRequest::getProductKey()const
{
	return productKey_;
}

void ReleaseProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ReleaseProductRequest::getApiProduct()const
{
	return apiProduct_;
}

void ReleaseProductRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ReleaseProductRequest::getApiRevision()const
{
	return apiRevision_;
}

void ReleaseProductRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ReleaseProductRequest::getCategoryName()const
{
	return categoryName_;
}

void ReleaseProductRequest::setCategoryName(const std::string& categoryName)
{
	categoryName_ = categoryName;
	setParameter("CategoryName", categoryName);
}

std::string ReleaseProductRequest::getBizTenantId()const
{
	return bizTenantId_;
}

void ReleaseProductRequest::setBizTenantId(const std::string& bizTenantId)
{
	bizTenantId_ = bizTenantId;
	setParameter("BizTenantId", bizTenantId);
}

