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

#include <alibabacloud/eiam/model/ListOrganizationalUnitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListOrganizationalUnitsResult::ListOrganizationalUnitsResult() :
	ServiceResult()
{}

ListOrganizationalUnitsResult::ListOrganizationalUnitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrganizationalUnitsResult::~ListOrganizationalUnitsResult()
{}

void ListOrganizationalUnitsResult::parse(const std::string &payload)
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
		if(!valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitName"].isNull())
			organizationalUnitsObject.organizationalUnitName = valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitName"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["ParentId"].isNull())
			organizationalUnitsObject.parentId = valueOrganizationalUnitsOrganizationalUnit["ParentId"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitExternalId"].isNull())
			organizationalUnitsObject.organizationalUnitExternalId = valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitExternalId"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitSourceType"].isNull())
			organizationalUnitsObject.organizationalUnitSourceType = valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitSourceType"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitSourceId"].isNull())
			organizationalUnitsObject.organizationalUnitSourceId = valueOrganizationalUnitsOrganizationalUnit["OrganizationalUnitSourceId"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["CreateTime"].isNull())
			organizationalUnitsObject.createTime = std::stol(valueOrganizationalUnitsOrganizationalUnit["CreateTime"].asString());
		if(!valueOrganizationalUnitsOrganizationalUnit["UpdateTime"].isNull())
			organizationalUnitsObject.updateTime = std::stol(valueOrganizationalUnitsOrganizationalUnit["UpdateTime"].asString());
		if(!valueOrganizationalUnitsOrganizationalUnit["Description"].isNull())
			organizationalUnitsObject.description = valueOrganizationalUnitsOrganizationalUnit["Description"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["InstanceId"].isNull())
			organizationalUnitsObject.instanceId = valueOrganizationalUnitsOrganizationalUnit["InstanceId"].asString();
		if(!valueOrganizationalUnitsOrganizationalUnit["Leaf"].isNull())
			organizationalUnitsObject.leaf = valueOrganizationalUnitsOrganizationalUnit["Leaf"].asString() == "true";
		organizationalUnits_.push_back(organizationalUnitsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListOrganizationalUnitsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListOrganizationalUnitsResult::OrganizationalUnit> ListOrganizationalUnitsResult::getOrganizationalUnits()const
{
	return organizationalUnits_;
}

