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

#include <alibabacloud/dataworks-public/model/GetBaselineKeyPathResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetBaselineKeyPathResult::GetBaselineKeyPathResult() :
	ServiceResult()
{}

GetBaselineKeyPathResult::GetBaselineKeyPathResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBaselineKeyPathResult::~GetBaselineKeyPathResult()
{}

void GetBaselineKeyPathResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Owner"].isNull())
			dataObject.owner = valueDataDataItem["Owner"].asString();
		if(!valueDataDataItem["NodeName"].isNull())
			dataObject.nodeName = valueDataDataItem["NodeName"].asString();
		if(!valueDataDataItem["Bizdate"].isNull())
			dataObject.bizdate = std::stol(valueDataDataItem["Bizdate"].asString());
		if(!valueDataDataItem["ProjectId"].isNull())
			dataObject.projectId = std::stol(valueDataDataItem["ProjectId"].asString());
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = std::stol(valueDataDataItem["InstanceId"].asString());
		if(!valueDataDataItem["PrgType"].isNull())
			dataObject.prgType = std::stoi(valueDataDataItem["PrgType"].asString());
		if(!valueDataDataItem["NodeId"].isNull())
			dataObject.nodeId = std::stol(valueDataDataItem["NodeId"].asString());
		if(!valueDataDataItem["InGroupId"].isNull())
			dataObject.inGroupId = std::stoi(valueDataDataItem["InGroupId"].asString());
		auto allRunsNode = valueDataDataItem["Runs"]["RunsItem"];
		for (auto valueDataDataItemRunsRunsItem : allRunsNode)
		{
			DataItem::RunsItem runsObject;
			if(!valueDataDataItemRunsRunsItem["Status"].isNull())
				runsObject.status = valueDataDataItemRunsRunsItem["Status"].asString();
			if(!valueDataDataItemRunsRunsItem["AbsTime"].isNull())
				runsObject.absTime = std::stol(valueDataDataItemRunsRunsItem["AbsTime"].asString());
			if(!valueDataDataItemRunsRunsItem["BeginRunningTime"].isNull())
				runsObject.beginRunningTime = std::stol(valueDataDataItemRunsRunsItem["BeginRunningTime"].asString());
			if(!valueDataDataItemRunsRunsItem["FinishTime"].isNull())
				runsObject.finishTime = std::stol(valueDataDataItemRunsRunsItem["FinishTime"].asString());
			if(!valueDataDataItemRunsRunsItem["BeginCast"].isNull())
				runsObject.beginCast = std::stol(valueDataDataItemRunsRunsItem["BeginCast"].asString());
			if(!valueDataDataItemRunsRunsItem["EndCast"].isNull())
				runsObject.endCast = std::stol(valueDataDataItemRunsRunsItem["EndCast"].asString());
			if(!valueDataDataItemRunsRunsItem["BeginWaitResTime"].isNull())
				runsObject.beginWaitResTime = std::stol(valueDataDataItemRunsRunsItem["BeginWaitResTime"].asString());
			if(!valueDataDataItemRunsRunsItem["BeginWaitTimeTime"].isNull())
				runsObject.beginWaitTimeTime = std::stol(valueDataDataItemRunsRunsItem["BeginWaitTimeTime"].asString());
			dataObject.runs.push_back(runsObject);
		}
		auto allTopicsNode = valueDataDataItem["Topics"]["TopicsItem"];
		for (auto valueDataDataItemTopicsTopicsItem : allTopicsNode)
		{
			DataItem::TopicsItem topicsObject;
			if(!valueDataDataItemTopicsTopicsItem["TopicName"].isNull())
				topicsObject.topicName = valueDataDataItemTopicsTopicsItem["TopicName"].asString();
			if(!valueDataDataItemTopicsTopicsItem["InstanceId"].isNull())
				topicsObject.instanceId = std::stol(valueDataDataItemTopicsTopicsItem["InstanceId"].asString());
			if(!valueDataDataItemTopicsTopicsItem["TopicId"].isNull())
				topicsObject.topicId = std::stol(valueDataDataItemTopicsTopicsItem["TopicId"].asString());
			if(!valueDataDataItemTopicsTopicsItem["AddTime"].isNull())
				topicsObject.addTime = std::stol(valueDataDataItemTopicsTopicsItem["AddTime"].asString());
			dataObject.topics.push_back(topicsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetBaselineKeyPathResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetBaselineKeyPathResult::DataItem> GetBaselineKeyPathResult::getData()const
{
	return data_;
}

std::string GetBaselineKeyPathResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetBaselineKeyPathResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetBaselineKeyPathResult::getSuccess()const
{
	return success_;
}

