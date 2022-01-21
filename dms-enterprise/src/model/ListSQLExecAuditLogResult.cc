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

#include <alibabacloud/dms-enterprise/model/ListSQLExecAuditLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSQLExecAuditLogResult::ListSQLExecAuditLogResult() :
	ServiceResult()
{}

ListSQLExecAuditLogResult::ListSQLExecAuditLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSQLExecAuditLogResult::~ListSQLExecAuditLogResult()
{}

void ListSQLExecAuditLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSQLExecAuditLogListNode = value["SQLExecAuditLogList"]["SQLExecAuditLog"];
	for (auto valueSQLExecAuditLogListSQLExecAuditLog : allSQLExecAuditLogListNode)
	{
		SQLExecAuditLog sQLExecAuditLogListObject;
		if(!valueSQLExecAuditLogListSQLExecAuditLog["OpTime"].isNull())
			sQLExecAuditLogListObject.opTime = valueSQLExecAuditLogListSQLExecAuditLog["OpTime"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["UserName"].isNull())
			sQLExecAuditLogListObject.userName = valueSQLExecAuditLogListSQLExecAuditLog["UserName"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["UserId"].isNull())
			sQLExecAuditLogListObject.userId = std::stol(valueSQLExecAuditLogListSQLExecAuditLog["UserId"].asString());
		if(!valueSQLExecAuditLogListSQLExecAuditLog["InstanceName"].isNull())
			sQLExecAuditLogListObject.instanceName = valueSQLExecAuditLogListSQLExecAuditLog["InstanceName"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["InstanceId"].isNull())
			sQLExecAuditLogListObject.instanceId = std::stol(valueSQLExecAuditLogListSQLExecAuditLog["InstanceId"].asString());
		if(!valueSQLExecAuditLogListSQLExecAuditLog["SchemaName"].isNull())
			sQLExecAuditLogListObject.schemaName = valueSQLExecAuditLogListSQLExecAuditLog["SchemaName"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["DbId"].isNull())
			sQLExecAuditLogListObject.dbId = std::stol(valueSQLExecAuditLogListSQLExecAuditLog["DbId"].asString());
		if(!valueSQLExecAuditLogListSQLExecAuditLog["Logic"].isNull())
			sQLExecAuditLogListObject.logic = valueSQLExecAuditLogListSQLExecAuditLog["Logic"].asString() == "true";
		if(!valueSQLExecAuditLogListSQLExecAuditLog["SQLType"].isNull())
			sQLExecAuditLogListObject.sQLType = valueSQLExecAuditLogListSQLExecAuditLog["SQLType"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["SQL"].isNull())
			sQLExecAuditLogListObject.sQL = valueSQLExecAuditLogListSQLExecAuditLog["SQL"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["ExecState"].isNull())
			sQLExecAuditLogListObject.execState = valueSQLExecAuditLogListSQLExecAuditLog["ExecState"].asString();
		if(!valueSQLExecAuditLogListSQLExecAuditLog["AffectRows"].isNull())
			sQLExecAuditLogListObject.affectRows = std::stol(valueSQLExecAuditLogListSQLExecAuditLog["AffectRows"].asString());
		if(!valueSQLExecAuditLogListSQLExecAuditLog["ElapsedTime"].isNull())
			sQLExecAuditLogListObject.elapsedTime = std::stol(valueSQLExecAuditLogListSQLExecAuditLog["ElapsedTime"].asString());
		if(!valueSQLExecAuditLogListSQLExecAuditLog["Remark"].isNull())
			sQLExecAuditLogListObject.remark = valueSQLExecAuditLogListSQLExecAuditLog["Remark"].asString();
		sQLExecAuditLogList_.push_back(sQLExecAuditLogListObject);
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

long ListSQLExecAuditLogResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSQLExecAuditLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSQLExecAuditLogResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListSQLExecAuditLogResult::SQLExecAuditLog> ListSQLExecAuditLogResult::getSQLExecAuditLogList()const
{
	return sQLExecAuditLogList_;
}

bool ListSQLExecAuditLogResult::getSuccess()const
{
	return success_;
}

