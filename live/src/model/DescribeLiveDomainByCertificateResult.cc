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

#include <alibabacloud/live/model/DescribeLiveDomainByCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainByCertificateResult::DescribeLiveDomainByCertificateResult() :
	ServiceResult()
{}

DescribeLiveDomainByCertificateResult::DescribeLiveDomainByCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainByCertificateResult::~DescribeLiveDomainByCertificateResult()
{}

void DescribeLiveDomainByCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertInfosNode = value["CertInfos"]["CertInfo"];
	for (auto valueCertInfosCertInfo : allCertInfosNode)
	{
		CertInfo certInfosObject;
		if(!valueCertInfosCertInfo["CertCaIsLegacy"].isNull())
			certInfosObject.certCaIsLegacy = valueCertInfosCertInfo["CertCaIsLegacy"].asString();
		if(!valueCertInfosCertInfo["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = valueCertInfosCertInfo["CertExpireTime"].asString();
		if(!valueCertInfosCertInfo["CertExpired"].isNull())
			certInfosObject.certExpired = valueCertInfosCertInfo["CertExpired"].asString();
		if(!valueCertInfosCertInfo["CertStartTime"].isNull())
			certInfosObject.certStartTime = valueCertInfosCertInfo["CertStartTime"].asString();
		if(!valueCertInfosCertInfo["CertSubjectCommonName"].isNull())
			certInfosObject.certSubjectCommonName = valueCertInfosCertInfo["CertSubjectCommonName"].asString();
		if(!valueCertInfosCertInfo["CertType"].isNull())
			certInfosObject.certType = valueCertInfosCertInfo["CertType"].asString();
		if(!valueCertInfosCertInfo["DomainList"].isNull())
			certInfosObject.domainList = valueCertInfosCertInfo["DomainList"].asString();
		if(!valueCertInfosCertInfo["DomainNames"].isNull())
			certInfosObject.domainNames = valueCertInfosCertInfo["DomainNames"].asString();
		if(!valueCertInfosCertInfo["Issuer"].isNull())
			certInfosObject.issuer = valueCertInfosCertInfo["Issuer"].asString();
		certInfos_.push_back(certInfosObject);
	}

}

std::vector<DescribeLiveDomainByCertificateResult::CertInfo> DescribeLiveDomainByCertificateResult::getCertInfos()const
{
	return certInfos_;
}

