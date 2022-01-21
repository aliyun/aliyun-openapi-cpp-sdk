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

#include <alibabacloud/dms-enterprise/model/ListProxySQLExecAuditLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListProxySQLExecAuditLogResult::ListProxySQLExecAuditLogResult() :
	ServiceResult()
{}

ListProxySQLExecAuditLogResult::ListProxySQLExecAuditLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProxySQLExecAuditLogResult::~ListProxySQLExecAuditLogResult()
{}

void ListProxySQLExecAuditLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProxySQLExecAuditLogListNode = value["ProxySQLExecAuditLogList"]["ProxySQLExecAuditLog"];
	for (auto valueProxySQLExecAuditLogListProxySQLExecAuditLog : allProxySQLExecAuditLogListNode)
	{
		ProxySQLExecAuditLog proxySQLExecAuditLogListObject;
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["OpTime"].isNull())
			proxySQLExecAuditLogListObject.opTime = valueProxySQLExecAuditLogListProxySQLExecAuditLog["OpTime"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["UserName"].isNull())
			proxySQLExecAuditLogListObject.userName = valueProxySQLExecAuditLogListProxySQLExecAuditLog["UserName"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["UserId"].isNull())
			proxySQLExecAuditLogListObject.userId = std::stol(valueProxySQLExecAuditLogListProxySQLExecAuditLog["UserId"].asString());
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["InstanceName"].isNull())
			proxySQLExecAuditLogListObject.instanceName = valueProxySQLExecAuditLogListProxySQLExecAuditLog["InstanceName"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["InstanceId"].isNull())
			proxySQLExecAuditLogListObject.instanceId = std::stol(valueProxySQLExecAuditLogListProxySQLExecAuditLog["InstanceId"].asString());
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["SchemaName"].isNull())
			proxySQLExecAuditLogListObject.schemaName = valueProxySQLExecAuditLogListProxySQLExecAuditLog["SchemaName"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["SQLType"].isNull())
			proxySQLExecAuditLogListObject.sQLType = valueProxySQLExecAuditLogListProxySQLExecAuditLog["SQLType"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["SQL"].isNull())
			proxySQLExecAuditLogListObject.sQL = valueProxySQLExecAuditLogListProxySQLExecAuditLog["SQL"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["ExecState"].isNull())
			proxySQLExecAuditLogListObject.execState = valueProxySQLExecAuditLogListProxySQLExecAuditLog["ExecState"].asString();
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["AffectRows"].isNull())
			proxySQLExecAuditLogListObject.affectRows = std::stol(valueProxySQLExecAuditLogListProxySQLExecAuditLog["AffectRows"].asString());
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["ElapsedTime"].isNull())
			proxySQLExecAuditLogListObject.elapsedTime = std::stol(valueProxySQLExecAuditLogListProxySQLExecAuditLog["ElapsedTime"].asString());
		if(!valueProxySQLExecAuditLogListProxySQLExecAuditLog["Remark"].isNull())
			proxySQLExecAuditLogListObject.remark = valueProxySQLExecAuditLogListProxySQLExecAuditLog["Remark"].asString();
		proxySQLExecAuditLogList_.push_back(proxySQLExecAuditLogListObject);
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

std::vector<ListProxySQLExecAuditLogResult::ProxySQLExecAuditLog> ListProxySQLExecAuditLogResult::getProxySQLExecAuditLogList()const
{
	return proxySQLExecAuditLogList_;
}

long ListProxySQLExecAuditLogResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListProxySQLExecAuditLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProxySQLExecAuditLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProxySQLExecAuditLogResult::getSuccess()const
{
	return success_;
}

