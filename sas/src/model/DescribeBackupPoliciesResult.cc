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

#include <alibabacloud/sas/model/DescribeBackupPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackupPoliciesResult::DescribeBackupPoliciesResult() :
	ServiceResult()
{}

DescribeBackupPoliciesResult::DescribeBackupPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPoliciesResult::~DescribeBackupPoliciesResult()
{}

void DescribeBackupPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["BackupPolicy"];
	for (auto valuePoliciesBackupPolicy : allPoliciesNode)
	{
		BackupPolicy policiesObject;
		if(!valuePoliciesBackupPolicy["ClientErrorCount"].isNull())
			policiesObject.clientErrorCount = std::stoi(valuePoliciesBackupPolicy["ClientErrorCount"].asString());
		if(!valuePoliciesBackupPolicy["Status"].isNull())
			policiesObject.status = valuePoliciesBackupPolicy["Status"].asString();
		if(!valuePoliciesBackupPolicy["PolicyVersion"].isNull())
			policiesObject.policyVersion = valuePoliciesBackupPolicy["PolicyVersion"].asString();
		if(!valuePoliciesBackupPolicy["Policy"].isNull())
			policiesObject.policy = valuePoliciesBackupPolicy["Policy"].asString();
		if(!valuePoliciesBackupPolicy["UpgradeStatus"].isNull())
			policiesObject.upgradeStatus = valuePoliciesBackupPolicy["UpgradeStatus"].asString();
		if(!valuePoliciesBackupPolicy["ServiceErrorCount"].isNull())
			policiesObject.serviceErrorCount = std::stoi(valuePoliciesBackupPolicy["ServiceErrorCount"].asString());
		if(!valuePoliciesBackupPolicy["PolicyRegionId"].isNull())
			policiesObject.policyRegionId = valuePoliciesBackupPolicy["PolicyRegionId"].asString();
		if(!valuePoliciesBackupPolicy["ClientStatus"].isNull())
			policiesObject.clientStatus = valuePoliciesBackupPolicy["ClientStatus"].asString();
		if(!valuePoliciesBackupPolicy["Name"].isNull())
			policiesObject.name = valuePoliciesBackupPolicy["Name"].asString();
		if(!valuePoliciesBackupPolicy["HealthClientCount"].isNull())
			policiesObject.healthClientCount = std::stoi(valuePoliciesBackupPolicy["HealthClientCount"].asString());
		if(!valuePoliciesBackupPolicy["Id"].isNull())
			policiesObject.id = std::stol(valuePoliciesBackupPolicy["Id"].asString());
		if(!valuePoliciesBackupPolicy["ServerType"].isNull())
			policiesObject.serverType = valuePoliciesBackupPolicy["ServerType"].asString();
		auto allClientErrorUuidList = value["ClientErrorUuidList"]["StringItem"];
		for (auto value : allClientErrorUuidList)
			policiesObject.clientErrorUuidList.push_back(value.asString());
		auto allRemarkedUuidList = value["RemarkedUuidList"]["StringItem"];
		for (auto value : allRemarkedUuidList)
			policiesObject.remarkedUuidList.push_back(value.asString());
		auto allUuidList = value["UuidList"]["StringItem"];
		for (auto value : allUuidList)
			policiesObject.uuidList.push_back(value.asString());
		auto allServiceErrorUuidList = value["ServiceErrorUuidList"]["StringItem"];
		for (auto value : allServiceErrorUuidList)
			policiesObject.serviceErrorUuidList.push_back(value.asString());
		auto allHealthClientUuidList = value["HealthClientUuidList"]["StringItem"];
		for (auto value : allHealthClientUuidList)
			policiesObject.healthClientUuidList.push_back(value.asString());
		policies_.push_back(policiesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeBackupPoliciesResult::PageInfo DescribeBackupPoliciesResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeBackupPoliciesResult::BackupPolicy> DescribeBackupPoliciesResult::getPolicies()const
{
	return policies_;
}

