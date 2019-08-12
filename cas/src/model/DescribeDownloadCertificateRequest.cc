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

#include <alibabacloud/cas/model/DescribeDownloadCertificateRequest.h>

using AlibabaCloud::Cas::Model::DescribeDownloadCertificateRequest;

DescribeDownloadCertificateRequest::DescribeDownloadCertificateRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeDownloadCertificate")
{}

DescribeDownloadCertificateRequest::~DescribeDownloadCertificateRequest()
{}

std::string DescribeDownloadCertificateRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDownloadCertificateRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeDownloadCertificateRequest::getServerType()const
{
	return serverType_;
}

void DescribeDownloadCertificateRequest::setServerType(const std::string& serverType)
{
	serverType_ = serverType;
	setCoreParameter("ServerType", std::to_string(serverType));
}

long DescribeDownloadCertificateRequest::getCertificateId()const
{
	return certificateId_;
}

void DescribeDownloadCertificateRequest::setCertificateId(long certificateId)
{
	certificateId_ = certificateId;
	setCoreParameter("CertificateId", certificateId);
}

std::string DescribeDownloadCertificateRequest::getLang()const
{
	return lang_;
}

void DescribeDownloadCertificateRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

