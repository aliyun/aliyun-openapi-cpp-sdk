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

#include <alibabacloud/kms/model/ListPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListPoliciesResult::ListPoliciesResult() :
	ServiceResult()
{}

ListPoliciesResult::ListPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPoliciesResult::~ListPoliciesResult()
{}

void ListPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["Policy"];
	for (auto valuePoliciesPolicy : allPoliciesNode)
	{
		Policy policiesObject;
		if(!valuePoliciesPolicy["Name"].isNull())
			policiesObject.name = valuePoliciesPolicy["Name"].asString();
		policies_.push_back(policiesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListPoliciesResult::Policy> ListPoliciesResult::getPolicies()const
{
	return policies_;
}

int ListPoliciesResult::getPageSize()const
{
	return pageSize_;
}

int ListPoliciesResult::getPageNumber()const
{
	return pageNumber_;
}

