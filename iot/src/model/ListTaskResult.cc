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

#include <alibabacloud/iot/model/ListTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListTaskResult::ListTaskResult() :
	ServiceResult()
{}

ListTaskResult::ListTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskResult::~ListTaskResult()
{}

void ListTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["JobId"].isNull())
			dataObject.jobId = valueDatadataItem["JobId"].asString();
		if(!valueDatadataItem["JobName"].isNull())
			dataObject.jobName = valueDatadataItem["JobName"].asString();
		if(!valueDatadataItem["TaskId"].isNull())
			dataObject.taskId = valueDatadataItem["TaskId"].asString();
		if(!valueDatadataItem["ProductKey"].isNull())
			dataObject.productKey = valueDatadataItem["ProductKey"].asString();
		if(!valueDatadataItem["DeviceName"].isNull())
			dataObject.deviceName = valueDatadataItem["DeviceName"].asString();
		if(!valueDatadataItem["IotId"].isNull())
			dataObject.iotId = valueDatadataItem["IotId"].asString();
		if(!valueDatadataItem["Progress"].isNull())
			dataObject.progress = valueDatadataItem["Progress"].asString();
		if(!valueDatadataItem["UtcQueueTime"].isNull())
			dataObject.utcQueueTime = valueDatadataItem["UtcQueueTime"].asString();
		if(!valueDatadataItem["UtcModified"].isNull())
			dataObject.utcModified = valueDatadataItem["UtcModified"].asString();
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = valueDatadataItem["Status"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListTaskResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTaskResult::DataItem> ListTaskResult::getData()const
{
	return data_;
}

std::string ListTaskResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListTaskResult::getCode()const
{
	return code_;
}

bool ListTaskResult::getSuccess()const
{
	return success_;
}

