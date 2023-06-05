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

#include <alibabacloud/dataworks-public/model/ListBaselinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListBaselinesResult::ListBaselinesResult() :
	ServiceResult()
{}

ListBaselinesResult::ListBaselinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBaselinesResult::~ListBaselinesResult()
{}

void ListBaselinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = dataNode["PageNumber"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = dataNode["TotalCount"].asString();
	auto allBaselinesNode = dataNode["Baselines"]["baselinesItem"];
	for (auto dataNodeBaselinesbaselinesItem : allBaselinesNode)
	{
		Data::BaselinesItem baselinesItemObject;
		if(!dataNodeBaselinesbaselinesItem["BaselineId"].isNull())
			baselinesItemObject.baselineId = std::stol(dataNodeBaselinesbaselinesItem["BaselineId"].asString());
		if(!dataNodeBaselinesbaselinesItem["ProjectId"].isNull())
			baselinesItemObject.projectId = std::stol(dataNodeBaselinesbaselinesItem["ProjectId"].asString());
		if(!dataNodeBaselinesbaselinesItem["BaselineType"].isNull())
			baselinesItemObject.baselineType = dataNodeBaselinesbaselinesItem["BaselineType"].asString();
		if(!dataNodeBaselinesbaselinesItem["Priority"].isNull())
			baselinesItemObject.priority = std::stoi(dataNodeBaselinesbaselinesItem["Priority"].asString());
		if(!dataNodeBaselinesbaselinesItem["Owner"].isNull())
			baselinesItemObject.owner = dataNodeBaselinesbaselinesItem["Owner"].asString();
		if(!dataNodeBaselinesbaselinesItem["BaselineName"].isNull())
			baselinesItemObject.baselineName = dataNodeBaselinesbaselinesItem["BaselineName"].asString();
		if(!dataNodeBaselinesbaselinesItem["Enabled"].isNull())
			baselinesItemObject.enabled = dataNodeBaselinesbaselinesItem["Enabled"].asString() == "true";
		if(!dataNodeBaselinesbaselinesItem["AlertEnabled"].isNull())
			baselinesItemObject.alertEnabled = dataNodeBaselinesbaselinesItem["AlertEnabled"].asString() == "true";
		if(!dataNodeBaselinesbaselinesItem["AlertMarginThreshold"].isNull())
			baselinesItemObject.alertMarginThreshold = std::stoi(dataNodeBaselinesbaselinesItem["AlertMarginThreshold"].asString());
		auto allOverTimeSettingsNode = dataNodeBaselinesbaselinesItem["OverTimeSettings"]["overTimeSettingsItem"];
		for (auto dataNodeBaselinesbaselinesItemOverTimeSettingsoverTimeSettingsItem : allOverTimeSettingsNode)
		{
			Data::BaselinesItem::OverTimeSettingsItem overTimeSettingsObject;
			if(!dataNodeBaselinesbaselinesItemOverTimeSettingsoverTimeSettingsItem["Cycle"].isNull())
				overTimeSettingsObject.cycle = std::stoi(dataNodeBaselinesbaselinesItemOverTimeSettingsoverTimeSettingsItem["Cycle"].asString());
			if(!dataNodeBaselinesbaselinesItemOverTimeSettingsoverTimeSettingsItem["Time"].isNull())
				overTimeSettingsObject.time = dataNodeBaselinesbaselinesItemOverTimeSettingsoverTimeSettingsItem["Time"].asString();
			baselinesItemObject.overTimeSettings.push_back(overTimeSettingsObject);
		}
		data_.baselines.push_back(baselinesItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int ListBaselinesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListBaselinesResult::Data ListBaselinesResult::getData()const
{
	return data_;
}

std::string ListBaselinesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListBaselinesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListBaselinesResult::getSuccess()const
{
	return success_;
}

