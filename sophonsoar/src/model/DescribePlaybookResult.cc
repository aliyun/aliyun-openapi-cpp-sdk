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

#include <alibabacloud/sophonsoar/model/DescribePlaybookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribePlaybookResult::DescribePlaybookResult() :
	ServiceResult()
{}

DescribePlaybookResult::DescribePlaybookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlaybookResult::~DescribePlaybookResult()
{}

void DescribePlaybookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto playbookNode = value["Playbook"];
	if(!playbookNode["GmtCreate"].isNull())
		playbook_.gmtCreate = playbookNode["GmtCreate"].asString();
	if(!playbookNode["GmtModified"].isNull())
		playbook_.gmtModified = playbookNode["GmtModified"].asString();
	if(!playbookNode["PlaybookUuid"].isNull())
		playbook_.playbookUuid = playbookNode["PlaybookUuid"].asString();
	if(!playbookNode["Taskflow"].isNull())
		playbook_.taskflow = playbookNode["Taskflow"].asString();
	if(!playbookNode["TaskflowType"].isNull())
		playbook_.taskflowType = playbookNode["TaskflowType"].asString();
	if(!playbookNode["Taskconfig"].isNull())
		playbook_.taskconfig = playbookNode["Taskconfig"].asString();
	if(!playbookNode["TenantId"].isNull())
		playbook_.tenantId = playbookNode["TenantId"].asString();
	if(!playbookNode["Inputtype"].isNull())
		playbook_.inputtype = playbookNode["Inputtype"].asString();
	if(!playbookNode["OwnType"].isNull())
		playbook_.ownType = playbookNode["OwnType"].asString();
	if(!playbookNode["SuccessExeNum"].isNull())
		playbook_.successExeNum = std::stoi(playbookNode["SuccessExeNum"].asString());
	if(!playbookNode["FailExeNum"].isNull())
		playbook_.failExeNum = std::stoi(playbookNode["FailExeNum"].asString());
	if(!playbookNode["LastExeTime"].isNull())
		playbook_.lastExeTime = std::stol(playbookNode["LastExeTime"].asString());
	if(!playbookNode["TriggerInfo"].isNull())
		playbook_.triggerInfo = playbookNode["TriggerInfo"].asString();
	if(!playbookNode["OperateType"].isNull())
		playbook_.operateType = playbookNode["OperateType"].asString();
	if(!playbookNode["DisplayName"].isNull())
		playbook_.displayName = playbookNode["DisplayName"].asString();
	if(!playbookNode["RiskLevel"].isNull())
		playbook_.riskLevel = std::stoi(playbookNode["RiskLevel"].asString());
	if(!playbookNode["Type"].isNull())
		playbook_.type = playbookNode["Type"].asString();
	if(!playbookNode["InputParams"].isNull())
		playbook_.inputParams = playbookNode["InputParams"].asString();
	if(!playbookNode["Description"].isNull())
		playbook_.description = playbookNode["Description"].asString();
	if(!playbookNode["Oss"].isNull())
		playbook_.oss = playbookNode["Oss"].asString();
	if(!playbookNode["Active"].isNull())
		playbook_.active = playbookNode["Active"].asString() == "true";
	if(!playbookNode["Compiledresult"].isNull())
		playbook_.compiledresult = playbookNode["Compiledresult"].asString();
	if(!playbookNode["OnlineOss"].isNull())
		playbook_.onlineOss = playbookNode["OnlineOss"].asString();
	if(!playbookNode["OnlineActive"].isNull())
		playbook_.onlineActive = playbookNode["OnlineActive"].asString() == "true";
	if(!playbookNode["OnlineCompiledresult"].isNull())
		playbook_.onlineCompiledresult = playbookNode["OnlineCompiledresult"].asString();
	if(!playbookNode["ExecuteMode"].isNull())
		playbook_.executeMode = playbookNode["ExecuteMode"].asString();
	if(!playbookNode["Cron"].isNull())
		playbook_.cron = playbookNode["Cron"].asString();
	if(!playbookNode["OnlineExecuteMode"].isNull())
		playbook_.onlineExecuteMode = playbookNode["OnlineExecuteMode"].asString();
	if(!playbookNode["OnlineCron"].isNull())
		playbook_.onlineCron = playbookNode["OnlineCron"].asString();
	if(!playbookNode["SchedulerId"].isNull())
		playbook_.schedulerId = std::stol(playbookNode["SchedulerId"].asString());
	if(!playbookNode["OnlineSchedulerId"].isNull())
		playbook_.onlineSchedulerId = std::stol(playbookNode["OnlineSchedulerId"].asString());
	if(!playbookNode["ParentId"].isNull())
		playbook_.parentId = std::stoi(playbookNode["ParentId"].asString());
	if(!playbookNode["OutputParams"].isNull())
		playbook_.outputParams = playbookNode["OutputParams"].asString();
	if(!playbookNode["TaskflowMd5"].isNull())
		playbook_.taskflowMd5 = playbookNode["TaskflowMd5"].asString();
	if(!playbookNode["OnlineReleaseUuid"].isNull())
		playbook_.onlineReleaseUuid = playbookNode["OnlineReleaseUuid"].asString();
	if(!playbookNode["OnlineReleaseTime"].isNull())
		playbook_.onlineReleaseTime = playbookNode["OnlineReleaseTime"].asString();
	if(!playbookNode["ReleaseUuid"].isNull())
		playbook_.releaseUuid = playbookNode["ReleaseUuid"].asString();
	if(!playbookNode["ReleaseTime"].isNull())
		playbook_.releaseTime = playbookNode["ReleaseTime"].asString();
	if(!playbookNode["OnlineReleaseTaskflowMd5"].isNull())
		playbook_.onlineReleaseTaskflowMd5 = playbookNode["OnlineReleaseTaskflowMd5"].asString();
	if(!playbookNode["ReleaseTaskflowMd5"].isNull())
		playbook_.releaseTaskflowMd5 = playbookNode["ReleaseTaskflowMd5"].asString();
	if(!playbookNode["Flag"].isNull())
		playbook_.flag = std::stoi(playbookNode["Flag"].asString());
	if(!playbookNode["RightLevel"].isNull())
		playbook_.rightLevel = playbookNode["RightLevel"].asString();
	if(!playbookNode["TaskFlowDesc"].isNull())
		playbook_.taskFlowDesc = playbookNode["TaskFlowDesc"].asString();
	if(!playbookNode["DebugFlag"].isNull())
		playbook_.debugFlag = playbookNode["DebugFlag"].asString();
	if(!playbookNode["PlaybookStatus"].isNull())
		playbook_.playbookStatus = std::stoi(playbookNode["PlaybookStatus"].asString());

}

DescribePlaybookResult::Playbook DescribePlaybookResult::getPlaybook()const
{
	return playbook_;
}

