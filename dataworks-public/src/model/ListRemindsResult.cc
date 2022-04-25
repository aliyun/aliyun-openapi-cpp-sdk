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

#include <alibabacloud/dataworks-public/model/ListRemindsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListRemindsResult::ListRemindsResult() :
	ServiceResult()
{}

ListRemindsResult::ListRemindsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRemindsResult::~ListRemindsResult()
{}

void ListRemindsResult::parse(const std::string &payload)
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
	auto allRemindsNode = dataNode["Reminds"]["RemindsItem"];
	for (auto dataNodeRemindsRemindsItem : allRemindsNode)
	{
		Data::RemindsItem remindsItemObject;
		if(!dataNodeRemindsRemindsItem["Founder"].isNull())
			remindsItemObject.founder = dataNodeRemindsRemindsItem["Founder"].asString();
		if(!dataNodeRemindsRemindsItem["RemindId"].isNull())
			remindsItemObject.remindId = std::stol(dataNodeRemindsRemindsItem["RemindId"].asString());
		if(!dataNodeRemindsRemindsItem["AlertUnit"].isNull())
			remindsItemObject.alertUnit = dataNodeRemindsRemindsItem["AlertUnit"].asString();
		if(!dataNodeRemindsRemindsItem["RemindType"].isNull())
			remindsItemObject.remindType = dataNodeRemindsRemindsItem["RemindType"].asString();
		if(!dataNodeRemindsRemindsItem["DndEnd"].isNull())
			remindsItemObject.dndEnd = dataNodeRemindsRemindsItem["DndEnd"].asString();
		if(!dataNodeRemindsRemindsItem["DndStart"].isNull())
			remindsItemObject.dndStart = dataNodeRemindsRemindsItem["DndStart"].asString();
		if(!dataNodeRemindsRemindsItem["RemindUnit"].isNull())
			remindsItemObject.remindUnit = dataNodeRemindsRemindsItem["RemindUnit"].asString();
		if(!dataNodeRemindsRemindsItem["Useflag"].isNull())
			remindsItemObject.useflag = dataNodeRemindsRemindsItem["Useflag"].asString() == "true";
		if(!dataNodeRemindsRemindsItem["RemindName"].isNull())
			remindsItemObject.remindName = dataNodeRemindsRemindsItem["RemindName"].asString();
		auto allAlertTargets = value["AlertTargets"]["AlertTargets"];
		for (auto value : allAlertTargets)
			remindsItemObject.alertTargets.push_back(value.asString());
		auto allNodeIds = value["NodeIds"]["NodeIds"];
		for (auto value : allNodeIds)
			remindsItemObject.nodeIds.push_back(value.asString());
		auto allBizProcessIds = value["BizProcessIds"]["BizProcessIds"];
		for (auto value : allBizProcessIds)
			remindsItemObject.bizProcessIds.push_back(value.asString());
		auto allProjectIds = value["ProjectIds"]["ProjectIds"];
		for (auto value : allProjectIds)
			remindsItemObject.projectIds.push_back(value.asString());
		auto allBaselineIds = value["BaselineIds"]["BaselineIds"];
		for (auto value : allBaselineIds)
			remindsItemObject.baselineIds.push_back(value.asString());
		auto allAlertMethods = value["AlertMethods"]["AlertMethods"];
		for (auto value : allAlertMethods)
			remindsItemObject.alertMethods.push_back(value.asString());
		data_.reminds.push_back(remindsItemObject);
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

int ListRemindsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRemindsResult::Data ListRemindsResult::getData()const
{
	return data_;
}

std::string ListRemindsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRemindsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRemindsResult::getSuccess()const
{
	return success_;
}

