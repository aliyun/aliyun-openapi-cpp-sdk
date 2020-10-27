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

#include <alibabacloud/cloudesl/model/DescribeUserOperationLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeUserOperationLogResult::DescribeUserOperationLogResult() :
	ServiceResult()
{}

DescribeUserOperationLogResult::DescribeUserOperationLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserOperationLogResult::~DescribeUserOperationLogResult()
{}

void DescribeUserOperationLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOperationLogsNode = value["OperationLogs"]["OperationLogInfo"];
	for (auto valueOperationLogsOperationLogInfo : allOperationLogsNode)
	{
		OperationLogInfo operationLogsObject;
		if(!valueOperationLogsOperationLogInfo["OperateType"].isNull())
			operationLogsObject.operateType = valueOperationLogsOperationLogInfo["OperateType"].asString();
		if(!valueOperationLogsOperationLogInfo["OperateStatus"].isNull())
			operationLogsObject.operateStatus = valueOperationLogsOperationLogInfo["OperateStatus"].asString();
		if(!valueOperationLogsOperationLogInfo["OperateUserId"].isNull())
			operationLogsObject.operateUserId = std::stol(valueOperationLogsOperationLogInfo["OperateUserId"].asString());
		if(!valueOperationLogsOperationLogInfo["OperateTime"].isNull())
			operationLogsObject.operateTime = valueOperationLogsOperationLogInfo["OperateTime"].asString();
		if(!valueOperationLogsOperationLogInfo["StoreId"].isNull())
			operationLogsObject.storeId = valueOperationLogsOperationLogInfo["StoreId"].asString();
		if(!valueOperationLogsOperationLogInfo["ItemTitle"].isNull())
			operationLogsObject.itemTitle = valueOperationLogsOperationLogInfo["ItemTitle"].asString();
		if(!valueOperationLogsOperationLogInfo["ItemId"].isNull())
			operationLogsObject.itemId = valueOperationLogsOperationLogInfo["ItemId"].asString();
		if(!valueOperationLogsOperationLogInfo["ItemActionPrice"].isNull())
			operationLogsObject.itemActionPrice = std::stoi(valueOperationLogsOperationLogInfo["ItemActionPrice"].asString());
		if(!valueOperationLogsOperationLogInfo["ItemBarCode"].isNull())
			operationLogsObject.itemBarCode = valueOperationLogsOperationLogInfo["ItemBarCode"].asString();
		if(!valueOperationLogsOperationLogInfo["EslBarCode"].isNull())
			operationLogsObject.eslBarCode = valueOperationLogsOperationLogInfo["EslBarCode"].asString();
		if(!valueOperationLogsOperationLogInfo["ShelfCode"].isNull())
			operationLogsObject.shelfCode = valueOperationLogsOperationLogInfo["ShelfCode"].asString();
		operationLogs_.push_back(operationLogsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeUserOperationLogResult::OperationLogInfo> DescribeUserOperationLogResult::getOperationLogs()const
{
	return operationLogs_;
}

int DescribeUserOperationLogResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeUserOperationLogResult::getMessage()const
{
	return message_;
}

int DescribeUserOperationLogResult::getPageSize()const
{
	return pageSize_;
}

int DescribeUserOperationLogResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeUserOperationLogResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeUserOperationLogResult::getSuccess()const
{
	return success_;
}

