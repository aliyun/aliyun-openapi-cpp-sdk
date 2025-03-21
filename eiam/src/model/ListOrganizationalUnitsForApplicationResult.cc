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

#include <alibabacloud/eiam/model/ListOrganizationalUnitsForApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListOrganizationalUnitsForApplicationResult::ListOrganizationalUnitsForApplicationResult() :
	ServiceResult()
{}

ListOrganizationalUnitsForApplicationResult::ListOrganizationalUnitsForApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrganizationalUnitsForApplicationResult::~ListOrganizationalUnitsForApplicationResult()
{}

void ListOrganizationalUnitsForApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrganizationalUnitsNode = value["OrganizationalUnits"]["OrganizationalUnit"];
	for (auto valueOrganizationalUnitsOrganizationalUnit : allOrganizationalUnitsNode)
	{
		OrganizationalUnit organizationalUnitsObject;
		if(!valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitId"].isNull())
			organizationalUnitsObject.organizationalUnitId = valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitId"].asString();
		organizationalUnits_.push_back(organizationalUnitsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListOrganizationalUnitsForApplicationResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListOrganizationalUnitsForApplicationResult::OrganizationalUnit> ListOrganizationalUnitsForApplicationResult::getOrganizationalUnits()const
{
	return organizationalUnits_;
}

