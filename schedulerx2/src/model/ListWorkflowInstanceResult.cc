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

#include <alibabacloud/schedulerx2/model/ListWorkflowInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

ListWorkflowInstanceResult::ListWorkflowInstanceResult() :
	ServiceResult()
{}

ListWorkflowInstanceResult::ListWorkflowInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkflowInstanceResult::~ListWorkflowInstanceResult()
{}

void ListWorkflowInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allWfInstanceInfosNode = dataNode["WfInstanceInfos"]["WfInstanceInfosItem"];
	for (auto dataNodeWfInstanceInfosWfInstanceInfosItem : allWfInstanceInfosNode)
	{
		Data::WfInstanceInfosItem wfInstanceInfosItemObject;
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["WfInstanceId"].isNull())
			wfInstanceInfosItemObject.wfInstanceId = std::stol(dataNodeWfInstanceInfosWfInstanceInfosItem["WfInstanceId"].asString());
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["WorkflowId"].isNull())
			wfInstanceInfosItemObject.workflowId = std::stol(dataNodeWfInstanceInfosWfInstanceInfosItem["WorkflowId"].asString());
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["Status"].isNull())
			wfInstanceInfosItemObject.status = std::stoi(dataNodeWfInstanceInfosWfInstanceInfosItem["Status"].asString());
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["StartTime"].isNull())
			wfInstanceInfosItemObject.startTime = dataNodeWfInstanceInfosWfInstanceInfosItem["StartTime"].asString();
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["EndTime"].isNull())
			wfInstanceInfosItemObject.endTime = dataNodeWfInstanceInfosWfInstanceInfosItem["EndTime"].asString();
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["ScheduleTime"].isNull())
			wfInstanceInfosItemObject.scheduleTime = dataNodeWfInstanceInfosWfInstanceInfosItem["ScheduleTime"].asString();
		if(!dataNodeWfInstanceInfosWfInstanceInfosItem["DataTime"].isNull())
			wfInstanceInfosItemObject.dataTime = dataNodeWfInstanceInfosWfInstanceInfosItem["DataTime"].asString();
		data_.wfInstanceInfos.push_back(wfInstanceInfosItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListWorkflowInstanceResult::getMessage()const
{
	return message_;
}

ListWorkflowInstanceResult::Data ListWorkflowInstanceResult::getData()const
{
	return data_;
}

int ListWorkflowInstanceResult::getCode()const
{
	return code_;
}

bool ListWorkflowInstanceResult::getSuccess()const
{
	return success_;
}

