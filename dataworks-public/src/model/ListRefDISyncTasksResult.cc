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

#include <alibabacloud/dataworks-public/model/ListRefDISyncTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListRefDISyncTasksResult::ListRefDISyncTasksResult() :
	ServiceResult()
{}

ListRefDISyncTasksResult::ListRefDISyncTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRefDISyncTasksResult::~ListRefDISyncTasksResult()
{}

void ListRefDISyncTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDISyncTasksNode = dataNode["DISyncTasks"]["DISyncTasksItem"];
	for (auto dataNodeDISyncTasksDISyncTasksItem : allDISyncTasksNode)
	{
		Data::DISyncTasksItem dISyncTasksItemObject;
		if(!dataNodeDISyncTasksDISyncTasksItem["DiSourceDatasource"].isNull())
			dISyncTasksItemObject.diSourceDatasource = dataNodeDISyncTasksDISyncTasksItem["DiSourceDatasource"].asString();
		if(!dataNodeDISyncTasksDISyncTasksItem["TaskType"].isNull())
			dISyncTasksItemObject.taskType = dataNodeDISyncTasksDISyncTasksItem["TaskType"].asString();
		if(!dataNodeDISyncTasksDISyncTasksItem["DiDestinationDatasource"].isNull())
			dISyncTasksItemObject.diDestinationDatasource = dataNodeDISyncTasksDISyncTasksItem["DiDestinationDatasource"].asString();
		if(!dataNodeDISyncTasksDISyncTasksItem["NodeName"].isNull())
			dISyncTasksItemObject.nodeName = dataNodeDISyncTasksDISyncTasksItem["NodeName"].asString();
		if(!dataNodeDISyncTasksDISyncTasksItem["NodeId"].isNull())
			dISyncTasksItemObject.nodeId = std::stol(dataNodeDISyncTasksDISyncTasksItem["NodeId"].asString());
		data_.dISyncTasks.push_back(dISyncTasksItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListRefDISyncTasksResult::Data ListRefDISyncTasksResult::getData()const
{
	return data_;
}

bool ListRefDISyncTasksResult::getSuccess()const
{
	return success_;
}

