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
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = std::stol(valueDataDataItem["InstanceId"].asString());
		if(!valueDataDataItem["ProjectId"].isNull())
			dataObject.projectId = std::stol(valueDataDataItem["ProjectId"].asString());
		if(!valueDataDataItem["NodeId"].isNull())
			dataObject.nodeId = std::stol(valueDataDataItem["NodeId"].asString());
		if(!valueDataDataItem["NodeName"].isNull())
			dataObject.nodeName = valueDataDataItem["NodeName"].asString();
		if(!valueDataDataItem["Bizdate"].isNull())
			dataObject.bizdate = std::stol(valueDataDataItem["Bizdate"].asString());
		if(!valueDataDataItem["InGroupId"].isNull())
			dataObject.inGroupId = std::stoi(valueDataDataItem["InGroupId"].asString());
		if(!valueDataDataItem["Owner"].isNull())
			dataObject.owner = valueDataDataItem["Owner"].asString();
		if(!valueDataDataItem["PrgType"].isNull())
			dataObject.prgType = std::stoi(valueDataDataItem["PrgType"].asString());
		auto allRunsNode = allDataNode["Runs"]["RunsItem"];
		for (auto allDataNodeRunsRunsItem : allRunsNode)
		{
			DataItem::RunsItem runsObject;
			if(!allDataNodeRunsRunsItem["AbsTime"].isNull())
				runsObject.absTime = std::stol(allDataNodeRunsRunsItem["AbsTime"].asString());
			if(!allDataNodeRunsRunsItem["BeginCast"].isNull())
				runsObject.beginCast = std::stol(allDataNodeRunsRunsItem["BeginCast"].asString());
			if(!allDataNodeRunsRunsItem["BeginRunningTime"].isNull())
				runsObject.beginRunningTime = std::stol(allDataNodeRunsRunsItem["BeginRunningTime"].asString());
			if(!allDataNodeRunsRunsItem["BeginWaitResTime"].isNull())
				runsObject.beginWaitResTime = std::stol(allDataNodeRunsRunsItem["BeginWaitResTime"].asString());
			if(!allDataNodeRunsRunsItem["BeginWaitTimeTime"].isNull())
				runsObject.beginWaitTimeTime = std::stol(allDataNodeRunsRunsItem["BeginWaitTimeTime"].asString());
			if(!allDataNodeRunsRunsItem["Bizdate"].isNull())
				runsObject.bizdate = std::stol(allDataNodeRunsRunsItem["Bizdate"].asString());
			if(!allDataNodeRunsRunsItem["CycTime"].isNull())
				runsObject.cycTime = std::stol(allDataNodeRunsRunsItem["CycTime"].asString());
			if(!allDataNodeRunsRunsItem["EndCast"].isNull())
				runsObject.endCast = std::stol(allDataNodeRunsRunsItem["EndCast"].asString());
			if(!allDataNodeRunsRunsItem["FinishTime"].isNull())
				runsObject.finishTime = std::stol(allDataNodeRunsRunsItem["FinishTime"].asString());
			if(!allDataNodeRunsRunsItem["InGroupId"].isNull())
				runsObject.inGroupId = std::stoi(allDataNodeRunsRunsItem["InGroupId"].asString());
			if(!allDataNodeRunsRunsItem["InstanceId"].isNull())
				runsObject.instanceId = std::stol(allDataNodeRunsRunsItem["InstanceId"].asString());
			if(!allDataNodeRunsRunsItem["NodeId"].isNull())
				runsObject.nodeId = std::stol(allDataNodeRunsRunsItem["NodeId"].asString());
			if(!allDataNodeRunsRunsItem["NodeName"].isNull())
				runsObject.nodeName = allDataNodeRunsRunsItem["NodeName"].asString();
			if(!allDataNodeRunsRunsItem["Owner"].isNull())
				runsObject.owner = allDataNodeRunsRunsItem["Owner"].asString();
			if(!allDataNodeRunsRunsItem["ProjectId"].isNull())
				runsObject.projectId = std::stol(allDataNodeRunsRunsItem["ProjectId"].asString());
			if(!allDataNodeRunsRunsItem["Status"].isNull())
				runsObject.status = allDataNodeRunsRunsItem["Status"].asString();
			dataObject.runs.push_back(runsObject);
		}
		auto allTopicsNode = allDataNode["Topics"]["TopicsItem"];
		for (auto allDataNodeTopicsTopicsItem : allTopicsNode)
		{
			DataItem::TopicsItem topicsObject;
			if(!allDataNodeTopicsTopicsItem["InstanceId"].isNull())
				topicsObject.instanceId = std::stol(allDataNodeTopicsTopicsItem["InstanceId"].asString());
			if(!allDataNodeTopicsTopicsItem["TopicId"].isNull())
				topicsObject.topicId = std::stol(allDataNodeTopicsTopicsItem["TopicId"].asString());
			if(!allDataNodeTopicsTopicsItem["TopicName"].isNull())
				topicsObject.topicName = std::stol(allDataNodeTopicsTopicsItem["TopicName"].asString());
			if(!allDataNodeTopicsTopicsItem["AddTime"].isNull())
				topicsObject.addTime = std::stol(allDataNodeTopicsTopicsItem["AddTime"].asString());
			dataObject.topics.push_back(topicsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

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

