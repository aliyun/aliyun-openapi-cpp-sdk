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

#include <alibabacloud/eiam/model/GetRootOrganizationalUnitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetRootOrganizationalUnitResult::GetRootOrganizationalUnitResult() :
	ServiceResult()
{}

GetRootOrganizationalUnitResult::GetRootOrganizationalUnitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRootOrganizationalUnitResult::~GetRootOrganizationalUnitResult()
{}

void GetRootOrganizationalUnitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto organizationalUnitNode = value["OrganizationalUnit"];
	if(!organizationalUnitNode["InstanceId"].isNull())
		organizationalUnit_.instanceId = organizationalUnitNode["InstanceId"].asString();
	if(!organizationalUnitNode["OrganizationalUnitId"].isNull())
		organizationalUnit_.organizationalUnitId = organizationalUnitNode["OrganizationalUnitId"].asString();
	if(!organizationalUnitNode["OrganizationalUnitName"].isNull())
		organizationalUnit_.organizationalUnitName = organizationalUnitNode["OrganizationalUnitName"].asString();
	if(!organizationalUnitNode["CreateTime"].isNull())
		organizationalUnit_.createTime = std::stol(organizationalUnitNode["CreateTime"].asString());
	if(!organizationalUnitNode["UpdateTime"].isNull())
		organizationalUnit_.updateTime = std::stol(organizationalUnitNode["UpdateTime"].asString());
	if(!organizationalUnitNode["Description"].isNull())
		organizationalUnit_.description = organizationalUnitNode["Description"].asString();

}

GetRootOrganizationalUnitResult::OrganizationalUnit GetRootOrganizationalUnitResult::getOrganizationalUnit()const
{
	return organizationalUnit_;
}

