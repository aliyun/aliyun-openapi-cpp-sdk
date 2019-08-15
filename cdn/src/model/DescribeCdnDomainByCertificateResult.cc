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

#include <alibabacloud/cdn/model/DescribeCdnDomainByCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnDomainByCertificateResult::DescribeCdnDomainByCertificateResult() :
	ServiceResult()
{}

DescribeCdnDomainByCertificateResult::DescribeCdnDomainByCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnDomainByCertificateResult::~DescribeCdnDomainByCertificateResult()
{}

void DescribeCdnDomainByCertificateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCertInfos = value["CertInfos"]["CertInfo"];
	for (auto value : allCertInfos)
	{
		CertInfo certInfosObject;
		if(!value["Issuer"].isNull())
			certInfosObject.issuer = value["Issuer"].asString();
		if(!value["CertType"].isNull())
			certInfosObject.certType = value["CertType"].asString();
		if(!value["CertSubjectCommonName"].isNull())
			certInfosObject.certSubjectCommonName = value["CertSubjectCommonName"].asString();
		if(!value["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = value["CertExpireTime"].asString();
		if(!value["CertStartTime"].isNull())
			certInfosObject.certStartTime = value["CertStartTime"].asString();
		if(!value["DomainNames"].isNull())
			certInfosObject.domainNames = value["DomainNames"].asString();
		if(!value["DomainList"].isNull())
			certInfosObject.domainList = value["DomainList"].asString();
		if(!value["CertExpired"].isNull())
			certInfosObject.certExpired = value["CertExpired"].asString();
		if(!value["CertCaIsLegacy"].isNull())
			certInfosObject.certCaIsLegacy = value["CertCaIsLegacy"].asString();
		certInfos_.push_back(certInfosObject);
	}

}

std::vector<DescribeCdnDomainByCertificateResult::CertInfo> DescribeCdnDomainByCertificateResult::getCertInfos()const
{
	return certInfos_;
}

