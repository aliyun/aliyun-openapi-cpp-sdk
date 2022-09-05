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

#include <alibabacloud/cdn/model/DescribeCertificateInfoByIDResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCertificateInfoByIDResult::DescribeCertificateInfoByIDResult() :
	ServiceResult()
{}

DescribeCertificateInfoByIDResult::DescribeCertificateInfoByIDResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateInfoByIDResult::~DescribeCertificateInfoByIDResult()
{}

void DescribeCertificateInfoByIDResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertInfosNode = value["CertInfos"]["CertInfo"];
	for (auto valueCertInfosCertInfo : allCertInfosNode)
	{
		CertInfo certInfosObject;
		if(!valueCertInfosCertInfo["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = valueCertInfosCertInfo["CertExpireTime"].asString();
		if(!valueCertInfosCertInfo["CreateTime"].isNull())
			certInfosObject.createTime = valueCertInfosCertInfo["CreateTime"].asString();
		if(!valueCertInfosCertInfo["CertType"].isNull())
			certInfosObject.certType = valueCertInfosCertInfo["CertType"].asString();
		if(!valueCertInfosCertInfo["CertName"].isNull())
			certInfosObject.certName = valueCertInfosCertInfo["CertName"].asString();
		if(!valueCertInfosCertInfo["CertId"].isNull())
			certInfosObject.certId = valueCertInfosCertInfo["CertId"].asString();
		if(!valueCertInfosCertInfo["DomainList"].isNull())
			certInfosObject.domainList = valueCertInfosCertInfo["DomainList"].asString();
		if(!valueCertInfosCertInfo["HttpsCrt"].isNull())
			certInfosObject.httpsCrt = valueCertInfosCertInfo["HttpsCrt"].asString();
		certInfos_.push_back(certInfosObject);
	}

}

std::vector<DescribeCertificateInfoByIDResult::CertInfo> DescribeCertificateInfoByIDResult::getCertInfos()const
{
	return certInfos_;
}

