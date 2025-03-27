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

#include <alibabacloud/dataworks-public/model/ListBaselineStatusesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListBaselineStatusesResult::ListBaselineStatusesResult() :
	ServiceResult()
{}

ListBaselineStatusesResult::ListBaselineStatusesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBaselineStatusesResult::~ListBaselineStatusesResult()
{}

void ListBaselineStatusesResult::parse(const std::string &payload)
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
	auto allBaselineStatusesNode = dataNode["BaselineStatuses"]["BaselineStatusesItem"];
	for (auto dataNodeBaselineStatusesBaselineStatusesItem : allBaselineStatusesNode)
	{
		Data::BaselineStatusesItem baselineStatusesItemObject;
		if(!dataNodeBaselineStatusesBaselineStatusesItem["Status"].isNull())
			baselineStatusesItemObject.status = dataNodeBaselineStatusesBaselineStatusesItem["Status"].asString();
		if(!dataNodeBaselineStatusesBaselineStatusesItem["Owner"].isNull())
			baselineStatusesItemObject.owner = dataNodeBaselineStatusesBaselineStatusesItem["Owner"].asString();
		if(!dataNodeBaselineStatusesBaselineStatusesItem["FinishTime"].isNull())
			baselineStatusesItemObject.finishTime = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["FinishTime"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["ProjectId"].isNull())
			baselineStatusesItemObject.projectId = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["ProjectId"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["Priority"].isNull())
			baselineStatusesItemObject.priority = std::stoi(dataNodeBaselineStatusesBaselineStatusesItem["Priority"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["EndCast"].isNull())
			baselineStatusesItemObject.endCast = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["EndCast"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["InGroupId"].isNull())
			baselineStatusesItemObject.inGroupId = std::stoi(dataNodeBaselineStatusesBaselineStatusesItem["InGroupId"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["BaselineName"].isNull())
			baselineStatusesItemObject.baselineName = dataNodeBaselineStatusesBaselineStatusesItem["BaselineName"].asString();
		if(!dataNodeBaselineStatusesBaselineStatusesItem["BaselineId"].isNull())
			baselineStatusesItemObject.baselineId = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["BaselineId"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["FinishStatus"].isNull())
			baselineStatusesItemObject.finishStatus = dataNodeBaselineStatusesBaselineStatusesItem["FinishStatus"].asString();
		if(!dataNodeBaselineStatusesBaselineStatusesItem["Bizdate"].isNull())
			baselineStatusesItemObject.bizdate = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["Bizdate"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["Buffer"].isNull())
			baselineStatusesItemObject.buffer = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["Buffer"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["SlaTime"].isNull())
			baselineStatusesItemObject.slaTime = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["SlaTime"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["ExpTime"].isNull())
			baselineStatusesItemObject.expTime = std::stol(dataNodeBaselineStatusesBaselineStatusesItem["ExpTime"].asString());
		if(!dataNodeBaselineStatusesBaselineStatusesItem["BaselineType"].isNull())
			baselineStatusesItemObject.baselineType = dataNodeBaselineStatusesBaselineStatusesItem["BaselineType"].asString();
		data_.baselineStatuses.push_back(baselineStatusesItemObject);
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

int ListBaselineStatusesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListBaselineStatusesResult::Data ListBaselineStatusesResult::getData()const
{
	return data_;
}

std::string ListBaselineStatusesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListBaselineStatusesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListBaselineStatusesResult::getSuccess()const
{
	return success_;
}

