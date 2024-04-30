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

#include <alibabacloud/dcdn/model/DescribeDcdnSMCertificateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnSMCertificateDetailResult::DescribeDcdnSMCertificateDetailResult() :
	ServiceResult()
{}

DescribeDcdnSMCertificateDetailResult::DescribeDcdnSMCertificateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnSMCertificateDetailResult::~DescribeDcdnSMCertificateDetailResult()
{}

void DescribeDcdnSMCertificateDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CertExpireTime"].isNull())
		certExpireTime_ = value["CertExpireTime"].asString();
	if(!value["CertIdentifier"].isNull())
		certIdentifier_ = value["CertIdentifier"].asString();
	if(!value["CommonName"].isNull())
		commonName_ = value["CommonName"].asString();
	if(!value["CertName"].isNull())
		certName_ = value["CertName"].asString();
	if(!value["Sans"].isNull())
		sans_ = value["Sans"].asString();
	if(!value["SignCertificate"].isNull())
		signCertificate_ = value["SignCertificate"].asString();
	if(!value["CertOrg"].isNull())
		certOrg_ = value["CertOrg"].asString();
	if(!value["EncryptCertificate"].isNull())
		encryptCertificate_ = value["EncryptCertificate"].asString();

}

std::string DescribeDcdnSMCertificateDetailResult::getSans()const
{
	return sans_;
}

std::string DescribeDcdnSMCertificateDetailResult::getCertOrg()const
{
	return certOrg_;
}

std::string DescribeDcdnSMCertificateDetailResult::getCertIdentifier()const
{
	return certIdentifier_;
}

std::string DescribeDcdnSMCertificateDetailResult::getCertExpireTime()const
{
	return certExpireTime_;
}

std::string DescribeDcdnSMCertificateDetailResult::getSignCertificate()const
{
	return signCertificate_;
}

std::string DescribeDcdnSMCertificateDetailResult::getCertName()const
{
	return certName_;
}

std::string DescribeDcdnSMCertificateDetailResult::getEncryptCertificate()const
{
	return encryptCertificate_;
}

std::string DescribeDcdnSMCertificateDetailResult::getCommonName()const
{
	return commonName_;
}

