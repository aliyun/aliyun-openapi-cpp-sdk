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

#include <alibabacloud/vod/model/DescribeVodCertificateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodCertificateListResult::DescribeVodCertificateListResult() :
	ServiceResult()
{}

DescribeVodCertificateListResult::DescribeVodCertificateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodCertificateListResult::~DescribeVodCertificateListResult()
{}

void DescribeVodCertificateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto certificateListModelNode = value["CertificateListModel"];
	if(!certificateListModelNode["Count"].isNull())
		certificateListModel_.count = std::stoi(certificateListModelNode["Count"].asString());
	auto allCertList = value["CertList"]["Cert"];
	for (auto value : allCertList)
	{
		CertificateListModel::Cert certObject;
		if(!value["CertName"].isNull())
			certObject.certName = value["CertName"].asString();
		if(!value["CertId"].isNull())
			certObject.certId = std::stol(value["CertId"].asString());
		if(!value["Fingerprint"].isNull())
			certObject.fingerprint = value["Fingerprint"].asString();
		if(!value["Common"].isNull())
			certObject.common = value["Common"].asString();
		if(!value["Issuer"].isNull())
			certObject.issuer = value["Issuer"].asString();
		if(!value["LastTime"].isNull())
			certObject.lastTime = std::stol(value["LastTime"].asString());
		certificateListModel_.certList.push_back(certObject);
	}

}

DescribeVodCertificateListResult::CertificateListModel DescribeVodCertificateListResult::getCertificateListModel()const
{
	return certificateListModel_;
}

