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

#include <alibabacloud/sae/model/ListAppEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListAppEventsResult::ListAppEventsResult() :
	ServiceResult()
{}

ListAppEventsResult::ListAppEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppEventsResult::~ListAppEventsResult()
{}

void ListAppEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allAppEventEntityNode = dataNode["AppEventEntity"]["AppEventEntityItem"];
	for (auto dataNodeAppEventEntityAppEventEntityItem : allAppEventEntityNode)
	{
		Data::AppEventEntityItem appEventEntityItemObject;
		if(!dataNodeAppEventEntityAppEventEntityItem["ObjectKind"].isNull())
			appEventEntityItemObject.objectKind = dataNodeAppEventEntityAppEventEntityItem["ObjectKind"].asString();
		if(!dataNodeAppEventEntityAppEventEntityItem["EventType"].isNull())
			appEventEntityItemObject.eventType = dataNodeAppEventEntityAppEventEntityItem["EventType"].asString();
		if(!dataNodeAppEventEntityAppEventEntityItem["LastTimestamp"].isNull())
			appEventEntityItemObject.lastTimestamp = dataNodeAppEventEntityAppEventEntityItem["LastTimestamp"].asString();
		if(!dataNodeAppEventEntityAppEventEntityItem["Message"].isNull())
			appEventEntityItemObject.message = dataNodeAppEventEntityAppEventEntityItem["Message"].asString();
		if(!dataNodeAppEventEntityAppEventEntityItem["ObjectName"].isNull())
			appEventEntityItemObject.objectName = dataNodeAppEventEntityAppEventEntityItem["ObjectName"].asString();
		if(!dataNodeAppEventEntityAppEventEntityItem["Reason"].isNull())
			appEventEntityItemObject.reason = dataNodeAppEventEntityAppEventEntityItem["Reason"].asString();
		if(!dataNodeAppEventEntityAppEventEntityItem["FirstTimestamp"].isNull())
			appEventEntityItemObject.firstTimestamp = dataNodeAppEventEntityAppEventEntityItem["FirstTimestamp"].asString();
		data_.appEventEntity.push_back(appEventEntityItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAppEventsResult::getMessage()const
{
	return message_;
}

ListAppEventsResult::Data ListAppEventsResult::getData()const
{
	return data_;
}

std::string ListAppEventsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAppEventsResult::getCode()const
{
	return code_;
}

bool ListAppEventsResult::getSuccess()const
{
	return success_;
}

