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
	auto getDomainDetailModelNode = value["GetDomainDetailModel"];
	if(!getDomainDetailModelNode["SourcePort"].isNull())
		getDomainDetailModel_.sourcePort = std::stoi(getDomainDetailModelNode["SourcePort"].asString());
	if(!getDomainDetailModelNode["HttpsCname"].isNull())
		getDomainDetailModel_.httpsCname = getDomainDetailModelNode["HttpsCname"].asString();
	if(!getDomainDetailModelNode["SourceType"].isNull())
		getDomainDetailModel_.sourceType = getDomainDetailModelNode["SourceType"].asString();
	if(!getDomainDetailModelNode["ServerCertificateStatus"].isNull())
		getDomainDetailModel_.serverCertificateStatus = getDomainDetailModelNode["ServerCertificateStatus"].asString();
	if(!getDomainDetailModelNode["GmtModified"].isNull())
		getDomainDetailModel_.gmtModified = getDomainDetailModelNode["GmtModified"].asString();
	if(!getDomainDetailModelNode["DomainName"].isNull())
		getDomainDetailModel_.domainName = getDomainDetailModelNode["DomainName"].asString();
	if(!getDomainDetailModelNode["GmtCreated"].isNull())
		getDomainDetailModel_.gmtCreated = getDomainDetailModelNode["GmtCreated"].asString();
	if(!getDomainDetailModelNode["Description"].isNull())
		getDomainDetailModel_.description = getDomainDetailModelNode["Description"].asString();
	if(!getDomainDetailModelNode["Region"].isNull())
		getDomainDetailModel_.region = getDomainDetailModelNode["Region"].asString();
	if(!getDomainDetailModelNode["ResourceGroupId"].isNull())
		getDomainDetailModel_.resourceGroupId = getDomainDetailModelNode["ResourceGroupId"].asString();
	if(!getDomainDetailModelNode["Scope"].isNull())
		getDomainDetailModel_.scope = getDomainDetailModelNode["Scope"].asString();
	if(!getDomainDetailModelNode["DomainStatus"].isNull())
		getDomainDetailModel_.domainStatus = getDomainDetailModelNode["DomainStatus"].asString();
	if(!getDomainDetailModelNode["Cname"].isNull())
		getDomainDetailModel_.cname = getDomainDetailModelNode["Cname"].asString();
	if(!getDomainDetailModelNode["CdnType"].isNull())
		getDomainDetailModel_.cdnType = getDomainDetailModelNode["CdnType"].asString();
	auto allSourceModelsNode = getDomainDetailModelNode["SourceModels"]["SourceModel"];
	for (auto getDomainDetailModelNodeSourceModelsSourceModel : allSourceModelsNode)
	{
		GetDomainDetailModel::SourceModel sourceModelObject;
		if(!getDomainDetailModelNodeSourceModelsSourceModel["Type"].isNull())
			sourceModelObject.type = getDomainDetailModelNodeSourceModelsSourceModel["Type"].asString();
		if(!getDomainDetailModelNodeSourceModelsSourceModel["Priority"].isNull())
			sourceModelObject.priority = getDomainDetailModelNodeSourceModelsSourceModel["Priority"].asString();
		if(!getDomainDetailModelNodeSourceModelsSourceModel["Port"].isNull())
			sourceModelObject.port = std::stoi(getDomainDetailModelNodeSourceModelsSourceModel["Port"].asString());
		if(!getDomainDetailModelNodeSourceModelsSourceModel["Content"].isNull())
			sourceModelObject.content = getDomainDetailModelNodeSourceModelsSourceModel["Content"].asString();
		if(!getDomainDetailModelNodeSourceModelsSourceModel["Enabled"].isNull())
			sourceModelObject.enabled = getDomainDetailModelNodeSourceModelsSourceModel["Enabled"].asString();
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

