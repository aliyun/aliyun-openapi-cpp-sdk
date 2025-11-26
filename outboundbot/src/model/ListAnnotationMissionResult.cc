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

#include <alibabacloud/outboundbot/model/ListAnnotationMissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListAnnotationMissionResult::ListAnnotationMissionResult() :
	ServiceResult()
{}

ListAnnotationMissionResult::ListAnnotationMissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAnnotationMissionResult::~ListAnnotationMissionResult()
{}

void ListAnnotationMissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageIndex"].isNull())
		data_.pageIndex = std::stol(dataNode["PageIndex"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPageCount"].isNull())
		data_.totalPageCount = std::stol(dataNode["TotalPageCount"].asString());
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto allAnnotationMissionListNode = dataNode["AnnotationMissionList"]["AnnotationMissionListItem"];
	for (auto dataNodeAnnotationMissionListAnnotationMissionListItem : allAnnotationMissionListNode)
	{
		Data::AnnotationMissionListItem annotationMissionListItemObject;
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationMissionDataSourceType"].isNull())
			annotationMissionListItemObject.annotationMissionDataSourceType = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationMissionDataSourceType"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["InstanceId"].isNull())
			annotationMissionListItemObject.instanceId = dataNodeAnnotationMissionListAnnotationMissionListItem["InstanceId"].asString();
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationMissionId"].isNull())
			annotationMissionListItemObject.annotationMissionId = dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationMissionId"].asString();
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationMissionName"].isNull())
			annotationMissionListItemObject.annotationMissionName = dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationMissionName"].asString();
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationStatus"].isNull())
			annotationMissionListItemObject.annotationStatus = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["AnnotationStatus"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["CreateTime"].isNull())
			annotationMissionListItemObject.createTime = std::stol(dataNodeAnnotationMissionListAnnotationMissionListItem["CreateTime"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["SessionTotalCount"].isNull())
			annotationMissionListItemObject.sessionTotalCount = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["SessionTotalCount"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["SessionFinishCount"].isNull())
			annotationMissionListItemObject.sessionFinishCount = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["SessionFinishCount"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["FinishTime"].isNull())
			annotationMissionListItemObject.finishTime = std::stol(dataNodeAnnotationMissionListAnnotationMissionListItem["FinishTime"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["ExcludeOtherMissionSession"].isNull())
			annotationMissionListItemObject.excludeOtherMissionSession = dataNodeAnnotationMissionListAnnotationMissionListItem["ExcludeOtherMissionSession"].asString() == "true";
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["ConversationTimeStartFilter"].isNull())
			annotationMissionListItemObject.conversationTimeStartFilter = std::stol(dataNodeAnnotationMissionListAnnotationMissionListItem["ConversationTimeStartFilter"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["ConversationTimeEndFilter"].isNull())
			annotationMissionListItemObject.conversationTimeEndFilter = std::stol(dataNodeAnnotationMissionListAnnotationMissionListItem["ConversationTimeEndFilter"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingType"].isNull())
			annotationMissionListItemObject.samplingType = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingType"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingRate"].isNull())
			annotationMissionListItemObject.samplingRate = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingRate"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingCount"].isNull())
			annotationMissionListItemObject.samplingCount = std::stoi(dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingCount"].asString());
		if(!dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingDescription"].isNull())
			annotationMissionListItemObject.samplingDescription = dataNodeAnnotationMissionListAnnotationMissionListItem["SamplingDescription"].asString();
		auto allSessionEndReasonFilterList = value["SessionEndReasonFilterList"]["SessionEndReasonFilterList"];
		for (auto value : allSessionEndReasonFilterList)
			annotationMissionListItemObject.sessionEndReasonFilterList.push_back(value.asString());
		auto allAnnotationMissionDebugDataSourceList = value["AnnotationMissionDebugDataSourceList"]["AnnotationMissionDebugDataSourceList"];
		for (auto value : allAnnotationMissionDebugDataSourceList)
			annotationMissionListItemObject.annotationMissionDebugDataSourceList.push_back(value.asString());
		data_.annotationMissionList.push_back(annotationMissionListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListAnnotationMissionResult::getMessage()const
{
	return message_;
}

int ListAnnotationMissionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAnnotationMissionResult::Data ListAnnotationMissionResult::getData()const
{
	return data_;
}

std::string ListAnnotationMissionResult::getCode()const
{
	return code_;
}

bool ListAnnotationMissionResult::getSuccess()const
{
	return success_;
}

