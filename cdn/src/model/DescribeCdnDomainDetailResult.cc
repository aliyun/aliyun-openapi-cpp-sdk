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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto getDomainDetailModelNode = value["GetDomainDetailModel"];
	if(!getDomainDetailModelNode["GmtCreated"].isNull())
		getDomainDetailModel_.gmtCreated = getDomainDetailModelNode["GmtCreated"].asString();
	if(!getDomainDetailModelNode["GmtModified"].isNull())
		getDomainDetailModel_.gmtModified = getDomainDetailModelNode["GmtModified"].asString();
	if(!getDomainDetailModelNode["SourceType"].isNull())
		getDomainDetailModel_.sourceType = getDomainDetailModelNode["SourceType"].asString();
	if(!getDomainDetailModelNode["DomainStatus"].isNull())
		getDomainDetailModel_.domainStatus = getDomainDetailModelNode["DomainStatus"].asString();
	if(!getDomainDetailModelNode["SourcePort"].isNull())
		getDomainDetailModel_.sourcePort = std::stoi(getDomainDetailModelNode["SourcePort"].asString());
	if(!getDomainDetailModelNode["CdnType"].isNull())
		getDomainDetailModel_.cdnType = getDomainDetailModelNode["CdnType"].asString();
	if(!getDomainDetailModelNode["Cname"].isNull())
		getDomainDetailModel_.cname = getDomainDetailModelNode["Cname"].asString();
	if(!getDomainDetailModelNode["HttpsCname"].isNull())
		getDomainDetailModel_.httpsCname = getDomainDetailModelNode["HttpsCname"].asString();
	if(!getDomainDetailModelNode["DomainName"].isNull())
		getDomainDetailModel_.domainName = getDomainDetailModelNode["DomainName"].asString();
	if(!getDomainDetailModelNode["Description"].isNull())
		getDomainDetailModel_.description = getDomainDetailModelNode["Description"].asString();
	if(!getDomainDetailModelNode["ServerCertificateStatus"].isNull())
		getDomainDetailModel_.serverCertificateStatus = getDomainDetailModelNode["ServerCertificateStatus"].asString();
	if(!getDomainDetailModelNode["ServerCertificate"].isNull())
		getDomainDetailModel_.serverCertificate = getDomainDetailModelNode["ServerCertificate"].asString();
	if(!getDomainDetailModelNode["Region"].isNull())
		getDomainDetailModel_.region = getDomainDetailModelNode["Region"].asString();
	if(!getDomainDetailModelNode["Scope"].isNull())
		getDomainDetailModel_.scope = getDomainDetailModelNode["Scope"].asString();
	if(!getDomainDetailModelNode["CertificateName"].isNull())
		getDomainDetailModel_.certificateName = getDomainDetailModelNode["CertificateName"].asString();
	if(!getDomainDetailModelNode["ResourceGroupId"].isNull())
		getDomainDetailModel_.resourceGroupId = getDomainDetailModelNode["ResourceGroupId"].asString();
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
		getDomainDetailModel_.sourceModels.push_back(sourceModelObject);
	}
		auto allSources = getDomainDetailModelNode["Sources"]["Source"];
		for (auto value : allSources)
			getDomainDetailModel_.sources.push_back(value.asString());

}

DescribeCdnDomainDetailResult::GetDomainDetailModel DescribeCdnDomainDetailResult::getGetDomainDetailModel()const
{
	return getDomainDetailModel_;
}

