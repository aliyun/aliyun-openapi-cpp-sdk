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

#include <alibabacloud/quickbi-public/model/QueryOrganizationRoleConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryOrganizationRoleConfigResult::QueryOrganizationRoleConfigResult() :
	ServiceResult()
{}

QueryOrganizationRoleConfigResult::QueryOrganizationRoleConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOrganizationRoleConfigResult::~QueryOrganizationRoleConfigResult()
{}

void QueryOrganizationRoleConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["IsSystemRole"].isNull())
		result_.isSystemRole = resultNode["IsSystemRole"].asString() == "true";
	if(!resultNode["RoleId"].isNull())
		result_.roleId = std::stol(resultNode["RoleId"].asString());
	if(!resultNode["RoleName"].isNull())
		result_.roleName = resultNode["RoleName"].asString();
	auto allAuthConfigListNode = resultNode["AuthConfigList"]["authConfigListItem"];
	for (auto resultNodeAuthConfigListauthConfigListItem : allAuthConfigListNode)
	{
		Result::AuthConfigListItem authConfigListItemObject;
		if(!resultNodeAuthConfigListauthConfigListItem["AuthKey"].isNull())
			authConfigListItemObject.authKey = resultNodeAuthConfigListauthConfigListItem["AuthKey"].asString();
		result_.authConfigList.push_back(authConfigListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryOrganizationRoleConfigResult::getSuccess()const
{
	return success_;
}

QueryOrganizationRoleConfigResult::Result QueryOrganizationRoleConfigResult::getResult()const
{
	return result_;
}

