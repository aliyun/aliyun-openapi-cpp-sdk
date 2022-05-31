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

#include <alibabacloud/cloudesl/model/DescribeUserLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeUserLogResult::DescribeUserLogResult() :
	ServiceResult()
{}

DescribeUserLogResult::DescribeUserLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserLogResult::~DescribeUserLogResult()
{}

void DescribeUserLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserLogsNode = value["UserLogs"]["UserLogInfo"];
	for (auto valueUserLogsUserLogInfo : allUserLogsNode)
	{
		UserLogInfo userLogsObject;
		if(!valueUserLogsUserLogInfo["EslBarCode"].isNull())
			userLogsObject.eslBarCode = valueUserLogsUserLogInfo["EslBarCode"].asString();
		if(!valueUserLogsUserLogInfo["OperationSendTime"].isNull())
			userLogsObject.operationSendTime = valueUserLogsUserLogInfo["OperationSendTime"].asString();
		if(!valueUserLogsUserLogInfo["ActionPrice"].isNull())
			userLogsObject.actionPrice = valueUserLogsUserLogInfo["ActionPrice"].asString();
		if(!valueUserLogsUserLogInfo["UserId"].isNull())
			userLogsObject.userId = valueUserLogsUserLogInfo["UserId"].asString();
		if(!valueUserLogsUserLogInfo["PriceUnit"].isNull())
			userLogsObject.priceUnit = valueUserLogsUserLogInfo["PriceUnit"].asString();
		if(!valueUserLogsUserLogInfo["ResultCode"].isNull())
			userLogsObject.resultCode = valueUserLogsUserLogInfo["ResultCode"].asString();
		if(!valueUserLogsUserLogInfo["ItemId"].isNull())
			userLogsObject.itemId = valueUserLogsUserLogInfo["ItemId"].asString();
		if(!valueUserLogsUserLogInfo["GmtModified"].isNull())
			userLogsObject.gmtModified = valueUserLogsUserLogInfo["GmtModified"].asString();
		if(!valueUserLogsUserLogInfo["OperationType"].isNull())
			userLogsObject.operationType = valueUserLogsUserLogInfo["OperationType"].asString();
		if(!valueUserLogsUserLogInfo["OperationResponseTime"].isNull())
			userLogsObject.operationResponseTime = valueUserLogsUserLogInfo["OperationResponseTime"].asString();
		if(!valueUserLogsUserLogInfo["OperationStatus"].isNull())
			userLogsObject.operationStatus = valueUserLogsUserLogInfo["OperationStatus"].asString();
		if(!valueUserLogsUserLogInfo["StoreId"].isNull())
			userLogsObject.storeId = valueUserLogsUserLogInfo["StoreId"].asString();
		if(!valueUserLogsUserLogInfo["ItemShortTitle"].isNull())
			userLogsObject.itemShortTitle = valueUserLogsUserLogInfo["ItemShortTitle"].asString();
		if(!valueUserLogsUserLogInfo["LogId"].isNull())
			userLogsObject.logId = valueUserLogsUserLogInfo["LogId"].asString();
		if(!valueUserLogsUserLogInfo["BePromotion"].isNull())
			userLogsObject.bePromotion = valueUserLogsUserLogInfo["BePromotion"].asString() == "true";
		if(!valueUserLogsUserLogInfo["GmtCreate"].isNull())
			userLogsObject.gmtCreate = valueUserLogsUserLogInfo["GmtCreate"].asString();
		if(!valueUserLogsUserLogInfo["EslSignal"].isNull())
			userLogsObject.eslSignal = std::stoi(valueUserLogsUserLogInfo["EslSignal"].asString());
		if(!valueUserLogsUserLogInfo["SpendTime"].isNull())
			userLogsObject.spendTime = valueUserLogsUserLogInfo["SpendTime"].asString();
		if(!valueUserLogsUserLogInfo["ItemBarCode"].isNull())
			userLogsObject.itemBarCode = valueUserLogsUserLogInfo["ItemBarCode"].asString();
		if(!valueUserLogsUserLogInfo["I18nResultKey"].isNull())
			userLogsObject.i18nResultKey = valueUserLogsUserLogInfo["I18nResultKey"].asString();
		userLogs_.push_back(userLogsObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

int DescribeUserLogResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeUserLogResult::getMessage()const
{
	return message_;
}

int DescribeUserLogResult::getPageSize()const
{
	return pageSize_;
}

int DescribeUserLogResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeUserLogResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeUserLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeUserLogResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeUserLogResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeUserLogResult::getCode()const
{
	return code_;
}

std::vector<DescribeUserLogResult::UserLogInfo> DescribeUserLogResult::getUserLogs()const
{
	return userLogs_;
}

bool DescribeUserLogResult::getSuccess()const
{
	return success_;
}

