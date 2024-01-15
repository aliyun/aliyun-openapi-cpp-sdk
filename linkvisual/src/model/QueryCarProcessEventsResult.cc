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

#include <alibabacloud/linkvisual/model/QueryCarProcessEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryCarProcessEventsResult::QueryCarProcessEventsResult() :
	ServiceResult()
{}

QueryCarProcessEventsResult::QueryCarProcessEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCarProcessEventsResult::~QueryCarProcessEventsResult()
{}

void QueryCarProcessEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageCount"].isNull())
		data_.pageCount = std::stoi(dataNode["PageCount"].asString());
	auto allPageDataNode = dataNode["PageData"]["pageDataItem"];
	for (auto dataNodePageDatapageDataItem : allPageDataNode)
	{
		Data::PageDataItem pageDataItemObject;
		if(!dataNodePageDatapageDataItem["EventPicUrl"].isNull())
			pageDataItemObject.eventPicUrl = dataNodePageDatapageDataItem["EventPicUrl"].asString();
		if(!dataNodePageDatapageDataItem["EventTime"].isNull())
			pageDataItemObject.eventTime = std::stol(dataNodePageDatapageDataItem["EventTime"].asString());
		if(!dataNodePageDatapageDataItem["ActionType"].isNull())
			pageDataItemObject.actionType = std::stoi(dataNodePageDatapageDataItem["ActionType"].asString());
		if(!dataNodePageDatapageDataItem["Confidence"].isNull())
			pageDataItemObject.confidence = std::stoi(dataNodePageDatapageDataItem["Confidence"].asString());
		if(!dataNodePageDatapageDataItem["SubProductKey"].isNull())
			pageDataItemObject.subProductKey = dataNodePageDatapageDataItem["SubProductKey"].asString();
		if(!dataNodePageDatapageDataItem["EventId"].isNull())
			pageDataItemObject.eventId = dataNodePageDatapageDataItem["EventId"].asString();
		if(!dataNodePageDatapageDataItem["SubIotId"].isNull())
			pageDataItemObject.subIotId = dataNodePageDatapageDataItem["SubIotId"].asString();
		if(!dataNodePageDatapageDataItem["AreaIndex"].isNull())
			pageDataItemObject.areaIndex = std::stoi(dataNodePageDatapageDataItem["AreaIndex"].asString());
		if(!dataNodePageDatapageDataItem["EventType"].isNull())
			pageDataItemObject.eventType = std::stoi(dataNodePageDatapageDataItem["EventType"].asString());
		if(!dataNodePageDatapageDataItem["EventPicId"].isNull())
			pageDataItemObject.eventPicId = dataNodePageDatapageDataItem["EventPicId"].asString();
		if(!dataNodePageDatapageDataItem["TaskId"].isNull())
			pageDataItemObject.taskId = dataNodePageDatapageDataItem["TaskId"].asString();
		if(!dataNodePageDatapageDataItem["SubDeviceName"].isNull())
			pageDataItemObject.subDeviceName = dataNodePageDatapageDataItem["SubDeviceName"].asString();
		if(!dataNodePageDatapageDataItem["IotId"].isNull())
			pageDataItemObject.iotId = dataNodePageDatapageDataItem["IotId"].asString();
		if(!dataNodePageDatapageDataItem["SubDeviceNickName"].isNull())
			pageDataItemObject.subDeviceNickName = dataNodePageDatapageDataItem["SubDeviceNickName"].asString();
		if(!dataNodePageDatapageDataItem["PlateNo"].isNull())
			pageDataItemObject.plateNo = dataNodePageDatapageDataItem["PlateNo"].asString();
		data_.pageData.push_back(pageDataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryCarProcessEventsResult::Data QueryCarProcessEventsResult::getData()const
{
	return data_;
}

std::string QueryCarProcessEventsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryCarProcessEventsResult::getCode()const
{
	return code_;
}

bool QueryCarProcessEventsResult::getSuccess()const
{
	return success_;
}

