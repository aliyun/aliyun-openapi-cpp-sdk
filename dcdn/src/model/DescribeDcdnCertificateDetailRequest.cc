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

#include <alibabacloud/dcdn/model/DescribeDcdnCertificateDetailRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnCertificateDetailRequest;

DescribeDcdnCertificateDetailRequest::DescribeDcdnCertificateDetailRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnCertificateDetail")
{}

DescribeDcdnCertificateDetailRequest::~DescribeDcdnCertificateDetailRequest()
{}

std::string DescribeDcdnCertificateDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnCertificateDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnCertificateDetailRequest::getCertName()const
{
	return certName_;
}

void DescribeDcdnCertificateDetailRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setCoreParameter("CertName", certName);
}

long DescribeDcdnCertificateDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnCertificateDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

