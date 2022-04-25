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

#include <alibabacloud/dataworks-public/model/ListBaselineConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListBaselineConfigsResult::ListBaselineConfigsResult() :
	ServiceResult()
{}

ListBaselineConfigsResult::ListBaselineConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBaselineConfigsResult::~ListBaselineConfigsResult()
{}

void ListBaselineConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allBaselinesNode = dataNode["Baselines"]["BaselinesItem"];
	for (auto dataNodeBaselinesBaselinesItem : allBaselinesNode)
	{
		Data::BaselinesItem baselinesItemObject;
		if(!dataNodeBaselinesBaselinesItem["HourSlaDetail"].isNull())
			baselinesItemObject.hourSlaDetail = dataNodeBaselinesBaselinesItem["HourSlaDetail"].asString();
		if(!dataNodeBaselinesBaselinesItem["IsDefault"].isNull())
			baselinesItemObject.isDefault = dataNodeBaselinesBaselinesItem["IsDefault"].asString() == "true";
		if(!dataNodeBaselinesBaselinesItem["Owner"].isNull())
			baselinesItemObject.owner = dataNodeBaselinesBaselinesItem["Owner"].asString();
		if(!dataNodeBaselinesBaselinesItem["ProjectId"].isNull())
			baselinesItemObject.projectId = std::stol(dataNodeBaselinesBaselinesItem["ProjectId"].asString());
		if(!dataNodeBaselinesBaselinesItem["Priority"].isNull())
			baselinesItemObject.priority = std::stoi(dataNodeBaselinesBaselinesItem["Priority"].asString());
		if(!dataNodeBaselinesBaselinesItem["SlaMinu"].isNull())
			baselinesItemObject.slaMinu = std::stoi(dataNodeBaselinesBaselinesItem["SlaMinu"].asString());
		if(!dataNodeBaselinesBaselinesItem["SlaHour"].isNull())
			baselinesItemObject.slaHour = std::stoi(dataNodeBaselinesBaselinesItem["SlaHour"].asString());
		if(!dataNodeBaselinesBaselinesItem["BaselineId"].isNull())
			baselinesItemObject.baselineId = std::stol(dataNodeBaselinesBaselinesItem["BaselineId"].asString());
		if(!dataNodeBaselinesBaselinesItem["BaselineName"].isNull())
			baselinesItemObject.baselineName = dataNodeBaselinesBaselinesItem["BaselineName"].asString();
		if(!dataNodeBaselinesBaselinesItem["HourExpDetail"].isNull())
			baselinesItemObject.hourExpDetail = dataNodeBaselinesBaselinesItem["HourExpDetail"].asString();
		if(!dataNodeBaselinesBaselinesItem["UseFlag"].isNull())
			baselinesItemObject.useFlag = dataNodeBaselinesBaselinesItem["UseFlag"].asString() == "true";
		if(!dataNodeBaselinesBaselinesItem["ExpHour"].isNull())
			baselinesItemObject.expHour = std::stoi(dataNodeBaselinesBaselinesItem["ExpHour"].asString());
		if(!dataNodeBaselinesBaselinesItem["BaselineType"].isNull())
			baselinesItemObject.baselineType = dataNodeBaselinesBaselinesItem["BaselineType"].asString();
		if(!dataNodeBaselinesBaselinesItem["ExpMinu"].isNull())
			baselinesItemObject.expMinu = std::stoi(dataNodeBaselinesBaselinesItem["ExpMinu"].asString());
		data_.baselines.push_back(baselinesItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListBaselineConfigsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListBaselineConfigsResult::Data ListBaselineConfigsResult::getData()const
{
	return data_;
}

std::string ListBaselineConfigsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListBaselineConfigsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListBaselineConfigsResult::getSuccess()const
{
	return success_;
}

