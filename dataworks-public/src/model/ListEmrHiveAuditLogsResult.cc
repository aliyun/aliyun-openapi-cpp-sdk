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

#include <alibabacloud/dataworks-public/model/ListEmrHiveAuditLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListEmrHiveAuditLogsResult::ListEmrHiveAuditLogsResult() :
	ServiceResult()
{}

ListEmrHiveAuditLogsResult::ListEmrHiveAuditLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmrHiveAuditLogsResult::~ListEmrHiveAuditLogsResult()
{}

void ListEmrHiveAuditLogsResult::parse(const std::string &payload)
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
	auto allPagedDataNode = dataNode["PagedData"]["AuditLog"];
	for (auto dataNodePagedDataAuditLog : allPagedDataNode)
	{
		Data::AuditLog auditLogObject;
		if(!dataNodePagedDataAuditLog["Table"].isNull())
			auditLogObject.table = dataNodePagedDataAuditLog["Table"].asString();
		if(!dataNodePagedDataAuditLog["Database"].isNull())
			auditLogObject.database = dataNodePagedDataAuditLog["Database"].asString();
		if(!dataNodePagedDataAuditLog["User"].isNull())
			auditLogObject.user = dataNodePagedDataAuditLog["User"].asString();
		if(!dataNodePagedDataAuditLog["Operation"].isNull())
			auditLogObject.operation = dataNodePagedDataAuditLog["Operation"].asString();
		if(!dataNodePagedDataAuditLog["EventTime"].isNull())
			auditLogObject.eventTime = std::stol(dataNodePagedDataAuditLog["EventTime"].asString());
		auto allGroups = value["Groups"]["Group"];
		for (auto value : allGroups)
			auditLogObject.groups.push_back(value.asString());
		data_.pagedData.push_back(auditLogObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListEmrHiveAuditLogsResult::Data ListEmrHiveAuditLogsResult::getData()const
{
	return data_;
}

std::string ListEmrHiveAuditLogsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListEmrHiveAuditLogsResult::getErrorMessage()const
{
	return errorMessage_;
}

