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

#include <alibabacloud/cas/model/DescribeDeploymentProductRequest.h>

using AlibabaCloud::Cas::Model::DescribeDeploymentProductRequest;

DescribeDeploymentProductRequest::DescribeDeploymentProductRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeDeploymentProduct")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDeploymentProductRequest::~DescribeDeploymentProductRequest()
{}

long DescribeDeploymentProductRequest::getCertificateId()const
{
	return certificateId_;
}

void DescribeDeploymentProductRequest::setCertificateId(long certificateId)
{
	certificateId_ = certificateId;
	setParameter("CertificateId", std::to_string(certificateId));
}

std::string DescribeDeploymentProductRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDeploymentProductRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDeploymentProductRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDeploymentProductRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeDeploymentProductRequest::getLang()const
{
	return lang_;
}

void DescribeDeploymentProductRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

