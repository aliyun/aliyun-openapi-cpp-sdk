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

#include <alibabacloud/imm/model/ListOfficeConversionTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListOfficeConversionTaskResult::ListOfficeConversionTaskResult() :
	ServiceResult()
{}

ListOfficeConversionTaskResult::ListOfficeConversionTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOfficeConversionTaskResult::~ListOfficeConversionTaskResult()
{}

void ListOfficeConversionTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["TasksItem"];
	for (auto value : allTasks)
	{
		TasksItem tasksObject;
		if(!value["TaskId"].isNull())
			tasksObject.taskId = value["TaskId"].asString();
		if(!value["Status"].isNull())
			tasksObject.status = value["Status"].asString();
		if(!value["Percent"].isNull())
			tasksObject.percent = std::stoi(value["Percent"].asString());
		if(!value["PageCount"].isNull())
			tasksObject.pageCount = std::stoi(value["PageCount"].asString());
		if(!value["SrcUri"].isNull())
			tasksObject.srcUri = value["SrcUri"].asString();
		if(!value["TgtType"].isNull())
			tasksObject.tgtType = value["TgtType"].asString();
		if(!value["TgtUri"].isNull())
			tasksObject.tgtUri = value["TgtUri"].asString();
		if(!value["ImageSpec"].isNull())
			tasksObject.imageSpec = value["ImageSpec"].asString();
		if(!value["NotifyTopicName"].isNull())
			tasksObject.notifyTopicName = value["NotifyTopicName"].asString();
		if(!value["NotifyEndpoint"].isNull())
			tasksObject.notifyEndpoint = value["NotifyEndpoint"].asString();
		if(!value["ExternalID"].isNull())
			tasksObject.externalID = value["ExternalID"].asString();
		if(!value["CreateTime"].isNull())
			tasksObject.createTime = value["CreateTime"].asString();
		if(!value["FinishTime"].isNull())
			tasksObject.finishTime = value["FinishTime"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListOfficeConversionTaskResult::TasksItem> ListOfficeConversionTaskResult::getTasks()const
{
	return tasks_;
}

std::string ListOfficeConversionTaskResult::getNextMarker()const
{
	return nextMarker_;
}

