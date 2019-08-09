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

#include <alibabacloud/scdn/model/DescribeScdnDomainCertificateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainCertificateInfoResult::DescribeScdnDomainCertificateInfoResult() :
	ServiceResult()
{}

DescribeScdnDomainCertificateInfoResult::DescribeScdnDomainCertificateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainCertificateInfoResult::~DescribeScdnDomainCertificateInfoResult()
{}

void DescribeScdnDomainCertificateInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCertInfos = value["CertInfos"]["CertInfo"];
	for (auto value : allCertInfos)
	{
		CertInfo certInfosObject;
		if(!value["DomainName"].isNull())
			certInfosObject.domainName = value["DomainName"].asString();
		if(!value["CertName"].isNull())
			certInfosObject.certName = value["CertName"].asString();
		if(!value["CertDomainName"].isNull())
			certInfosObject.certDomainName = value["CertDomainName"].asString();
		if(!value["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = value["CertExpireTime"].asString();
		if(!value["CertLife"].isNull())
			certInfosObject.certLife = value["CertLife"].asString();
		if(!value["CertOrg"].isNull())
			certInfosObject.certOrg = value["CertOrg"].asString();
		if(!value["CertType"].isNull())
			certInfosObject.certType = value["CertType"].asString();
		if(!value["SSLProtocol"].isNull())
			certInfosObject.sSLProtocol = value["SSLProtocol"].asString();
		if(!value["Status"].isNull())
			certInfosObject.status = value["Status"].asString();
		if(!value["SSLPub"].isNull())
			certInfosObject.sSLPub = value["SSLPub"].asString();
		certInfos_.push_back(certInfosObject);
	}

}

std::vector<DescribeScdnDomainCertificateInfoResult::CertInfo> DescribeScdnDomainCertificateInfoResult::getCertInfos()const
{
	return certInfos_;
}

