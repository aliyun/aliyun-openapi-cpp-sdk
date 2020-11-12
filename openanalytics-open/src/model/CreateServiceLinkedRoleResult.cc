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

#include <alibabacloud/openanalytics-open/model/CreateServiceLinkedRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

CreateServiceLinkedRoleResult::CreateServiceLinkedRoleResult() :
	ServiceResult()
{}

CreateServiceLinkedRoleResult::CreateServiceLinkedRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateServiceLinkedRoleResult::~CreateServiceLinkedRoleResult()
{}

void CreateServiceLinkedRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Arn"].isNull())
			dataObject.arn = valueDataDataItem["Arn"].asString();
		if(!valueDataDataItem["AssumeRolePolicyDocument"].isNull())
			dataObject.assumeRolePolicyDocument = valueDataDataItem["AssumeRolePolicyDocument"].asString();
		if(!valueDataDataItem["CreateDate"].isNull())
			dataObject.createDate = valueDataDataItem["CreateDate"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["IsServiceLinkRole"].isNull())
			dataObject.isServiceLinkRole = valueDataDataItem["IsServiceLinkRole"].asString() == "true";
		if(!valueDataDataItem["RoleId"].isNull())
			dataObject.roleId = valueDataDataItem["RoleId"].asString();
		if(!valueDataDataItem["RoleName"].isNull())
			dataObject.roleName = valueDataDataItem["RoleName"].asString();
		if(!valueDataDataItem["RolePrincipalName"].isNull())
			dataObject.rolePrincipalName = valueDataDataItem["RolePrincipalName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<CreateServiceLinkedRoleResult::DataItem> CreateServiceLinkedRoleResult::getData()const
{
	return data_;
}

std::string CreateServiceLinkedRoleResult::getRegionId()const
{
	return regionId_;
}

