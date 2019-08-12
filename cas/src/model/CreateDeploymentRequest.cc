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

#include <alibabacloud/cas/model/CreateDeploymentRequest.h>

using AlibabaCloud::Cas::Model::CreateDeploymentRequest;

CreateDeploymentRequest::CreateDeploymentRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateDeployment")
{}

CreateDeploymentRequest::~CreateDeploymentRequest()
{}

std::string CreateDeploymentRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateDeploymentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long CreateDeploymentRequest::getCertificateId()const
{
	return certificateId_;
}

void CreateDeploymentRequest::setCertificateId(long certificateId)
{
	certificateId_ = certificateId;
	setCoreParameter("CertificateId", certificateId);
}

std::string CreateDeploymentRequest::getDomain()const
{
	return domain_;
}

void CreateDeploymentRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

std::string CreateDeploymentRequest::getCloudProduct()const
{
	return cloudProduct_;
}

void CreateDeploymentRequest::setCloudProduct(const std::string& cloudProduct)
{
	cloudProduct_ = cloudProduct;
	setCoreParameter("CloudProduct", cloudProduct);
}

std::string CreateDeploymentRequest::getLang()const
{
	return lang_;
}

void CreateDeploymentRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateDeploymentRequest::getRegion()const
{
	return region_;
}

void CreateDeploymentRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

