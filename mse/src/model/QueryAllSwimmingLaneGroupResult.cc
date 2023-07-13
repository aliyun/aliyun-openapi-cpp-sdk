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

#include <alibabacloud/mse/model/QueryAllSwimmingLaneGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryAllSwimmingLaneGroupResult::QueryAllSwimmingLaneGroupResult() :
	ServiceResult()
{}

QueryAllSwimmingLaneGroupResult::QueryAllSwimmingLaneGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAllSwimmingLaneGroupResult::~QueryAllSwimmingLaneGroupResult()
{}

void QueryAllSwimmingLaneGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SwimmingLaneGroup"];
	for (auto valueDataSwimmingLaneGroup : allDataNode)
	{
		SwimmingLaneGroup dataObject;
		if(!valueDataSwimmingLaneGroup["Name"].isNull())
			dataObject.name = valueDataSwimmingLaneGroup["Name"].asString();
		if(!valueDataSwimmingLaneGroup["name"].isNull())
			dataObject.name1 = valueDataSwimmingLaneGroup["name"].asString();
		if(!valueDataSwimmingLaneGroup["dbGrayEnable"].isNull())
			dataObject.dbGrayEnable = valueDataSwimmingLaneGroup["dbGrayEnable"].asString();
		if(!valueDataSwimmingLaneGroup["DbGrayEnable"].isNull())
			dataObject.dbGrayEnable2 = valueDataSwimmingLaneGroup["DbGrayEnable"].asString();
		if(!valueDataSwimmingLaneGroup["source"].isNull())
			dataObject.source = valueDataSwimmingLaneGroup["source"].asString();
		if(!valueDataSwimmingLaneGroup["Source"].isNull())
			dataObject.source3 = valueDataSwimmingLaneGroup["Source"].asString();
		if(!valueDataSwimmingLaneGroup["userId"].isNull())
			dataObject.userId = valueDataSwimmingLaneGroup["userId"].asString();
		if(!valueDataSwimmingLaneGroup["UserId"].isNull())
			dataObject.userId4 = valueDataSwimmingLaneGroup["UserId"].asString();
		if(!valueDataSwimmingLaneGroup["MessageQueueFilterSide"].isNull())
			dataObject.messageQueueFilterSide = valueDataSwimmingLaneGroup["MessageQueueFilterSide"].asString();
		if(!valueDataSwimmingLaneGroup["messageQueueFilterSide"].isNull())
			dataObject.messageQueueFilterSide5 = valueDataSwimmingLaneGroup["messageQueueFilterSide"].asString();
		if(!valueDataSwimmingLaneGroup["appIds"].isNull())
			dataObject.appIds = valueDataSwimmingLaneGroup["appIds"].asString();
		if(!valueDataSwimmingLaneGroup["AppIds"].isNull())
			dataObject.appIds6 = valueDataSwimmingLaneGroup["AppIds"].asString();
		if(!valueDataSwimmingLaneGroup["enable"].isNull())
			dataObject.enable = valueDataSwimmingLaneGroup["enable"].asString();
		if(!valueDataSwimmingLaneGroup["Enable"].isNull())
			dataObject.enable7 = valueDataSwimmingLaneGroup["Enable"].asString();
		if(!valueDataSwimmingLaneGroup["Namespace"].isNull())
			dataObject._namespace = valueDataSwimmingLaneGroup["Namespace"].asString();
		if(!valueDataSwimmingLaneGroup["namespace"].isNull())
			dataObject._namespace8 = valueDataSwimmingLaneGroup["namespace"].asString();
		if(!valueDataSwimmingLaneGroup["RecordCanaryDetail"].isNull())
			dataObject.recordCanaryDetail = valueDataSwimmingLaneGroup["RecordCanaryDetail"].asString() == "true";
		if(!valueDataSwimmingLaneGroup["id"].isNull())
			dataObject.id = std::stol(valueDataSwimmingLaneGroup["id"].asString());
		if(!valueDataSwimmingLaneGroup["Id"].isNull())
			dataObject.id9 = std::stol(valueDataSwimmingLaneGroup["Id"].asString());
		if(!valueDataSwimmingLaneGroup["entryApp"].isNull())
			dataObject.entryApp = valueDataSwimmingLaneGroup["entryApp"].asString();
		if(!valueDataSwimmingLaneGroup["EntryApp"].isNull())
			dataObject.entryApp10 = valueDataSwimmingLaneGroup["EntryApp"].asString();
		if(!valueDataSwimmingLaneGroup["region"].isNull())
			dataObject.region = valueDataSwimmingLaneGroup["region"].asString();
		if(!valueDataSwimmingLaneGroup["Region"].isNull())
			dataObject.region11 = valueDataSwimmingLaneGroup["Region"].asString();
		if(!valueDataSwimmingLaneGroup["MessageQueueGrayEnable"].isNull())
			dataObject.messageQueueGrayEnable = valueDataSwimmingLaneGroup["MessageQueueGrayEnable"].asString() == "true";
		if(!valueDataSwimmingLaneGroup["messageQueueGrayEnable"].isNull())
			dataObject.messageQueueGrayEnable12 = valueDataSwimmingLaneGroup["messageQueueGrayEnable"].asString() == "true";
		if(!valueDataSwimmingLaneGroup["status"].isNull())
			dataObject.status = std::stoi(valueDataSwimmingLaneGroup["status"].asString());
		if(!valueDataSwimmingLaneGroup["Status"].isNull())
			dataObject.status13 = std::stoi(valueDataSwimmingLaneGroup["Status"].asString());
		auto allApplicationList = value["applicationList"]["ApplicationList"];
		for (auto value : allApplicationList)
			dataObject.applicationList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string QueryAllSwimmingLaneGroupResult::getMessage()const
{
	return message_;
}

int QueryAllSwimmingLaneGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QueryAllSwimmingLaneGroupResult::SwimmingLaneGroup> QueryAllSwimmingLaneGroupResult::getData()const
{
	return data_;
}

std::string QueryAllSwimmingLaneGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryAllSwimmingLaneGroupResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int QueryAllSwimmingLaneGroupResult::getCode()const
{
	return code_;
}

bool QueryAllSwimmingLaneGroupResult::getSuccess()const
{
	return success_;
}

