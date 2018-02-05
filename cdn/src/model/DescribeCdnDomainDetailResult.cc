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

#include <alibabacloud/cdn/model/DescribeCdnDomainDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnDomainDetailResult::DescribeCdnDomainDetailResult() :
	ServiceResult()
{}

DescribeCdnDomainDetailResult::DescribeCdnDomainDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnDomainDetailResult::~DescribeCdnDomainDetailResult()
{}

void DescribeCdnDomainDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allGetDomainDetailModel = value["GetDomainDetailModel"];
	for (auto value : allGetDomainDetailModel)
	{
		GetDomainDetailModel getDomainDetailModelObject;
		if(!value["GmtCreated"].isNull())
			getDomainDetailModelObject.gmtCreated = value["GmtCreated"].asString();
		if(!value["GmtModified"].isNull())
			getDomainDetailModelObject.gmtModified = value["GmtModified"].asString();
		if(!value["SourceType"].isNull())
			getDomainDetailModelObject.sourceType = value["SourceType"].asString();
		if(!value["DomainStatus"].isNull())
			getDomainDetailModelObject.domainStatus = value["DomainStatus"].asString();
		if(!value["SourcePort"].isNull())
			getDomainDetailModelObject.sourcePort = std::stoi(value["SourcePort"].asString());
		if(!value["CdnType"].isNull())
			getDomainDetailModelObject.cdnType = value["CdnType"].asString();
		if(!value["Cname"].isNull())
			getDomainDetailModelObject.cname = value["Cname"].asString();
		if(!value["HttpsCname"].isNull())
			getDomainDetailModelObject.httpsCname = value["HttpsCname"].asString();
		if(!value["DomainName"].isNull())
			getDomainDetailModelObject.domainName = value["DomainName"].asString();
		if(!value["Description"].isNull())
			getDomainDetailModelObject.description = value["Description"].asString();
		if(!value["ServerCertificateStatus"].isNull())
			getDomainDetailModelObject.serverCertificateStatus = value["ServerCertificateStatus"].asString();
		if(!value["ServerCertificate"].isNull())
			getDomainDetailModelObject.serverCertificate = value["ServerCertificate"].asString();
		if(!value["Region"].isNull())
			getDomainDetailModelObject.region = value["Region"].asString();
		if(!value["Scope"].isNull())
			getDomainDetailModelObject.scope = value["Scope"].asString();
		if(!value["CertificateName"].isNull())
			getDomainDetailModelObject.certificateName = value["CertificateName"].asString();
		if(!value["ResourceGroupId"].isNull())
			getDomainDetailModelObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allSourceModels = value["SourceModels"]["SourceModel"];
		for (auto value : allSourceModels)
		{
			GetDomainDetailModel::SourceModel sourceModelObject;
			if(!value["Content"].isNull())
				sourceModelObject.content = value["Content"].asString();
			if(!value["Type"].isNull())
				sourceModelObject.type = value["Type"].asString();
			if(!value["Port"].isNull())
				sourceModelObject.port = std::stoi(value["Port"].asString());
			if(!value["Enabled"].isNull())
				sourceModelObject.enabled = value["Enabled"].asString();
			if(!value["Priority"].isNull())
				sourceModelObject.priority = value["Priority"].asString();
			getDomainDetailModelObject.sourceModels.push_back(sourceModelObject);
		}
		auto allSources = value["Sources"]["Source"];
		for (auto value : allSources)
			getDomainDetailModelObject.sources.push_back(value.asString());
		getDomainDetailModel_.push_back(getDomainDetailModelObject);
	}

}

std::vector<DescribeCdnDomainDetailResult::GetDomainDetailModel> DescribeCdnDomainDetailResult::getGetDomainDetailModel()const
{
	return getDomainDetailModel_;
}

