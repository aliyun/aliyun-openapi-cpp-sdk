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

#include <alibabacloud/aliyuncvc/model/ListConferenceDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

ListConferenceDevicesResult::ListConferenceDevicesResult() :
	ServiceResult()
{}

ListConferenceDevicesResult::ListConferenceDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConferenceDevicesResult::~ListConferenceDevicesResult()
{}

void ListConferenceDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allConferencesNode = dataNode["Conferences"]["data"];
	for (auto dataNodeConferencesdata : allConferencesNode)
	{
		Data::Data dataObject;
		if(!dataNodeConferencesdata["ActivationCode"].isNull())
			dataObject.activationCode = dataNodeConferencesdata["ActivationCode"].asString();
		if(!dataNodeConferencesdata["ConferenceCode"].isNull())
			dataObject.conferenceCode = dataNodeConferencesdata["ConferenceCode"].asString();
		if(!dataNodeConferencesdata["ConferenceName"].isNull())
			dataObject.conferenceName = dataNodeConferencesdata["ConferenceName"].asString();
		if(!dataNodeConferencesdata["CreateTime"].isNull())
			dataObject.createTime = dataNodeConferencesdata["CreateTime"].asString();
		if(!dataNodeConferencesdata["DeviceModel"].isNull())
			dataObject.deviceModel = dataNodeConferencesdata["DeviceModel"].asString();
		if(!dataNodeConferencesdata["Manufacturer"].isNull())
			dataObject.manufacturer = dataNodeConferencesdata["Manufacturer"].asString();
		if(!dataNodeConferencesdata["PictureUrl"].isNull())
			dataObject.pictureUrl = dataNodeConferencesdata["PictureUrl"].asString();
		if(!dataNodeConferencesdata["SN"].isNull())
			dataObject.sN = dataNodeConferencesdata["SN"].asString();
		if(!dataNodeConferencesdata["Status"].isNull())
			dataObject.status = dataNodeConferencesdata["Status"].asString();
		if(!dataNodeConferencesdata["CastScreenCode"].isNull())
			dataObject.castScreenCode = dataNodeConferencesdata["CastScreenCode"].asString();
		data_.conferences.push_back(dataObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListConferenceDevicesResult::getMessage()const
{
	return message_;
}

ListConferenceDevicesResult::Data ListConferenceDevicesResult::getData()const
{
	return data_;
}

int ListConferenceDevicesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListConferenceDevicesResult::getSuccess()const
{
	return success_;
}

