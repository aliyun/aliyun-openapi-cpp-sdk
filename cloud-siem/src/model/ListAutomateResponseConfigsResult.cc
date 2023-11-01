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

#include <alibabacloud/cloud-siem/model/ListAutomateResponseConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListAutomateResponseConfigsResult::ListAutomateResponseConfigsResult() :
	ServiceResult()
{}

ListAutomateResponseConfigsResult::ListAutomateResponseConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutomateResponseConfigsResult::~ListAutomateResponseConfigsResult()
{}

void ListAutomateResponseConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResponseDataNode = dataNode["ResponseData"]["ResponseDataItem"];
	for (auto dataNodeResponseDataResponseDataItem : allResponseDataNode)
	{
		Data::ResponseDataItem responseDataItemObject;
		if(!dataNodeResponseDataResponseDataItem["Id"].isNull())
			responseDataItemObject.id = std::stol(dataNodeResponseDataResponseDataItem["Id"].asString());
		if(!dataNodeResponseDataResponseDataItem["GmtCreate"].isNull())
			responseDataItemObject.gmtCreate = dataNodeResponseDataResponseDataItem["GmtCreate"].asString();
		if(!dataNodeResponseDataResponseDataItem["GmtModified"].isNull())
			responseDataItemObject.gmtModified = dataNodeResponseDataResponseDataItem["GmtModified"].asString();
		if(!dataNodeResponseDataResponseDataItem["Aliuid"].isNull())
			responseDataItemObject.aliuid = std::stol(dataNodeResponseDataResponseDataItem["Aliuid"].asString());
		if(!dataNodeResponseDataResponseDataItem["SubUserId"].isNull())
			responseDataItemObject.subUserId = std::stol(dataNodeResponseDataResponseDataItem["SubUserId"].asString());
		if(!dataNodeResponseDataResponseDataItem["RuleName"].isNull())
			responseDataItemObject.ruleName = dataNodeResponseDataResponseDataItem["RuleName"].asString();
		if(!dataNodeResponseDataResponseDataItem["AutoResponseType"].isNull())
			responseDataItemObject.autoResponseType = dataNodeResponseDataResponseDataItem["AutoResponseType"].asString();
		if(!dataNodeResponseDataResponseDataItem["ExecutionCondition"].isNull())
			responseDataItemObject.executionCondition = dataNodeResponseDataResponseDataItem["ExecutionCondition"].asString();
		if(!dataNodeResponseDataResponseDataItem["ActionType"].isNull())
			responseDataItemObject.actionType = dataNodeResponseDataResponseDataItem["ActionType"].asString();
		if(!dataNodeResponseDataResponseDataItem["ActionConfig"].isNull())
			responseDataItemObject.actionConfig = dataNodeResponseDataResponseDataItem["ActionConfig"].asString();
		if(!dataNodeResponseDataResponseDataItem["Status"].isNull())
			responseDataItemObject.status = std::stoi(dataNodeResponseDataResponseDataItem["Status"].asString());
		data_.responseData.push_back(responseDataItemObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAutomateResponseConfigsResult::getMessage()const
{
	return message_;
}

ListAutomateResponseConfigsResult::Data ListAutomateResponseConfigsResult::getData()const
{
	return data_;
}

int ListAutomateResponseConfigsResult::getCode()const
{
	return code_;
}

bool ListAutomateResponseConfigsResult::getSuccess()const
{
	return success_;
}

