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

#include <alibabacloud/dms-enterprise/model/ListSensitiveDataAuditLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSensitiveDataAuditLogResult::ListSensitiveDataAuditLogResult() :
	ServiceResult()
{}

ListSensitiveDataAuditLogResult::ListSensitiveDataAuditLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSensitiveDataAuditLogResult::~ListSensitiveDataAuditLogResult()
{}

void ListSensitiveDataAuditLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveDataAuditLogListNode = value["SensitiveDataAuditLogList"]["SensitiveDataAuditLogListItem"];
	for (auto valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem : allSensitiveDataAuditLogListNode)
	{
		SensitiveDataAuditLogListItem sensitiveDataAuditLogListObject;
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["UserName"].isNull())
			sensitiveDataAuditLogListObject.userName = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["UserName"].asString();
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["UserId"].isNull())
			sensitiveDataAuditLogListObject.userId = std::stol(valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["UserId"].asString());
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["ModuleName"].isNull())
			sensitiveDataAuditLogListObject.moduleName = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["ModuleName"].asString();
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["DbDisplayName"].isNull())
			sensitiveDataAuditLogListObject.dbDisplayName = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["DbDisplayName"].asString();
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["OpTime"].isNull())
			sensitiveDataAuditLogListObject.opTime = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["OpTime"].asString();
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["InstanceId"].isNull())
			sensitiveDataAuditLogListObject.instanceId = std::stol(valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["InstanceId"].asString());
		if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["TargetName"].isNull())
			sensitiveDataAuditLogListObject.targetName = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["TargetName"].asString();
		auto allSensitiveDataLogNode = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItem["SensitiveDataLog"]["SensitiveDataLogItem"];
		for (auto valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem : allSensitiveDataLogNode)
		{
			SensitiveDataAuditLogListItem::SensitiveDataLogItem sensitiveDataLogObject;
			if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["TableName"].isNull())
				sensitiveDataLogObject.tableName = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["TableName"].asString();
			if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["ColumnName"].isNull())
				sensitiveDataLogObject.columnName = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["ColumnName"].asString();
			if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["SecurityLevel"].isNull())
				sensitiveDataLogObject.securityLevel = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["SecurityLevel"].asString();
			if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["ColumnPermissionType"].isNull())
				sensitiveDataLogObject.columnPermissionType = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["ColumnPermissionType"].asString();
			if(!valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["DesensitizationRule"].isNull())
				sensitiveDataLogObject.desensitizationRule = valueSensitiveDataAuditLogListSensitiveDataAuditLogListItemSensitiveDataLogSensitiveDataLogItem["DesensitizationRule"].asString();
			sensitiveDataAuditLogListObject.sensitiveDataLog.push_back(sensitiveDataLogObject);
		}
		sensitiveDataAuditLogList_.push_back(sensitiveDataAuditLogListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListSensitiveDataAuditLogResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListSensitiveDataAuditLogResult::SensitiveDataAuditLogListItem> ListSensitiveDataAuditLogResult::getSensitiveDataAuditLogList()const
{
	return sensitiveDataAuditLogList_;
}

std::string ListSensitiveDataAuditLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSensitiveDataAuditLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListSensitiveDataAuditLogResult::getSuccess()const
{
	return success_;
}

