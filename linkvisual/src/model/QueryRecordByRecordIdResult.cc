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

#include <alibabacloud/linkvisual/model/QueryRecordByRecordIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryRecordByRecordIdResult::QueryRecordByRecordIdResult() :
	ServiceResult()
{}

QueryRecordByRecordIdResult::QueryRecordByRecordIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRecordByRecordIdResult::~QueryRecordByRecordIdResult()
{}

void QueryRecordByRecordIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EndTime"].isNull())
			dataObject.endTime = valueDataDataItem["EndTime"].asString();
		if(!valueDataDataItem["FileName"].isNull())
			dataObject.fileName = valueDataDataItem["FileName"].asString();
		if(!valueDataDataItem["VodUrl"].isNull())
			dataObject.vodUrl = valueDataDataItem["VodUrl"].asString();
		if(!valueDataDataItem["BeginTime"].isNull())
			dataObject.beginTime = valueDataDataItem["BeginTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<QueryRecordByRecordIdResult::DataItem> QueryRecordByRecordIdResult::getData()const
{
	return data_;
}

std::string QueryRecordByRecordIdResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryRecordByRecordIdResult::getCode()const
{
	return code_;
}

bool QueryRecordByRecordIdResult::getSuccess()const
{
	return success_;
}

