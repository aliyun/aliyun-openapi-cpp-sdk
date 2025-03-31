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

#include <alibabacloud/cloud-siem/model/ListCustomizeRuleTestResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListCustomizeRuleTestResultResult::ListCustomizeRuleTestResultResult() :
	ServiceResult()
{}

ListCustomizeRuleTestResultResult::ListCustomizeRuleTestResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomizeRuleTestResultResult::~ListCustomizeRuleTestResultResult()
{}

void ListCustomizeRuleTestResultResult::parse(const std::string &payload)
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
		if(!dataNodeResponseDataResponseDataItem["Uuid"].isNull())
			responseDataItemObject.uuid = dataNodeResponseDataResponseDataItem["Uuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["MainUserId"].isNull())
			responseDataItemObject.mainUserId = dataNodeResponseDataResponseDataItem["MainUserId"].asString();
		if(!dataNodeResponseDataResponseDataItem["SubUserId"].isNull())
			responseDataItemObject.subUserId = dataNodeResponseDataResponseDataItem["SubUserId"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogType"].isNull())
			responseDataItemObject.logType = dataNodeResponseDataResponseDataItem["LogType"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogSource"].isNull())
			responseDataItemObject.logSource = dataNodeResponseDataResponseDataItem["LogSource"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertSrcProd"].isNull())
			responseDataItemObject.alertSrcProd = dataNodeResponseDataResponseDataItem["AlertSrcProd"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertSrcProdModule"].isNull())
			responseDataItemObject.alertSrcProdModule = dataNodeResponseDataResponseDataItem["AlertSrcProdModule"].asString();
		if(!dataNodeResponseDataResponseDataItem["AttCk"].isNull())
			responseDataItemObject.attCk = dataNodeResponseDataResponseDataItem["AttCk"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertDesc"].isNull())
			responseDataItemObject.alertDesc = dataNodeResponseDataResponseDataItem["AlertDesc"].asString();
		if(!dataNodeResponseDataResponseDataItem["OnlineStatus"].isNull())
			responseDataItemObject.onlineStatus = dataNodeResponseDataResponseDataItem["OnlineStatus"].asString();
		if(!dataNodeResponseDataResponseDataItem["EventName"].isNull())
			responseDataItemObject.eventName = dataNodeResponseDataResponseDataItem["EventName"].asString();
		if(!dataNodeResponseDataResponseDataItem["Level"].isNull())
			responseDataItemObject.level = dataNodeResponseDataResponseDataItem["Level"].asString();
		if(!dataNodeResponseDataResponseDataItem["EventType"].isNull())
			responseDataItemObject.eventType = dataNodeResponseDataResponseDataItem["EventType"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertDetail"].isNull())
			responseDataItemObject.alertDetail = dataNodeResponseDataResponseDataItem["AlertDetail"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogTime"].isNull())
			responseDataItemObject.logTime = dataNodeResponseDataResponseDataItem["LogTime"].asString();
		if(!dataNodeResponseDataResponseDataItem["VerifyType"].isNull())
			responseDataItemObject.verifyType = dataNodeResponseDataResponseDataItem["VerifyType"].asString();
		data_.responseData.push_back(responseDataItemObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["VerifiedCount"].isNull())
		data_.pageInfo.verifiedCount = std::stol(pageInfoNode["VerifiedCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListCustomizeRuleTestResultResult::getMessage()const
{
	return message_;
}

ListCustomizeRuleTestResultResult::Data ListCustomizeRuleTestResultResult::getData()const
{
	return data_;
}

int ListCustomizeRuleTestResultResult::getCode()const
{
	return code_;
}

bool ListCustomizeRuleTestResultResult::getSuccess()const
{
	return success_;
}

