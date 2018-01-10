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
		getDomainDetailModelObject.gmtCreated = value["GmtCreated"].asString();
		getDomainDetailModelObject.gmtModified = value["GmtModified"].asString();
		getDomainDetailModelObject.sourceType = value["SourceType"].asString();
		getDomainDetailModelObject.domainStatus = value["DomainStatus"].asString();
		getDomainDetailModelObject.sourcePort = std::stoi(value["SourcePort"].asString());
		getDomainDetailModelObject.cdnType = value["CdnType"].asString();
		getDomainDetailModelObject.cname = value["Cname"].asString();
		getDomainDetailModelObject.httpsCname = value["HttpsCname"].asString();
		getDomainDetailModelObject.domainName = value["DomainName"].asString();
		getDomainDetailModelObject.description = value["Description"].asString();
		getDomainDetailModelObject.serverCertificateStatus = value["ServerCertificateStatus"].asString();
		getDomainDetailModelObject.serverCertificate = value["ServerCertificate"].asString();
		getDomainDetailModelObject.region = value["Region"].asString();
		getDomainDetailModelObject.scope = value["Scope"].asString();
		getDomainDetailModelObject.certificateName = value["CertificateName"].asString();
		getDomainDetailModelObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allSourceModels = value["SourceModels"]["SourceModel"];
		for (auto value : allSourceModels)
		{
			GetDomainDetailModel::SourceModel sourceModelObject;
			sourceModelObject.content = value["Content"].asString();
			sourceModelObject.type = value["Type"].asString();
			sourceModelObject.port = std::stoi(value["Port"].asString());
			sourceModelObject.enabled = value["Enabled"].asString();
			sourceModelObject.priority = value["Priority"].asString();
			getDomainDetailModelObject.sourceModels.push_back(sourceModelObject);
		}
		auto allSources = value["Sources"]["Source"];
		for (auto value : allSources)
			getDomainDetailModelObject.sources.push_back(value.asString());
		getDomainDetailModel_.push_back(getDomainDetailModelObject);
	}

}

