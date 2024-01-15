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

#include <alibabacloud/linkvisual/model/QueryDeviceRecordLifeCycleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryDeviceRecordLifeCycleResult::QueryDeviceRecordLifeCycleResult() :
	ServiceResult()
{}

QueryDeviceRecordLifeCycleResult::QueryDeviceRecordLifeCycleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceRecordLifeCycleResult::~QueryDeviceRecordLifeCycleResult()
{}

void QueryDeviceRecordLifeCycleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Day"].isNull())
			dataObject.day = std::stoi(valueDataDataItem["Day"].asString());
		if(!valueDataDataItem["IotId"].isNull())
			dataObject.iotId = valueDataDataItem["IotId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<QueryDeviceRecordLifeCycleResult::DataItem> QueryDeviceRecordLifeCycleResult::getData()const
{
	return data_;
}

std::string QueryDeviceRecordLifeCycleResult::getErrorMessage()const
{
	return errorMessage_;
}

int QueryDeviceRecordLifeCycleResult::getCode()const
{
	return code_;
}

bool QueryDeviceRecordLifeCycleResult::getSuccess()const
{
	return success_;
}

