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

#include <alibabacloud/cloudesl/model/DescribeStoreStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeStoreStatisticsResult::DescribeStoreStatisticsResult() :
	ServiceResult()
{}

DescribeStoreStatisticsResult::DescribeStoreStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStoreStatisticsResult::~DescribeStoreStatisticsResult()
{}

void DescribeStoreStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStoreStatisticsInfoListNode = value["StoreStatisticsInfoList"]["StoreStatisticsInfo"];
	for (auto valueStoreStatisticsInfoListStoreStatisticsInfo : allStoreStatisticsInfoListNode)
	{
		StoreStatisticsInfo storeStatisticsInfoListObject;
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["SendFailEsl"].isNull())
			storeStatisticsInfoListObject.sendFailEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["SendFailEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["DisplayFailEsl"].isNull())
			storeStatisticsInfoListObject.displayFailEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["DisplayFailEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["StoreName"].isNull())
			storeStatisticsInfoListObject.storeName = valueStoreStatisticsInfoListStoreStatisticsInfo["StoreName"].asString();
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["ActiveApDevice"].isNull())
			storeStatisticsInfoListObject.activeApDevice = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["ActiveApDevice"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["UpdateFailureEsl"].isNull())
			storeStatisticsInfoListObject.updateFailureEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["UpdateFailureEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["UpdateEsl"].isNull())
			storeStatisticsInfoListObject.updateEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["UpdateEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["OfflineEslDevice"].isNull())
			storeStatisticsInfoListObject.offlineEslDevice = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["OfflineEslDevice"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["StatisticsTime"].isNull())
			storeStatisticsInfoListObject.statisticsTime = valueStoreStatisticsInfoListStoreStatisticsInfo["StatisticsTime"].asString();
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["StoreId"].isNull())
			storeStatisticsInfoListObject.storeId = valueStoreStatisticsInfoListStoreStatisticsInfo["StoreId"].asString();
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["BindEsl"].isNull())
			storeStatisticsInfoListObject.bindEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["BindEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["AbnormalEsl"].isNull())
			storeStatisticsInfoListObject.abnormalEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["AbnormalEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["LowBatteryEsl"].isNull())
			storeStatisticsInfoListObject.lowBatteryEsl = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["LowBatteryEsl"].asString());
		if(!valueStoreStatisticsInfoListStoreStatisticsInfo["BindItem"].isNull())
			storeStatisticsInfoListObject.bindItem = std::stoi(valueStoreStatisticsInfoListStoreStatisticsInfo["BindItem"].asString());
		storeStatisticsInfoList_.push_back(storeStatisticsInfoListObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeStoreStatisticsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeStoreStatisticsResult::StoreStatisticsInfo> DescribeStoreStatisticsResult::getStoreStatisticsInfoList()const
{
	return storeStatisticsInfoList_;
}

std::string DescribeStoreStatisticsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeStoreStatisticsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeStoreStatisticsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeStoreStatisticsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeStoreStatisticsResult::getCode()const
{
	return code_;
}

bool DescribeStoreStatisticsResult::getSuccess()const
{
	return success_;
}

