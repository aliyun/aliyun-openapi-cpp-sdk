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

#include <alibabacloud/cas/model/DescribeCertificateBrandListRequest.h>

using AlibabaCloud::Cas::Model::DescribeCertificateBrandListRequest;

DescribeCertificateBrandListRequest::DescribeCertificateBrandListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeCertificateBrandList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCertificateBrandListRequest::~DescribeCertificateBrandListRequest()
{}

std::string DescribeCertificateBrandListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCertificateBrandListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeCertificateBrandListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCertificateBrandListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeCertificateBrandListRequest::getLang()const
{
	return lang_;
}

void DescribeCertificateBrandListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

