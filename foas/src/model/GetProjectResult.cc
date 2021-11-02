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

#include <alibabacloud/foas/model/GetProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetProjectResult::GetProjectResult() :
	ServiceResult()
{}

GetProjectResult::GetProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectResult::~GetProjectResult()
{}

void GetProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectNode = value["Project"];
	if(!projectNode["Name"].isNull())
		project_.name = projectNode["Name"].asString();
	if(!projectNode["State"].isNull())
		project_.state = projectNode["State"].asString();
	if(!projectNode["Creator"].isNull())
		project_.creator = projectNode["Creator"].asString();
	if(!projectNode["CreateTime"].isNull())
		project_.createTime = std::stol(projectNode["CreateTime"].asString());
	if(!projectNode["Modifier"].isNull())
		project_.modifier = projectNode["Modifier"].asString();
	if(!projectNode["ModifyTime"].isNull())
		project_.modifyTime = std::stol(projectNode["ModifyTime"].asString());
	if(!projectNode["Description"].isNull())
		project_.description = projectNode["Description"].asString();
	if(!projectNode["DeployType"].isNull())
		project_.deployType = projectNode["DeployType"].asString();
	if(!projectNode["ClusterId"].isNull())
		project_.clusterId = projectNode["ClusterId"].asString();
	if(!projectNode["ManagerIds"].isNull())
		project_.managerIds = projectNode["ManagerIds"].asString();
	if(!projectNode["Region"].isNull())
		project_.region = projectNode["Region"].asString();
	if(!projectNode["Id"].isNull())
		project_.id = projectNode["Id"].asString();
	if(!projectNode["GlobalJobConfig"].isNull())
		project_.globalJobConfig = projectNode["GlobalJobConfig"].asString();

}

GetProjectResult::Project GetProjectResult::getProject()const
{
	return project_;
}

