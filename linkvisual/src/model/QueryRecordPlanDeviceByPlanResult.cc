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

#include <alibabacloud/linkvisual/model/QueryRecordPlanDeviceByPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryRecordPlanDeviceByPlanResult::QueryRecordPlanDeviceByPlanResult() :
	ServiceResult()
{}

QueryRecordPlanDeviceByPlanResult::QueryRecordPlanDeviceByPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRecordPlanDeviceByPlanResult::~QueryRecordPlanDeviceByPlanResult()
{}

void QueryRecordPlanDeviceByPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageCount"].isNull())
		data_.pageCount = std::stoi(dataNode["PageCount"].asString());
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["StreamType"].isNull())
			listItemObject.streamType = std::stoi(dataNodeListListItem["StreamType"].asString());
		if(!dataNodeListListItem["IotId"].isNull())
			listItemObject.iotId = dataNodeListListItem["IotId"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryRecordPlanDeviceByPlanResult::Data QueryRecordPlanDeviceByPlanResult::getData()const
{
	return data_;
}

std::string QueryRecordPlanDeviceByPlanResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryRecordPlanDeviceByPlanResult::getCode()const
{
	return code_;
}

bool QueryRecordPlanDeviceByPlanResult::getSuccess()const
{
	return success_;
}

