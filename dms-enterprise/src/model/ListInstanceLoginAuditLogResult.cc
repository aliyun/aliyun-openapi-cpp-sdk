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

#include <alibabacloud/dms-enterprise/model/ListInstanceLoginAuditLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListInstanceLoginAuditLogResult::ListInstanceLoginAuditLogResult() :
	ServiceResult()
{}

ListInstanceLoginAuditLogResult::ListInstanceLoginAuditLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceLoginAuditLogResult::~ListInstanceLoginAuditLogResult()
{}

void ListInstanceLoginAuditLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceLoginAuditLogListNode = value["InstanceLoginAuditLogList"]["InstanceLoginAuditLog"];
	for (auto valueInstanceLoginAuditLogListInstanceLoginAuditLog : allInstanceLoginAuditLogListNode)
	{
		InstanceLoginAuditLog instanceLoginAuditLogListObject;
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["OpTime"].isNull())
			instanceLoginAuditLogListObject.opTime = valueInstanceLoginAuditLogListInstanceLoginAuditLog["OpTime"].asString();
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["UserName"].isNull())
			instanceLoginAuditLogListObject.userName = valueInstanceLoginAuditLogListInstanceLoginAuditLog["UserName"].asString();
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["UserId"].isNull())
			instanceLoginAuditLogListObject.userId = std::stol(valueInstanceLoginAuditLogListInstanceLoginAuditLog["UserId"].asString());
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["InstanceName"].isNull())
			instanceLoginAuditLogListObject.instanceName = valueInstanceLoginAuditLogListInstanceLoginAuditLog["InstanceName"].asString();
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["InstanceId"].isNull())
			instanceLoginAuditLogListObject.instanceId = std::stol(valueInstanceLoginAuditLogListInstanceLoginAuditLog["InstanceId"].asString());
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["DbUser"].isNull())
			instanceLoginAuditLogListObject.dbUser = valueInstanceLoginAuditLogListInstanceLoginAuditLog["DbUser"].asString();
		if(!valueInstanceLoginAuditLogListInstanceLoginAuditLog["RequestIp"].isNull())
			instanceLoginAuditLogListObject.requestIp = valueInstanceLoginAuditLogListInstanceLoginAuditLog["RequestIp"].asString();
		instanceLoginAuditLogList_.push_back(instanceLoginAuditLogListObject);
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

std::vector<ListInstanceLoginAuditLogResult::InstanceLoginAuditLog> ListInstanceLoginAuditLogResult::getInstanceLoginAuditLogList()const
{
	return instanceLoginAuditLogList_;
}

long ListInstanceLoginAuditLogResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListInstanceLoginAuditLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListInstanceLoginAuditLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListInstanceLoginAuditLogResult::getSuccess()const
{
	return success_;
}

