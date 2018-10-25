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

#include <alibabacloud/domain/model/QueryDomainAdminDivisionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainAdminDivisionResult::QueryDomainAdminDivisionResult() :
	ServiceResult()
{}

QueryDomainAdminDivisionResult::QueryDomainAdminDivisionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainAdminDivisionResult::~QueryDomainAdminDivisionResult()
{}

void QueryDomainAdminDivisionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAdminDivisions = value["AdminDivisions"]["AdminDivision"];
	for (auto value : allAdminDivisions)
	{
		AdminDivision adminDivisionsObject;
		if(!value["DivisionName"].isNull())
			adminDivisionsObject.divisionName = value["DivisionName"].asString();
		auto allChildren = value["Children"]["ChildrenItem"];
		for (auto value : allChildren)
		{
			AdminDivision::ChildrenItem childrenObject;
			if(!value["ChildDivisionName"].isNull())
				childrenObject.childDivisionName = value["ChildDivisionName"].asString();
			adminDivisionsObject.children.push_back(childrenObject);
		}
		adminDivisions_.push_back(adminDivisionsObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool QueryDomainAdminDivisionResult::getPrePage()const
{
	return prePage_;
}

int QueryDomainAdminDivisionResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryDomainAdminDivisionResult::getPageSize()const
{
	return pageSize_;
}

int QueryDomainAdminDivisionResult::getTotalPageNum()const
{
	return totalPageNum_;
}

int QueryDomainAdminDivisionResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryDomainAdminDivisionResult::getNextPage()const
{
	return nextPage_;
}

std::vector<QueryDomainAdminDivisionResult::AdminDivision> QueryDomainAdminDivisionResult::getAdminDivisions()const
{
	return adminDivisions_;
}

