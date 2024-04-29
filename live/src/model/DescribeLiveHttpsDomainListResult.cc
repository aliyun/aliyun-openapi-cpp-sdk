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

#include <alibabacloud/live/model/DescribeLiveHttpsDomainListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveHttpsDomainListResult::DescribeLiveHttpsDomainListResult() :
	ServiceResult()
{}

DescribeLiveHttpsDomainListResult::DescribeLiveHttpsDomainListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveHttpsDomainListResult::~DescribeLiveHttpsDomainListResult()
{}

void DescribeLiveHttpsDomainListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertInfosNode = value["CertInfos"]["CertInfo"];
	for (auto valueCertInfosCertInfo : allCertInfosNode)
	{
		CertInfo certInfosObject;
		if(!valueCertInfosCertInfo["CertCommonName"].isNull())
			certInfosObject.certCommonName = valueCertInfosCertInfo["CertCommonName"].asString();
		if(!valueCertInfosCertInfo["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = valueCertInfosCertInfo["CertExpireTime"].asString();
		if(!valueCertInfosCertInfo["CertName"].isNull())
			certInfosObject.certName = valueCertInfosCertInfo["CertName"].asString();
		if(!valueCertInfosCertInfo["CertStartTime"].isNull())
			certInfosObject.certStartTime = valueCertInfosCertInfo["CertStartTime"].asString();
		if(!valueCertInfosCertInfo["CertStatus"].isNull())
			certInfosObject.certStatus = valueCertInfosCertInfo["CertStatus"].asString();
		if(!valueCertInfosCertInfo["CertType"].isNull())
			certInfosObject.certType = valueCertInfosCertInfo["CertType"].asString();
		if(!valueCertInfosCertInfo["CertUpdateTime"].isNull())
			certInfosObject.certUpdateTime = valueCertInfosCertInfo["CertUpdateTime"].asString();
		if(!valueCertInfosCertInfo["DomainName"].isNull())
			certInfosObject.domainName = valueCertInfosCertInfo["DomainName"].asString();
		certInfos_.push_back(certInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeLiveHttpsDomainListResult::CertInfo> DescribeLiveHttpsDomainListResult::getCertInfos()const
{
	return certInfos_;
}

int DescribeLiveHttpsDomainListResult::getTotalCount()const
{
	return totalCount_;
}

