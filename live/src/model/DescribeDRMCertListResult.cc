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

#include <alibabacloud/live/model/DescribeDRMCertListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeDRMCertListResult::DescribeDRMCertListResult() :
	ServiceResult()
{}

DescribeDRMCertListResult::DescribeDRMCertListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDRMCertListResult::~DescribeDRMCertListResult()
{}

void DescribeDRMCertListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDRMCertInfoListListNode = value["DRMCertInfoListList"]["CertInfo"];
	for (auto valueDRMCertInfoListListCertInfo : allDRMCertInfoListListNode)
	{
		CertInfo dRMCertInfoListListObject;
		if(!valueDRMCertInfoListListCertInfo["CertId"].isNull())
			dRMCertInfoListListObject.certId = valueDRMCertInfoListListCertInfo["CertId"].asString();
		if(!valueDRMCertInfoListListCertInfo["CertName"].isNull())
			dRMCertInfoListListObject.certName = valueDRMCertInfoListListCertInfo["CertName"].asString();
		if(!valueDRMCertInfoListListCertInfo["ServCert"].isNull())
			dRMCertInfoListListObject.servCert = valueDRMCertInfoListListCertInfo["ServCert"].asString();
		if(!valueDRMCertInfoListListCertInfo["PrivateKey"].isNull())
			dRMCertInfoListListObject.privateKey = valueDRMCertInfoListListCertInfo["PrivateKey"].asString();
		if(!valueDRMCertInfoListListCertInfo["Passphrase"].isNull())
			dRMCertInfoListListObject.passphrase = valueDRMCertInfoListListCertInfo["Passphrase"].asString();
		if(!valueDRMCertInfoListListCertInfo["Ask"].isNull())
			dRMCertInfoListListObject.ask = valueDRMCertInfoListListCertInfo["Ask"].asString();
		if(!valueDRMCertInfoListListCertInfo["Description"].isNull())
			dRMCertInfoListListObject.description = valueDRMCertInfoListListCertInfo["Description"].asString();
		if(!valueDRMCertInfoListListCertInfo["CreateDate"].isNull())
			dRMCertInfoListListObject.createDate = valueDRMCertInfoListListCertInfo["CreateDate"].asString();
		dRMCertInfoListList_.push_back(dRMCertInfoListListObject);
	}

}

std::vector<DescribeDRMCertListResult::CertInfo> DescribeDRMCertListResult::getDRMCertInfoListList()const
{
	return dRMCertInfoListList_;
}

