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

#include <alibabacloud/sas/model/ListCheckResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCheckResultResult::ListCheckResultResult() :
	ServiceResult()
{}

ListCheckResultResult::ListCheckResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckResultResult::~ListCheckResultResult()
{}

void ListCheckResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChecksNode = value["Checks"]["ChecksItem"];
	for (auto valueChecksChecksItem : allChecksNode)
	{
		ChecksItem checksObject;
		if(!valueChecksChecksItem["CheckId"].isNull())
			checksObject.checkId = std::stol(valueChecksChecksItem["CheckId"].asString());
		if(!valueChecksChecksItem["CheckShowName"].isNull())
			checksObject.checkShowName = valueChecksChecksItem["CheckShowName"].asString();
		if(!valueChecksChecksItem["Vendor"].isNull())
			checksObject.vendor = valueChecksChecksItem["Vendor"].asString();
		if(!valueChecksChecksItem["VendorShowName"].isNull())
			checksObject.vendorShowName = valueChecksChecksItem["VendorShowName"].asString();
		if(!valueChecksChecksItem["InstanceType"].isNull())
			checksObject.instanceType = valueChecksChecksItem["InstanceType"].asString();
		if(!valueChecksChecksItem["InstanceSubType"].isNull())
			checksObject.instanceSubType = valueChecksChecksItem["InstanceSubType"].asString();
		if(!valueChecksChecksItem["RiskLevel"].isNull())
			checksObject.riskLevel = valueChecksChecksItem["RiskLevel"].asString();
		if(!valueChecksChecksItem["Status"].isNull())
			checksObject.status = valueChecksChecksItem["Status"].asString();
		if(!valueChecksChecksItem["TaskId"].isNull())
			checksObject.taskId = valueChecksChecksItem["TaskId"].asString();
		if(!valueChecksChecksItem["LastCheckTime"].isNull())
			checksObject.lastCheckTime = std::stol(valueChecksChecksItem["LastCheckTime"].asString());
		if(!valueChecksChecksItem["TrialPermission"].isNull())
			checksObject.trialPermission = valueChecksChecksItem["TrialPermission"].asString() == "true";
		if(!valueChecksChecksItem["StatusMessage"].isNull())
			checksObject.statusMessage = valueChecksChecksItem["StatusMessage"].asString();
		auto allCheckPoliciesNode = valueChecksChecksItem["CheckPolicies"]["CheckPolicie"];
		for (auto valueChecksChecksItemCheckPoliciesCheckPolicie : allCheckPoliciesNode)
		{
			ChecksItem::CheckPolicie checkPoliciesObject;
			if(!valueChecksChecksItemCheckPoliciesCheckPolicie["StandardId"].isNull())
				checkPoliciesObject.standardId = std::stol(valueChecksChecksItemCheckPoliciesCheckPolicie["StandardId"].asString());
			if(!valueChecksChecksItemCheckPoliciesCheckPolicie["StandardShowName"].isNull())
				checkPoliciesObject.standardShowName = valueChecksChecksItemCheckPoliciesCheckPolicie["StandardShowName"].asString();
			if(!valueChecksChecksItemCheckPoliciesCheckPolicie["RequirementId"].isNull())
				checkPoliciesObject.requirementId = std::stol(valueChecksChecksItemCheckPoliciesCheckPolicie["RequirementId"].asString());
			if(!valueChecksChecksItemCheckPoliciesCheckPolicie["RequirementShowName"].isNull())
				checkPoliciesObject.requirementShowName = valueChecksChecksItemCheckPoliciesCheckPolicie["RequirementShowName"].asString();
			if(!valueChecksChecksItemCheckPoliciesCheckPolicie["SectionId"].isNull())
				checkPoliciesObject.sectionId = std::stol(valueChecksChecksItemCheckPoliciesCheckPolicie["SectionId"].asString());
			if(!valueChecksChecksItemCheckPoliciesCheckPolicie["SectionShowName"].isNull())
				checkPoliciesObject.sectionShowName = valueChecksChecksItemCheckPoliciesCheckPolicie["SectionShowName"].asString();
			checksObject.checkPolicies.push_back(checkPoliciesObject);
		}
		checks_.push_back(checksObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["NextToken"].isNull())
		pageInfo_.nextToken = pageInfoNode["NextToken"].asString();
	if(!pageInfoNode["MaxResults"].isNull())
		pageInfo_.maxResults = std::stoi(pageInfoNode["MaxResults"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

ListCheckResultResult::PageInfo ListCheckResultResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListCheckResultResult::ChecksItem> ListCheckResultResult::getChecks()const
{
	return checks_;
}

