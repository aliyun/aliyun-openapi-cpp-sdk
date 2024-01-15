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

#include <alibabacloud/linkvisual/model/QueryDeviceEventRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryDeviceEventRecordResult::QueryDeviceEventRecordResult() :
	ServiceResult()
{}

QueryDeviceEventRecordResult::QueryDeviceEventRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceEventRecordResult::~QueryDeviceEventRecordResult()
{}

void QueryDeviceEventRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["VodInfo"];
	for (auto valueDataVodInfo : allDataNode)
	{
		VodInfo dataObject;
		if(!valueDataVodInfo["EndTime"].isNull())
			dataObject.endTime = valueDataVodInfo["EndTime"].asString();
		if(!valueDataVodInfo["FileName"].isNull())
			dataObject.fileName = valueDataVodInfo["FileName"].asString();
		if(!valueDataVodInfo["VodUrl"].isNull())
			dataObject.vodUrl = valueDataVodInfo["VodUrl"].asString();
		if(!valueDataVodInfo["BeginTime"].isNull())
			dataObject.beginTime = valueDataVodInfo["BeginTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<QueryDeviceEventRecordResult::VodInfo> QueryDeviceEventRecordResult::getData()const
{
	return data_;
}

std::string QueryDeviceEventRecordResult::getErrorMessage()const
{
	return errorMessage_;
}

int QueryDeviceEventRecordResult::getCode()const
{
	return code_;
}

bool QueryDeviceEventRecordResult::getSuccess()const
{
	return success_;
}

