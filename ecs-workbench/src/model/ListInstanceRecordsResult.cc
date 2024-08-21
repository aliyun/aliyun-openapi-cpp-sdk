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

#include <alibabacloud/ecs-workbench/model/ListInstanceRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs_workbench;
using namespace AlibabaCloud::Ecs_workbench::Model;

ListInstanceRecordsResult::ListInstanceRecordsResult() :
	ServiceResult()
{}

ListInstanceRecordsResult::ListInstanceRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceRecordsResult::~ListInstanceRecordsResult()
{}

void ListInstanceRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto rootNode = value["Root"];
	if(!rootNode["TotalCount"].isNull())
		root_.totalCount = std::stoi(rootNode["TotalCount"].asString());
	auto allRecordListNode = rootNode["RecordList"]["RecordListItem"];
	for (auto rootNodeRecordListRecordListItem : allRecordListNode)
	{
		Root::RecordListItem recordListItemObject;
		if(!rootNodeRecordListRecordListItem["GmtCreate"].isNull())
			recordListItemObject.gmtCreate = rootNodeRecordListRecordListItem["GmtCreate"].asString();
		if(!rootNodeRecordListRecordListItem["AccountId"].isNull())
			recordListItemObject.accountId = std::stol(rootNodeRecordListRecordListItem["AccountId"].asString());
		if(!rootNodeRecordListRecordListItem["InstanceId"].isNull())
			recordListItemObject.instanceId = rootNodeRecordListRecordListItem["InstanceId"].asString();
		if(!rootNodeRecordListRecordListItem["TerminalSessionToken"].isNull())
			recordListItemObject.terminalSessionToken = rootNodeRecordListRecordListItem["TerminalSessionToken"].asString();
		if(!rootNodeRecordListRecordListItem["RecordDurationMillis"].isNull())
			recordListItemObject.recordDurationMillis = std::stol(rootNodeRecordListRecordListItem["RecordDurationMillis"].asString());
		if(!rootNodeRecordListRecordListItem["Status"].isNull())
			recordListItemObject.status = rootNodeRecordListRecordListItem["Status"].asString();
		if(!rootNodeRecordListRecordListItem["ExpireTime"].isNull())
			recordListItemObject.expireTime = rootNodeRecordListRecordListItem["ExpireTime"].asString();
		if(!rootNodeRecordListRecordListItem["InstanceRecordUrl"].isNull())
			recordListItemObject.instanceRecordUrl = rootNodeRecordListRecordListItem["InstanceRecordUrl"].asString();
		root_.recordList.push_back(recordListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

ListInstanceRecordsResult::Root ListInstanceRecordsResult::getRoot()const
{
	return root_;
}

std::string ListInstanceRecordsResult::getMessage()const
{
	return message_;
}

std::string ListInstanceRecordsResult::getCode()const
{
	return code_;
}

bool ListInstanceRecordsResult::getSuccess()const
{
	return success_;
}

