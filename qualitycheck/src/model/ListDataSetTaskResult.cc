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

#include <alibabacloud/qualitycheck/model/ListDataSetTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListDataSetTaskResult::ListDataSetTaskResult() :
	ServiceResult()
{}

ListDataSetTaskResult::ListDataSetTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSetTaskResult::~ListDataSetTaskResult()
{}

void ListDataSetTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PageTaskInfo"];
	for (auto valueDataPageTaskInfo : allDataNode)
	{
		PageTaskInfo dataObject;
		if(!valueDataPageTaskInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataPageTaskInfo["Status"].asString());
		if(!valueDataPageTaskInfo["IsTaskComplete"].isNull())
			dataObject.isTaskComplete = valueDataPageTaskInfo["IsTaskComplete"].asString() == "true";
		if(!valueDataPageTaskInfo["ScheduleRatio"].isNull())
			dataObject.scheduleRatio = std::stof(valueDataPageTaskInfo["ScheduleRatio"].asString());
		if(!valueDataPageTaskInfo["TaskComplete"].isNull())
			dataObject.taskComplete = valueDataPageTaskInfo["TaskComplete"].asString() == "true";
		if(!valueDataPageTaskInfo["DataSetSize"].isNull())
			dataObject.dataSetSize = std::stoi(valueDataPageTaskInfo["DataSetSize"].asString());
		if(!valueDataPageTaskInfo["RuleSize"].isNull())
			dataObject.ruleSize = std::stoi(valueDataPageTaskInfo["RuleSize"].asString());
		if(!valueDataPageTaskInfo["JobName"].isNull())
			dataObject.jobName = valueDataPageTaskInfo["JobName"].asString();
		if(!valueDataPageTaskInfo["TaskId"].isNull())
			dataObject.taskId = valueDataPageTaskInfo["TaskId"].asString();
		auto allRuleNameInfoListNode = valueDataPageTaskInfo["RuleNameInfoList"]["RuleNameInfo"];
		for (auto valueDataPageTaskInfoRuleNameInfoListRuleNameInfo : allRuleNameInfoListNode)
		{
			PageTaskInfo::RuleNameInfo ruleNameInfoListObject;
			if(!valueDataPageTaskInfoRuleNameInfoListRuleNameInfo["RuleName"].isNull())
				ruleNameInfoListObject.ruleName = valueDataPageTaskInfoRuleNameInfoListRuleNameInfo["RuleName"].asString();
			if(!valueDataPageTaskInfoRuleNameInfoListRuleNameInfo["Rid"].isNull())
				ruleNameInfoListObject.rid = std::stoi(valueDataPageTaskInfoRuleNameInfoListRuleNameInfo["Rid"].asString());
			dataObject.ruleNameInfoList.push_back(ruleNameInfoListObject);
		}
		auto allDataSets = value["DataSets"]["dataSets"];
		for (auto value : allDataSets)
			dataObject.dataSets.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["DataSize"].isNull())
		dataSize_ = std::stoi(value["DataSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["IsAllcomplete"].isNull())
		isAllcomplete_ = std::stoi(value["IsAllcomplete"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListDataSetTaskResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDataSetTaskResult::getMessage()const
{
	return message_;
}

int ListDataSetTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListDataSetTaskResult::getCurrentPage()const
{
	return currentPage_;
}

int ListDataSetTaskResult::getDataSize()const
{
	return dataSize_;
}

std::vector<ListDataSetTaskResult::PageTaskInfo> ListDataSetTaskResult::getData()const
{
	return data_;
}

int ListDataSetTaskResult::getIsAllcomplete()const
{
	return isAllcomplete_;
}

std::string ListDataSetTaskResult::getCode()const
{
	return code_;
}

bool ListDataSetTaskResult::getSuccess()const
{
	return success_;
}

