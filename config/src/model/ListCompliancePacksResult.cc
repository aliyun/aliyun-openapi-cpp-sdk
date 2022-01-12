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

#include <alibabacloud/config/model/ListCompliancePacksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListCompliancePacksResult::ListCompliancePacksResult() :
	ServiceResult()
{}

ListCompliancePacksResult::ListCompliancePacksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCompliancePacksResult::~ListCompliancePacksResult()
{}

void ListCompliancePacksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto compliancePacksResultNode = value["CompliancePacksResult"];
	if(!compliancePacksResultNode["PageSize"].isNull())
		compliancePacksResult_.pageSize = std::stoi(compliancePacksResultNode["PageSize"].asString());
	if(!compliancePacksResultNode["PageNumber"].isNull())
		compliancePacksResult_.pageNumber = std::stoi(compliancePacksResultNode["PageNumber"].asString());
	if(!compliancePacksResultNode["TotalCount"].isNull())
		compliancePacksResult_.totalCount = std::stol(compliancePacksResultNode["TotalCount"].asString());
	auto allCompliancePacksNode = compliancePacksResultNode["CompliancePacks"]["CompliancePacksItem"];
	for (auto compliancePacksResultNodeCompliancePacksCompliancePacksItem : allCompliancePacksNode)
	{
		CompliancePacksResult::CompliancePacksItem compliancePacksItemObject;
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["Status"].isNull())
			compliancePacksItemObject.status = compliancePacksResultNodeCompliancePacksCompliancePacksItem["Status"].asString();
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["CompliancePackId"].isNull())
			compliancePacksItemObject.compliancePackId = compliancePacksResultNodeCompliancePacksCompliancePacksItem["CompliancePackId"].asString();
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["RiskLevel"].isNull())
			compliancePacksItemObject.riskLevel = std::stoi(compliancePacksResultNodeCompliancePacksCompliancePacksItem["RiskLevel"].asString());
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["Description"].isNull())
			compliancePacksItemObject.description = compliancePacksResultNodeCompliancePacksCompliancePacksItem["Description"].asString();
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["CompliancePackName"].isNull())
			compliancePacksItemObject.compliancePackName = compliancePacksResultNodeCompliancePacksCompliancePacksItem["CompliancePackName"].asString();
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["AccountId"].isNull())
			compliancePacksItemObject.accountId = std::stol(compliancePacksResultNodeCompliancePacksCompliancePacksItem["AccountId"].asString());
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["CompliancePackTemplateId"].isNull())
			compliancePacksItemObject.compliancePackTemplateId = compliancePacksResultNodeCompliancePacksCompliancePacksItem["CompliancePackTemplateId"].asString();
		if(!compliancePacksResultNodeCompliancePacksCompliancePacksItem["CreateTimestamp"].isNull())
			compliancePacksItemObject.createTimestamp = std::stol(compliancePacksResultNodeCompliancePacksCompliancePacksItem["CreateTimestamp"].asString());
		compliancePacksResult_.compliancePacks.push_back(compliancePacksItemObject);
	}

}

ListCompliancePacksResult::CompliancePacksResult ListCompliancePacksResult::getCompliancePacksResult()const
{
	return compliancePacksResult_;
}

