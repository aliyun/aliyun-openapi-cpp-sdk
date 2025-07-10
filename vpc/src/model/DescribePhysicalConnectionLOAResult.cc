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

#include <alibabacloud/vpc/model/DescribePhysicalConnectionLOAResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribePhysicalConnectionLOAResult::DescribePhysicalConnectionLOAResult() :
	ServiceResult()
{}

DescribePhysicalConnectionLOAResult::DescribePhysicalConnectionLOAResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePhysicalConnectionLOAResult::~DescribePhysicalConnectionLOAResult()
{}

void DescribePhysicalConnectionLOAResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto physicalConnectionLOATypeNode = value["PhysicalConnectionLOAType"];
	if(!physicalConnectionLOATypeNode["Status"].isNull())
		physicalConnectionLOAType_.status = physicalConnectionLOATypeNode["Status"].asString();
	if(!physicalConnectionLOATypeNode["LineLabel"].isNull())
		physicalConnectionLOAType_.lineLabel = physicalConnectionLOATypeNode["LineLabel"].asString();
	if(!physicalConnectionLOATypeNode["LineCode"].isNull())
		physicalConnectionLOAType_.lineCode = physicalConnectionLOATypeNode["LineCode"].asString();
	if(!physicalConnectionLOATypeNode["ConstructionTime"].isNull())
		physicalConnectionLOAType_.constructionTime = physicalConnectionLOATypeNode["ConstructionTime"].asString();
	if(!physicalConnectionLOATypeNode["SI"].isNull())
		physicalConnectionLOAType_.sI = physicalConnectionLOATypeNode["SI"].asString();
	if(!physicalConnectionLOATypeNode["LoaUrl"].isNull())
		physicalConnectionLOAType_.loaUrl = physicalConnectionLOATypeNode["LoaUrl"].asString();
	if(!physicalConnectionLOATypeNode["CompanyLocalizedName"].isNull())
		physicalConnectionLOAType_.companyLocalizedName = physicalConnectionLOATypeNode["CompanyLocalizedName"].asString();
	if(!physicalConnectionLOATypeNode["InstanceId"].isNull())
		physicalConnectionLOAType_.instanceId = physicalConnectionLOATypeNode["InstanceId"].asString();
	if(!physicalConnectionLOATypeNode["LineType"].isNull())
		physicalConnectionLOAType_.lineType = physicalConnectionLOATypeNode["LineType"].asString();
	if(!physicalConnectionLOATypeNode["CompanyName"].isNull())
		physicalConnectionLOAType_.companyName = physicalConnectionLOATypeNode["CompanyName"].asString();
	if(!physicalConnectionLOATypeNode["LineServiceProvider"].isNull())
		physicalConnectionLOAType_.lineServiceProvider = physicalConnectionLOATypeNode["LineServiceProvider"].asString();
	if(!physicalConnectionLOATypeNode["LineSPContactInfo"].isNull())
		physicalConnectionLOAType_.lineSPContactInfo = physicalConnectionLOATypeNode["LineSPContactInfo"].asString();
	auto allPMInfoNode = physicalConnectionLOATypeNode["PMInfo"]["PMInfoItem"];
	for (auto physicalConnectionLOATypeNodePMInfoPMInfoItem : allPMInfoNode)
	{
		PhysicalConnectionLOAType::PMInfoItem pMInfoItemObject;
		if(!physicalConnectionLOATypeNodePMInfoPMInfoItem["PMGender"].isNull())
			pMInfoItemObject.pMGender = physicalConnectionLOATypeNodePMInfoPMInfoItem["PMGender"].asString();
		if(!physicalConnectionLOATypeNodePMInfoPMInfoItem["PMCertificateNo"].isNull())
			pMInfoItemObject.pMCertificateNo = physicalConnectionLOATypeNodePMInfoPMInfoItem["PMCertificateNo"].asString();
		if(!physicalConnectionLOATypeNodePMInfoPMInfoItem["PMName"].isNull())
			pMInfoItemObject.pMName = physicalConnectionLOATypeNodePMInfoPMInfoItem["PMName"].asString();
		if(!physicalConnectionLOATypeNodePMInfoPMInfoItem["PMCertificateType"].isNull())
			pMInfoItemObject.pMCertificateType = physicalConnectionLOATypeNodePMInfoPMInfoItem["PMCertificateType"].asString();
		if(!physicalConnectionLOATypeNodePMInfoPMInfoItem["PMContactInfo"].isNull())
			pMInfoItemObject.pMContactInfo = physicalConnectionLOATypeNodePMInfoPMInfoItem["PMContactInfo"].asString();
		physicalConnectionLOAType_.pMInfo.push_back(pMInfoItemObject);
	}

}

DescribePhysicalConnectionLOAResult::PhysicalConnectionLOAType DescribePhysicalConnectionLOAResult::getPhysicalConnectionLOAType()const
{
	return physicalConnectionLOAType_;
}

