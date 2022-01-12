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

#include <alibabacloud/config/model/GetResourceComplianceGroupByRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetResourceComplianceGroupByRegionResult::GetResourceComplianceGroupByRegionResult() :
	ServiceResult()
{}

GetResourceComplianceGroupByRegionResult::GetResourceComplianceGroupByRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourceComplianceGroupByRegionResult::~GetResourceComplianceGroupByRegionResult()
{}

void GetResourceComplianceGroupByRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto complianceResultNode = value["ComplianceResult"];
	auto allComplianceResultListNode = complianceResultNode["ComplianceResultList"]["ComplianceResultListItem"];
	for (auto complianceResultNodeComplianceResultListComplianceResultListItem : allComplianceResultListNode)
	{
		ComplianceResult::ComplianceResultListItem complianceResultListItemObject;
		if(!complianceResultNodeComplianceResultListComplianceResultListItem["RegionId"].isNull())
			complianceResultListItemObject.regionId = complianceResultNodeComplianceResultListComplianceResultListItem["RegionId"].asString();
		auto allCompliancesNode = complianceResultNodeComplianceResultListComplianceResultListItem["Compliances"]["CompliancesItem"];
		for (auto complianceResultNodeComplianceResultListComplianceResultListItemCompliancesCompliancesItem : allCompliancesNode)
		{
			ComplianceResult::ComplianceResultListItem::CompliancesItem compliancesObject;
			if(!complianceResultNodeComplianceResultListComplianceResultListItemCompliancesCompliancesItem["ComplianceType"].isNull())
				compliancesObject.complianceType = complianceResultNodeComplianceResultListComplianceResultListItemCompliancesCompliancesItem["ComplianceType"].asString();
			if(!complianceResultNodeComplianceResultListComplianceResultListItemCompliancesCompliancesItem["Count"].isNull())
				compliancesObject.count = std::stol(complianceResultNodeComplianceResultListComplianceResultListItemCompliancesCompliancesItem["Count"].asString());
			complianceResultListItemObject.compliances.push_back(compliancesObject);
		}
		complianceResult_.complianceResultList.push_back(complianceResultListItemObject);
	}

}

GetResourceComplianceGroupByRegionResult::ComplianceResult GetResourceComplianceGroupByRegionResult::getComplianceResult()const
{
	return complianceResult_;
}

