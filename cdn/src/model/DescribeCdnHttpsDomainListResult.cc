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

#include <alibabacloud/cdn/model/DescribeCdnHttpsDomainListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnHttpsDomainListResult::DescribeCdnHttpsDomainListResult() :
	ServiceResult()
{}

DescribeCdnHttpsDomainListResult::DescribeCdnHttpsDomainListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnHttpsDomainListResult::~DescribeCdnHttpsDomainListResult()
{}

void DescribeCdnHttpsDomainListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCertInfos = value["CertInfos"]["CertInfo"];
	for (auto value : allCertInfos)
	{
		CertInfo certInfosObject;
		if(!value["CertCommonName"].isNull())
			certInfosObject.certCommonName = value["CertCommonName"].asString();
		if(!value["CertName"].isNull())
			certInfosObject.certName = value["CertName"].asString();
		if(!value["CertStartTime"].isNull())
			certInfosObject.certStartTime = value["CertStartTime"].asString();
		if(!value["CertExpireTime"].isNull())
			certInfosObject.certExpireTime = value["CertExpireTime"].asString();
		if(!value["CertStatus"].isNull())
			certInfosObject.certStatus = value["CertStatus"].asString();
		if(!value["CertType"].isNull())
			certInfosObject.certType = value["CertType"].asString();
		if(!value["DomainName"].isNull())
			certInfosObject.domainName = value["DomainName"].asString();
		if(!value["CertUpdateTime"].isNull())
			certInfosObject.certUpdateTime = value["CertUpdateTime"].asString();
		certInfos_.push_back(certInfosObject);
	}

}

std::vector<DescribeCdnHttpsDomainListResult::CertInfo> DescribeCdnHttpsDomainListResult::getCertInfos()const
{
	return certInfos_;
}

