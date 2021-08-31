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

#include <alibabacloud/edas/model/ListOperationLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListOperationLogsResult::ListOperationLogsResult() :
	ServiceResult()
{}

ListOperationLogsResult::ListOperationLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOperationLogsResult::~ListOperationLogsResult()
{}

void ListOperationLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogListNode = value["LogList"]["Log"];
	for (auto valueLogListLog : allLogListNode)
	{
		Log logListObject;
		if(!valueLogListLog["ActionGroup"].isNull())
			logListObject.actionGroup = valueLogListLog["ActionGroup"].asString();
		if(!valueLogListLog["ActionName"].isNull())
			logListObject.actionName = valueLogListLog["ActionName"].asString();
		if(!valueLogListLog["BeginTime"].isNull())
			logListObject.beginTime = std::stol(valueLogListLog["BeginTime"].asString());
		if(!valueLogListLog["EndTime"].isNull())
			logListObject.endTime = std::stol(valueLogListLog["EndTime"].asString());
		if(!valueLogListLog["OperatorName"].isNull())
			logListObject.operatorName = valueLogListLog["OperatorName"].asString();
		if(!valueLogListLog["OperatorId"].isNull())
			logListObject.operatorId = valueLogListLog["OperatorId"].asString();
		if(!valueLogListLog["Source"].isNull())
			logListObject.source = valueLogListLog["Source"].asString();
		if(!valueLogListLog["Status"].isNull())
			logListObject.status = valueLogListLog["Status"].asString();
		if(!valueLogListLog["Message"].isNull())
			logListObject.message = valueLogListLog["Message"].asString();
		if(!valueLogListLog["ExtraParameters"].isNull())
			logListObject.extraParameters = valueLogListLog["ExtraParameters"].asString();
		if(!valueLogListLog["AppId"].isNull())
			logListObject.appId = valueLogListLog["AppId"].asString();
		logList_.push_back(logListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListOperationLogsResult::Log> ListOperationLogsResult::getLogList()const
{
	return logList_;
}

std::string ListOperationLogsResult::getMessage()const
{
	return message_;
}

int ListOperationLogsResult::getPageSize()const
{
	return pageSize_;
}

int ListOperationLogsResult::getCurrentPage()const
{
	return currentPage_;
}

int ListOperationLogsResult::getTotalSize()const
{
	return totalSize_;
}

int ListOperationLogsResult::getCode()const
{
	return code_;
}

