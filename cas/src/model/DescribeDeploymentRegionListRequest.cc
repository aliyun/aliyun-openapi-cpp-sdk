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

#include <alibabacloud/cas/model/DescribeDeploymentRegionListRequest.h>

using AlibabaCloud::Cas::Model::DescribeDeploymentRegionListRequest;

DescribeDeploymentRegionListRequest::DescribeDeploymentRegionListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeDeploymentRegionList")
{}

DescribeDeploymentRegionListRequest::~DescribeDeploymentRegionListRequest()
{}

std::string DescribeDeploymentRegionListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDeploymentRegionListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeDeploymentRegionListRequest::getCertificateId()const
{
	return certificateId_;
}

void DescribeDeploymentRegionListRequest::setCertificateId(long certificateId)
{
	certificateId_ = certificateId;
	setCoreParameter("CertificateId", std::to_string(certificateId));
}

std::string DescribeDeploymentRegionListRequest::getCloudProduct()const
{
	return cloudProduct_;
}

void DescribeDeploymentRegionListRequest::setCloudProduct(const std::string& cloudProduct)
{
	cloudProduct_ = cloudProduct;
	setCoreParameter("CloudProduct", cloudProduct);
}

std::string DescribeDeploymentRegionListRequest::getLang()const
{
	return lang_;
}

void DescribeDeploymentRegionListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

