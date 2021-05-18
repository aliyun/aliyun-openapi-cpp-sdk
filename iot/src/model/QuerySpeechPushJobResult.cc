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

#include <alibabacloud/iot/model/QuerySpeechPushJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QuerySpeechPushJobResult::QuerySpeechPushJobResult() :
	ServiceResult()
{}

QuerySpeechPushJobResult::QuerySpeechPushJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySpeechPushJobResult::~QuerySpeechPushJobResult()
{}

void QuerySpeechPushJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageId"].isNull())
		data_.pageId = std::stoi(dataNode["PageId"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allListNode = dataNode["List"]["Items"];
	for (auto dataNodeListItems : allListNode)
	{
		Data::Items itemsObject;
		if(!dataNodeListItems["Code"].isNull())
			itemsObject.code = dataNodeListItems["Code"].asString();
		if(!dataNodeListItems["ExpiredTime"].isNull())
			itemsObject.expiredTime = std::stol(dataNodeListItems["ExpiredTime"].asString());
		if(!dataNodeListItems["PushMode"].isNull())
			itemsObject.pushMode = dataNodeListItems["PushMode"].asString();
		if(!dataNodeListItems["IotId"].isNull())
			itemsObject.iotId = dataNodeListItems["IotId"].asString();
		if(!dataNodeListItems["Status"].isNull())
			itemsObject.status = dataNodeListItems["Status"].asString();
		if(!dataNodeListItems["CreatedTime"].isNull())
			itemsObject.createdTime = std::stol(dataNodeListItems["CreatedTime"].asString());
		if(!dataNodeListItems["TotalDeviceNum"].isNull())
			itemsObject.totalDeviceNum = std::stoi(dataNodeListItems["TotalDeviceNum"].asString());
		if(!dataNodeListItems["SuccessDeviceNum"].isNull())
			itemsObject.successDeviceNum = std::stoi(dataNodeListItems["SuccessDeviceNum"].asString());
		if(!dataNodeListItems["SpeechStatus"].isNull())
			itemsObject.speechStatus = dataNodeListItems["SpeechStatus"].asString() == "true";
		if(!dataNodeListItems["FailDeviceNum"].isNull())
			itemsObject.failDeviceNum = std::stoi(dataNodeListItems["FailDeviceNum"].asString());
		if(!dataNodeListItems["SpeechNum"].isNull())
			itemsObject.speechNum = std::stoi(dataNodeListItems["SpeechNum"].asString());
		if(!dataNodeListItems["RunningDeviceNum"].isNull())
			itemsObject.runningDeviceNum = std::stoi(dataNodeListItems["RunningDeviceNum"].asString());
		if(!dataNodeListItems["GroupId"].isNull())
			itemsObject.groupId = dataNodeListItems["GroupId"].asString();
		if(!dataNodeListItems["GroupName"].isNull())
			itemsObject.groupName = dataNodeListItems["GroupName"].asString();
		if(!dataNodeListItems["ProductKey"].isNull())
			itemsObject.productKey = dataNodeListItems["ProductKey"].asString();
		if(!dataNodeListItems["DeviceName"].isNull())
			itemsObject.deviceName = dataNodeListItems["DeviceName"].asString();
		data_.list.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QuerySpeechPushJobResult::Data QuerySpeechPushJobResult::getData()const
{
	return data_;
}

std::string QuerySpeechPushJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QuerySpeechPushJobResult::getCode()const
{
	return code_;
}

bool QuerySpeechPushJobResult::getSuccess()const
{
	return success_;
}

