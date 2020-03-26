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

#include <alibabacloud/cs/model/DescribeClusterAddonUpgradeStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClusterAddonUpgradeStatusResult::DescribeClusterAddonUpgradeStatusResult() :
	ServiceResult()
{}

DescribeClusterAddonUpgradeStatusResult::DescribeClusterAddonUpgradeStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterAddonUpgradeStatusResult::~DescribeClusterAddonUpgradeStatusResult()
{}

void DescribeClusterAddonUpgradeStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto componentIdNode = value["ComponentId"];
	if(!componentIdNode["template"].isNull())
		componentId_._template = componentIdNode["template"].asString();
	if(!componentIdNode["can_upgrade"].isNull())
		componentId_.can_upgrade = componentIdNode["can_upgrade"].asString() == "true";
	if(!componentIdNode["changed"].isNull())
		componentId_.changed = componentIdNode["changed"].asString();
	auto addon_infoNode = componentIdNode["addon_info"];
	if(!addon_infoNode["component_name"].isNull())
		componentId_.addon_info.component_name = addon_infoNode["component_name"].asString();
	if(!addon_infoNode["ready_to_upgrade"].isNull())
		componentId_.addon_info.ready_to_upgrade = addon_infoNode["ready_to_upgrade"].asString();
	if(!addon_infoNode["message"].isNull())
		componentId_.addon_info.message = addon_infoNode["message"].asString();
	if(!addon_infoNode["version"].isNull())
		componentId_.addon_info.version = addon_infoNode["version"].asString();
	if(!addon_infoNode["yaml"].isNull())
		componentId_.addon_info.yaml = addon_infoNode["yaml"].asString();
	auto tasksNode = componentIdNode["tasks"];
	if(!tasksNode["finished_at"].isNull())
		componentId_.tasks.finished_at = tasksNode["finished_at"].asString();
	if(!tasksNode["master_url"].isNull())
		componentId_.tasks.master_url = tasksNode["master_url"].asString();
	if(!tasksNode["created_at"].isNull())
		componentId_.tasks.created_at = tasksNode["created_at"].asString();
	if(!tasksNode["status"].isNull())
		componentId_.tasks.status = tasksNode["status"].asString();

}

DescribeClusterAddonUpgradeStatusResult::ComponentId DescribeClusterAddonUpgradeStatusResult::getComponentId()const
{
	return componentId_;
}

