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

#include <alibabacloud/cdn/model/DescribeCdnSMCertificateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnSMCertificateListResult::DescribeCdnSMCertificateListResult() :
	ServiceResult()
{}

DescribeCdnSMCertificateListResult::DescribeCdnSMCertificateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnSMCertificateListResult::~DescribeCdnSMCertificateListResult()
{}

void DescribeCdnSMCertificateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto certificateListModelNode = value["CertificateListModel"];
	if(!certificateListModelNode["Count"].isNull())
		certificateListModel_.count = std::stoi(certificateListModelNode["Count"].asString());
	auto allCertListNode = certificateListModelNode["CertList"]["Cert"];
	for (auto certificateListModelNodeCertListCert : allCertListNode)
	{
		CertificateListModel::Cert certObject;
		if(!certificateListModelNodeCertListCert["CertName"].isNull())
			certObject.certName = certificateListModelNodeCertListCert["CertName"].asString();
		if(!certificateListModelNodeCertListCert["Issuer"].isNull())
			certObject.issuer = certificateListModelNodeCertListCert["Issuer"].asString();
		if(!certificateListModelNodeCertListCert["CertIdentifier"].isNull())
			certObject.certIdentifier = certificateListModelNodeCertListCert["CertIdentifier"].asString();
		if(!certificateListModelNodeCertListCert["Common"].isNull())
			certObject.common = certificateListModelNodeCertListCert["Common"].asString();
		certificateListModel_.certList.push_back(certObject);
	}

}

DescribeCdnSMCertificateListResult::CertificateListModel DescribeCdnSMCertificateListResult::getCertificateListModel()const
{
	return certificateListModel_;
}

