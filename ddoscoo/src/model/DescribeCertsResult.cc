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

#include <alibabacloud/ddoscoo/model/DescribeCertsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeCertsResult::DescribeCertsResult() :
	ServiceResult()
{}

DescribeCertsResult::DescribeCertsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertsResult::~DescribeCertsResult()
{}

void DescribeCertsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertsNode = value["Certs"]["CertItem"];
	for (auto valueCertsCertItem : allCertsNode)
	{
		CertItem certsObject;
		if(!valueCertsCertItem["EndDate"].isNull())
			certsObject.endDate = valueCertsCertItem["EndDate"].asString();
		if(!valueCertsCertItem["DomainRelated"].isNull())
			certsObject.domainRelated = valueCertsCertItem["DomainRelated"].asString() == "true";
		if(!valueCertsCertItem["StartDate"].isNull())
			certsObject.startDate = valueCertsCertItem["StartDate"].asString();
		if(!valueCertsCertItem["Issuer"].isNull())
			certsObject.issuer = valueCertsCertItem["Issuer"].asString();
		if(!valueCertsCertItem["Name"].isNull())
			certsObject.name = valueCertsCertItem["Name"].asString();
		if(!valueCertsCertItem["Common"].isNull())
			certsObject.common = valueCertsCertItem["Common"].asString();
		if(!valueCertsCertItem["Id"].isNull())
			certsObject.id = std::stoi(valueCertsCertItem["Id"].asString());
		if(!valueCertsCertItem["CertIdentifier"].isNull())
			certsObject.certIdentifier = valueCertsCertItem["CertIdentifier"].asString();
		certs_.push_back(certsObject);
	}

}

std::vector<DescribeCertsResult::CertItem> DescribeCertsResult::getCerts()const
{
	return certs_;
}

