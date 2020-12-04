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
	auto allAdminDivisionsNode = value["AdminDivisions"]["AdminDivision"];
	for (auto valueAdminDivisionsAdminDivision : allAdminDivisionsNode)
	{
		AdminDivision adminDivisionsObject;
		if(!valueAdminDivisionsAdminDivision["DivisionName"].isNull())
			adminDivisionsObject.divisionName = valueAdminDivisionsAdminDivision["DivisionName"].asString();
		auto allChildrenNode = valueAdminDivisionsAdminDivision["Children"]["ChildrenItem"];
		for (auto valueAdminDivisionsAdminDivisionChildrenChildrenItem : allChildrenNode)
		{
			AdminDivision::ChildrenItem childrenObject;
			if(!valueAdminDivisionsAdminDivisionChildrenChildrenItem["ChildDivisionName"].isNull())
				childrenObject.childDivisionName = valueAdminDivisionsAdminDivisionChildrenChildrenItem["ChildDivisionName"].asString();
			adminDivisionsObject.children.push_back(childrenObject);
		}
		adminDivisions_.push_back(adminDivisionsObject);
	}

}

std::vector<QueryDomainAdminDivisionResult::AdminDivision> QueryDomainAdminDivisionResult::getAdminDivisions()const
{
	return adminDivisions_;
}

