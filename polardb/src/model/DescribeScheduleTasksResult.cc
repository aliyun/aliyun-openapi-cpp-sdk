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

#include <alibabacloud/polardb/model/DescribeScheduleTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeScheduleTasksResult::DescribeScheduleTasksResult() :
	ServiceResult()
{}

DescribeScheduleTasksResult::DescribeScheduleTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScheduleTasksResult::~DescribeScheduleTasksResult()
{}

void DescribeScheduleTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["items"];
	for (auto valueDataitems : allDataNode)
	{
		Items dataObject;
		if(!valueDataitems["Action"].isNull())
			dataObject.action = valueDataitems["Action"].asString();
		if(!valueDataitems["Args"].isNull())
			dataObject.args = valueDataitems["Args"].asString();
		if(!valueDataitems["GmtCreate"].isNull())
			dataObject.gmtCreate = std::stol(valueDataitems["GmtCreate"].asString());
		if(!valueDataitems["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataitems["GmtModified"].asString());
		if(!valueDataitems["DBClusterId"].isNull())
			dataObject.dBClusterId = valueDataitems["DBClusterId"].asString();
		if(!valueDataitems["MaxRetryTime"].isNull())
			dataObject.maxRetryTime = std::stoi(valueDataitems["MaxRetryTime"].asString());
		if(!valueDataitems["Mutex"].isNull())
			dataObject.mutex = valueDataitems["Mutex"].asString();
		if(!valueDataitems["OrderId"].isNull())
			dataObject.orderId = valueDataitems["OrderId"].asString();
		if(!valueDataitems["PlannedEndTime"].isNull())
			dataObject.plannedEndTime = std::stol(valueDataitems["PlannedEndTime"].asString());
		if(!valueDataitems["PlannedStartTime"].isNull())
			dataObject.plannedStartTime = std::stol(valueDataitems["PlannedStartTime"].asString());
		if(!valueDataitems["PlannedTime"].isNull())
			dataObject.plannedTime = std::stol(valueDataitems["PlannedTime"].asString());
		if(!valueDataitems["ProductCode"].isNull())
			dataObject.productCode = valueDataitems["ProductCode"].asString();
		if(!valueDataitems["Region"].isNull())
			dataObject.region = valueDataitems["Region"].asString();
		if(!valueDataitems["Response"].isNull())
			dataObject.response = valueDataitems["Response"].asString();
		if(!valueDataitems["RetryTime"].isNull())
			dataObject.retryTime = std::stoi(valueDataitems["RetryTime"].asString());
		if(!valueDataitems["Status"].isNull())
			dataObject.status = valueDataitems["Status"].asString();
		if(!valueDataitems["TaskId"].isNull())
			dataObject.taskId = valueDataitems["TaskId"].asString();
		if(!valueDataitems["Type"].isNull())
			dataObject.type = std::stoi(valueDataitems["Type"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeScheduleTasksResult::getMessage()const
{
	return message_;
}

int DescribeScheduleTasksResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeScheduleTasksResult::Items> DescribeScheduleTasksResult::getData()const
{
	return data_;
}

std::string DescribeScheduleTasksResult::getCode()const
{
	return code_;
}

bool DescribeScheduleTasksResult::getSuccess()const
{
	return success_;
}

