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

#include <alibabacloud/vod/model/DescribeVodDomainCertificateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainCertificateInfoResult::DescribeVodDomainCertificateInfoResult() :
	ServiceResult()
{}

DescribeVodDomainCertificateInfoResult::DescribeVodDomainCertificateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainCertificateInfoResult::~DescribeVodDomainCertificateInfoResult()
{}

void DescribeVodDomainCertificateInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertInfosNode = value["CertInfos"]["CertInfo"];
	for (auto valueCertInfosCertInfo : allCertInfosNode)
	{
		CertInfo certInfosObject;
		if(!valueCertInfosCertInfo["Status"].isNull())
			certInfosObject.status = valueCertInfosCertInfo["Status"].asString();
		if(!valueCertInfosCertInfo["CertLife"].isNull())
			certInfosObject.certLife = valueCertInfosCertInfo["CertLife"].asString();
		if(!valueCertInfosCertInfo["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = valueCertInfosCertInfo["CertExpireTime"].asString();
		if(!valueCertInfosCertInfo["CertType"].isNull())
			certInfosObject.certType = valueCertInfosCertInfo["CertType"].asString();
		if(!valueCertInfosCertInfo["ServerCertificateStatus"].isNull())
			certInfosObject.serverCertificateStatus = valueCertInfosCertInfo["ServerCertificateStatus"].asString();
		if(!valueCertInfosCertInfo["CertDomainName"].isNull())
			certInfosObject.certDomainName = valueCertInfosCertInfo["CertDomainName"].asString();
		if(!valueCertInfosCertInfo["CertName"].isNull())
			certInfosObject.certName = valueCertInfosCertInfo["CertName"].asString();
		if(!valueCertInfosCertInfo["CertOrg"].isNull())
			certInfosObject.certOrg = valueCertInfosCertInfo["CertOrg"].asString();
		if(!valueCertInfosCertInfo["DomainName"].isNull())
			certInfosObject.domainName = valueCertInfosCertInfo["DomainName"].asString();
		certInfos_.push_back(certInfosObject);
	}

}

std::vector<DescribeVodDomainCertificateInfoResult::CertInfo> DescribeVodDomainCertificateInfoResult::getCertInfos()const
{
	return certInfos_;
}

