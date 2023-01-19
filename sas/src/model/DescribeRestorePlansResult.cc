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

#include <alibabacloud/sas/model/DescribeRestorePlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeRestorePlansResult::DescribeRestorePlansResult() :
	ServiceResult()
{}

DescribeRestorePlansResult::DescribeRestorePlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestorePlansResult::~DescribeRestorePlansResult()
{}

void DescribeRestorePlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRestorePlansNode = value["RestorePlans"]["RestorePlan"];
	for (auto valueRestorePlansRestorePlan : allRestorePlansNode)
	{
		RestorePlan restorePlansObject;
		if(!valueRestorePlansRestorePlan["Status"].isNull())
			restorePlansObject.status = valueRestorePlansRestorePlan["Status"].asString();
		if(!valueRestorePlansRestorePlan["RestorePoint"].isNull())
			restorePlansObject.restorePoint = std::stol(valueRestorePlansRestorePlan["RestorePoint"].asString());
		if(!valueRestorePlansRestorePlan["UpdatedTime"].isNull())
			restorePlansObject.updatedTime = std::stol(valueRestorePlansRestorePlan["UpdatedTime"].asString());
		if(!valueRestorePlansRestorePlan["DatabaseName"].isNull())
			restorePlansObject.databaseName = valueRestorePlansRestorePlan["DatabaseName"].asString();
		if(!valueRestorePlansRestorePlan["InstanceName"].isNull())
			restorePlansObject.instanceName = valueRestorePlansRestorePlan["InstanceName"].asString();
		if(!valueRestorePlansRestorePlan["TargetInstanceName"].isNull())
			restorePlansObject.targetInstanceName = valueRestorePlansRestorePlan["TargetInstanceName"].asString();
		if(!valueRestorePlansRestorePlan["TargetDatabaseName"].isNull())
			restorePlansObject.targetDatabaseName = valueRestorePlansRestorePlan["TargetDatabaseName"].asString();
		if(!valueRestorePlansRestorePlan["PolicyName"].isNull())
			restorePlansObject.policyName = valueRestorePlansRestorePlan["PolicyName"].asString();
		if(!valueRestorePlansRestorePlan["PolicyId"].isNull())
			restorePlansObject.policyId = std::stol(valueRestorePlansRestorePlan["PolicyId"].asString());
		if(!valueRestorePlansRestorePlan["TargetInstanceId"].isNull())
			restorePlansObject.targetInstanceId = valueRestorePlansRestorePlan["TargetInstanceId"].asString();
		if(!valueRestorePlansRestorePlan["CreatedTime"].isNull())
			restorePlansObject.createdTime = std::stol(valueRestorePlansRestorePlan["CreatedTime"].asString());
		restorePlans_.push_back(restorePlansObject);
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

std::vector<DescribeRestorePlansResult::RestorePlan> DescribeRestorePlansResult::getRestorePlans()const
{
	return restorePlans_;
}

DescribeRestorePlansResult::PageInfo DescribeRestorePlansResult::getPageInfo()const
{
	return pageInfo_;
}

