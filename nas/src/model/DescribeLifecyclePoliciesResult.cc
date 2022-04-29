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

#include <alibabacloud/nas/model/DescribeLifecyclePoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeLifecyclePoliciesResult::DescribeLifecyclePoliciesResult() :
	ServiceResult()
{}

DescribeLifecyclePoliciesResult::DescribeLifecyclePoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLifecyclePoliciesResult::~DescribeLifecyclePoliciesResult()
{}

void DescribeLifecyclePoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLifecyclePoliciesNode = value["LifecyclePolicies"]["LifecyclePolicy"];
	for (auto valueLifecyclePoliciesLifecyclePolicy : allLifecyclePoliciesNode)
	{
		LifecyclePolicy lifecyclePoliciesObject;
		if(!valueLifecyclePoliciesLifecyclePolicy["FileSystemId"].isNull())
			lifecyclePoliciesObject.fileSystemId = valueLifecyclePoliciesLifecyclePolicy["FileSystemId"].asString();
		if(!valueLifecyclePoliciesLifecyclePolicy["LifecycleRuleName"].isNull())
			lifecyclePoliciesObject.lifecycleRuleName = valueLifecyclePoliciesLifecyclePolicy["LifecycleRuleName"].asString();
		if(!valueLifecyclePoliciesLifecyclePolicy["CreateTime"].isNull())
			lifecyclePoliciesObject.createTime = valueLifecyclePoliciesLifecyclePolicy["CreateTime"].asString();
		if(!valueLifecyclePoliciesLifecyclePolicy["Path"].isNull())
			lifecyclePoliciesObject.path = valueLifecyclePoliciesLifecyclePolicy["Path"].asString();
		if(!valueLifecyclePoliciesLifecyclePolicy["StorageType"].isNull())
			lifecyclePoliciesObject.storageType = valueLifecyclePoliciesLifecyclePolicy["StorageType"].asString();
		if(!valueLifecyclePoliciesLifecyclePolicy["LifecyclePolicyName"].isNull())
			lifecyclePoliciesObject.lifecyclePolicyName = valueLifecyclePoliciesLifecyclePolicy["LifecyclePolicyName"].asString();
		auto allPaths = value["Paths"]["Path"];
		for (auto value : allPaths)
			lifecyclePoliciesObject.paths.push_back(value.asString());
		lifecyclePolicies_.push_back(lifecyclePoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeLifecyclePoliciesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLifecyclePoliciesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLifecyclePoliciesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLifecyclePoliciesResult::LifecyclePolicy> DescribeLifecyclePoliciesResult::getLifecyclePolicies()const
{
	return lifecyclePolicies_;
}

