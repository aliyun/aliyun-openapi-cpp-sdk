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

#include <alibabacloud/emr/model/DescribeETLJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeETLJobResult::DescribeETLJobResult() :
	ServiceResult()
{}

DescribeETLJobResult::DescribeETLJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeETLJobResult::~DescribeETLJobResult()
{}

void DescribeETLJobResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTriggerRuleList = value["TriggerRuleList"]["TriggerRule"];
	for (auto value : allTriggerRuleList)
	{
		TriggerRule triggerRuleListObject;
		if(!value["Enabled"].isNull())
			triggerRuleListObject.enabled = value["Enabled"].asString() == "true";
		if(!value["StartTime"].isNull())
			triggerRuleListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			triggerRuleListObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["CronExpr"].isNull())
			triggerRuleListObject.cronExpr = value["CronExpr"].asString();
		triggerRuleList_.push_back(triggerRuleListObject);
	}
	auto allStageList = value["StageList"]["Stage"];
	for (auto value : allStageList)
	{
		Stage stageListObject;
		if(!value["StageName"].isNull())
			stageListObject.stageName = value["StageName"].asString();
		if(!value["StageType"].isNull())
			stageListObject.stageType = value["StageType"].asString();
		if(!value["StagePlugin"].isNull())
			stageListObject.stagePlugin = value["StagePlugin"].asString();
		if(!value["StageConf"].isNull())
			stageListObject.stageConf = value["StageConf"].asString();
		stageList_.push_back(stageListObject);
	}
	auto allStageConnectionList = value["StageConnectionList"]["StageConnection"];
	for (auto value : allStageConnectionList)
	{
		StageConnection stageConnectionListObject;
		if(!value["From"].isNull())
			stageConnectionListObject.from = value["From"].asString();
		if(!value["To"].isNull())
			stageConnectionListObject.to = value["To"].asString();
		if(!value["Port"].isNull())
			stageConnectionListObject.port = value["Port"].asString();
		stageConnectionList_.push_back(stageConnectionListObject);
	}
	auto clusterConfigNode = value["ClusterConfig"];
	if(!clusterConfigNode["IsOnDemand"].isNull())
		clusterConfig_.isOnDemand = clusterConfigNode["IsOnDemand"].asString() == "true";
	if(!clusterConfigNode["ClusterId"].isNull())
		clusterConfig_.clusterId = clusterConfigNode["ClusterId"].asString();
	if(!clusterConfigNode["Queue"].isNull())
		clusterConfig_.queue = clusterConfigNode["Queue"].asString();
	if(!clusterConfigNode["UserName"].isNull())
		clusterConfig_.userName = clusterConfigNode["UserName"].asString();
	if(!clusterConfigNode["RecordRate"].isNull())
		clusterConfig_.recordRate = std::stol(clusterConfigNode["RecordRate"].asString());
	if(!clusterConfigNode["SizeRate"].isNull())
		clusterConfig_.sizeRate = std::stol(clusterConfigNode["SizeRate"].asString());
	auto driverResourceNode = clusterConfigNode["DriverResource"];
	if(!driverResourceNode["Vcores"].isNull())
		clusterConfig_.driverResource.vcores = std::stoi(driverResourceNode["Vcores"].asString());
	if(!driverResourceNode["MemSize"].isNull())
		clusterConfig_.driverResource.memSize = std::stoi(driverResourceNode["MemSize"].asString());
	auto executorResourceNode = clusterConfigNode["ExecutorResource"];
	if(!executorResourceNode["Vcores"].isNull())
		clusterConfig_.executorResource.vcores = std::stoi(executorResourceNode["Vcores"].asString());
	if(!executorResourceNode["MemSize"].isNull())
		clusterConfig_.executorResource.memSize = std::stoi(executorResourceNode["MemSize"].asString());
	auto alertConfigNode = value["AlertConfig"];
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		AlertConfig::Item itemObject;
		if(!value["Enable"].isNull())
			itemObject.enable = value["Enable"].asString() == "true";
		if(!value["EventId"].isNull())
			itemObject.eventId = value["EventId"].asString();
		auto allAlertUserGroupIdList = value["AlertUserGroupIdList"]["AlertUserGroupId"];
		for (auto value : allAlertUserGroupIdList)
			itemObject.alertUserGroupIdList.push_back(value.asString());
		auto allAlertDingDingGroupList = value["AlertDingDingGroupList"]["AlertDingDingGroup"];
		for (auto value : allAlertDingDingGroupList)
			itemObject.alertDingDingGroupList.push_back(value.asString());
		alertConfig_.items.push_back(itemObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CategoryId"].isNull())
		categoryId_ = value["CategoryId"].asString();
	if(!value["Graph"].isNull())
		graph_ = value["Graph"].asString();

}

std::string DescribeETLJobResult::getCategoryId()const
{
	return categoryId_;
}

std::string DescribeETLJobResult::getDescription()const
{
	return description_;
}

std::string DescribeETLJobResult::getGraph()const
{
	return graph_;
}

DescribeETLJobResult::AlertConfig DescribeETLJobResult::getAlertConfig()const
{
	return alertConfig_;
}

std::vector<DescribeETLJobResult::StageConnection> DescribeETLJobResult::getStageConnectionList()const
{
	return stageConnectionList_;
}

std::vector<DescribeETLJobResult::Stage> DescribeETLJobResult::getStageList()const
{
	return stageList_;
}

std::vector<DescribeETLJobResult::TriggerRule> DescribeETLJobResult::getTriggerRuleList()const
{
	return triggerRuleList_;
}

std::string DescribeETLJobResult::getId()const
{
	return id_;
}

DescribeETLJobResult::ClusterConfig DescribeETLJobResult::getClusterConfig()const
{
	return clusterConfig_;
}

std::string DescribeETLJobResult::getName()const
{
	return name_;
}

