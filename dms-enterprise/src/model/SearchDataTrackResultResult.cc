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

#include <alibabacloud/dms-enterprise/model/SearchDataTrackResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

SearchDataTrackResultResult::SearchDataTrackResultResult() :
	ServiceResult()
{}

SearchDataTrackResultResult::SearchDataTrackResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchDataTrackResultResult::~SearchDataTrackResultResult()
{}

void SearchDataTrackResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto trackResultNode = value["TrackResult"];
	if(!trackResultNode["TotalCount"].isNull())
		trackResult_.totalCount = std::stol(trackResultNode["TotalCount"].asString());
	auto allEventListNode = trackResultNode["EventList"]["Event"];
	for (auto trackResultNodeEventListEvent : allEventListNode)
	{
		TrackResult::Event eventObject;
		if(!trackResultNodeEventListEvent["EventLength"].isNull())
			eventObject.eventLength = std::stol(trackResultNodeEventListEvent["EventLength"].asString());
		if(!trackResultNodeEventListEvent["EventTimestamp"].isNull())
			eventObject.eventTimestamp = trackResultNodeEventListEvent["EventTimestamp"].asString();
		if(!trackResultNodeEventListEvent["EventType"].isNull())
			eventObject.eventType = trackResultNodeEventListEvent["EventType"].asString();
		if(!trackResultNodeEventListEvent["EventId"].isNull())
			eventObject.eventId = std::stol(trackResultNodeEventListEvent["EventId"].asString());
		if(!trackResultNodeEventListEvent["RollSQL"].isNull())
			eventObject.rollSQL = trackResultNodeEventListEvent["RollSQL"].asString();
		auto allDataAfter = value["DataAfter"]["DataAfter"];
		for (auto value : allDataAfter)
			eventObject.dataAfter.push_back(value.asString());
		auto allDataBefore = value["DataBefore"]["DataBefore"];
		for (auto value : allDataBefore)
			eventObject.dataBefore.push_back(value.asString());
		trackResult_.eventList.push_back(eventObject);
	}
	auto allTableInfoListNode = trackResultNode["TableInfoList"]["TableInfo"];
	for (auto trackResultNodeTableInfoListTableInfo : allTableInfoListNode)
	{
		TrackResult::TableInfo tableInfoObject;
		if(!trackResultNodeTableInfoListTableInfo["SchemaName"].isNull())
			tableInfoObject.schemaName = trackResultNodeTableInfoListTableInfo["SchemaName"].asString();
		if(!trackResultNodeTableInfoListTableInfo["TableName"].isNull())
			tableInfoObject.tableName = trackResultNodeTableInfoListTableInfo["TableName"].asString();
		if(!trackResultNodeTableInfoListTableInfo["Description"].isNull())
			tableInfoObject.description = trackResultNodeTableInfoListTableInfo["Description"].asString();
		auto allColumnsNode = trackResultNodeTableInfoListTableInfo["Columns"]["Column"];
		for (auto trackResultNodeTableInfoListTableInfoColumnsColumn : allColumnsNode)
		{
			TrackResult::TableInfo::Column columnsObject;
			if(!trackResultNodeTableInfoListTableInfoColumnsColumn["ColumnName"].isNull())
				columnsObject.columnName = trackResultNodeTableInfoListTableInfoColumnsColumn["ColumnName"].asString();
			if(!trackResultNodeTableInfoListTableInfoColumnsColumn["ColumnPosition"].isNull())
				columnsObject.columnPosition = std::stoi(trackResultNodeTableInfoListTableInfoColumnsColumn["ColumnPosition"].asString());
			if(!trackResultNodeTableInfoListTableInfoColumnsColumn["ColumnType"].isNull())
				columnsObject.columnType = trackResultNodeTableInfoListTableInfoColumnsColumn["ColumnType"].asString();
			if(!trackResultNodeTableInfoListTableInfoColumnsColumn["Fictive"].isNull())
				columnsObject.fictive = trackResultNodeTableInfoListTableInfoColumnsColumn["Fictive"].asString() == "true";
			tableInfoObject.columns.push_back(columnsObject);
		}
		trackResult_.tableInfoList.push_back(tableInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

SearchDataTrackResultResult::TrackResult SearchDataTrackResultResult::getTrackResult()const
{
	return trackResult_;
}

std::string SearchDataTrackResultResult::getErrorCode()const
{
	return errorCode_;
}

std::string SearchDataTrackResultResult::getErrorMessage()const
{
	return errorMessage_;
}

bool SearchDataTrackResultResult::getSuccess()const
{
	return success_;
}

