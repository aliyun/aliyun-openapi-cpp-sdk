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

#include <alibabacloud/mse/model/CreateOrUpdateSwimmingLaneGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CreateOrUpdateSwimmingLaneGroupResult::CreateOrUpdateSwimmingLaneGroupResult() :
	ServiceResult()
{}

CreateOrUpdateSwimmingLaneGroupResult::CreateOrUpdateSwimmingLaneGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateSwimmingLaneGroupResult::~CreateOrUpdateSwimmingLaneGroupResult()
{}

void CreateOrUpdateSwimmingLaneGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["name"].isNull())
		data_.name1 = dataNode["name"].asString();
	if(!dataNode["dbGrayEnable"].isNull())
		data_.dbGrayEnable = dataNode["dbGrayEnable"].asString();
	if(!dataNode["DbGrayEnable"].isNull())
		data_.dbGrayEnable2 = dataNode["DbGrayEnable"].asString();
	if(!dataNode["source"].isNull())
		data_.source = dataNode["source"].asString();
	if(!dataNode["Source"].isNull())
		data_.source3 = dataNode["Source"].asString();
	if(!dataNode["userId"].isNull())
		data_.userId = dataNode["userId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId4 = dataNode["UserId"].asString();
	if(!dataNode["MessageQueueFilterSide"].isNull())
		data_.messageQueueFilterSide = dataNode["MessageQueueFilterSide"].asString();
	if(!dataNode["messageQueueFilterSide"].isNull())
		data_.messageQueueFilterSide5 = dataNode["messageQueueFilterSide"].asString();
	if(!dataNode["appIds"].isNull())
		data_.appIds = dataNode["appIds"].asString();
	if(!dataNode["AppIds"].isNull())
		data_.appIds6 = dataNode["AppIds"].asString();
	if(!dataNode["enable"].isNull())
		data_.enable = dataNode["enable"].asString();
	if(!dataNode["Enable"].isNull())
		data_.enable7 = dataNode["Enable"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["namespace"].isNull())
		data_._namespace8 = dataNode["namespace"].asString();
	if(!dataNode["RecordCanaryDetail"].isNull())
		data_.recordCanaryDetail = dataNode["RecordCanaryDetail"].asString() == "true";
	if(!dataNode["id"].isNull())
		data_.id = std::stol(dataNode["id"].asString());
	if(!dataNode["Id"].isNull())
		data_.id9 = std::stol(dataNode["Id"].asString());
	if(!dataNode["entryApp"].isNull())
		data_.entryApp = dataNode["entryApp"].asString();
	if(!dataNode["EntryApp"].isNull())
		data_.entryApp10 = dataNode["EntryApp"].asString();
	if(!dataNode["region"].isNull())
		data_.region = dataNode["region"].asString();
	if(!dataNode["Region"].isNull())
		data_.region11 = dataNode["Region"].asString();
	if(!dataNode["MessageQueueGrayEnable"].isNull())
		data_.messageQueueGrayEnable = dataNode["MessageQueueGrayEnable"].asString() == "true";
	if(!dataNode["messageQueueGrayEnable"].isNull())
		data_.messageQueueGrayEnable12 = dataNode["messageQueueGrayEnable"].asString() == "true";
	if(!dataNode["status"].isNull())
		data_.status = std::stoi(dataNode["status"].asString());
	if(!dataNode["Status"].isNull())
		data_.status13 = std::stoi(dataNode["Status"].asString());
		auto allApplicationList = dataNode["applicationList"]["applicationList"];
		for (auto value : allApplicationList)
			data_.applicationList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateOrUpdateSwimmingLaneGroupResult::getMessage()const
{
	return message_;
}

CreateOrUpdateSwimmingLaneGroupResult::Data CreateOrUpdateSwimmingLaneGroupResult::getData()const
{
	return data_;
}

std::string CreateOrUpdateSwimmingLaneGroupResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateOrUpdateSwimmingLaneGroupResult::getSuccess()const
{
	return success_;
}

