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

#include <alibabacloud/cloud-siem/model/ListCloudSiemPredefinedRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListCloudSiemPredefinedRulesResult::ListCloudSiemPredefinedRulesResult() :
	ServiceResult()
{}

ListCloudSiemPredefinedRulesResult::ListCloudSiemPredefinedRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCloudSiemPredefinedRulesResult::~ListCloudSiemPredefinedRulesResult()
{}

void ListCloudSiemPredefinedRulesResult::parse(const std::string &payload)
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
		if(!dataNodeResponseDataResponseDataItem["RuleName"].isNull())
			responseDataItemObject.ruleName = dataNodeResponseDataResponseDataItem["RuleName"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleNameCn"].isNull())
			responseDataItemObject.ruleNameCn = dataNodeResponseDataResponseDataItem["RuleNameCn"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleNameEn"].isNull())
			responseDataItemObject.ruleNameEn = dataNodeResponseDataResponseDataItem["RuleNameEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleNameMds"].isNull())
			responseDataItemObject.ruleNameMds = dataNodeResponseDataResponseDataItem["RuleNameMds"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleDescMds"].isNull())
			responseDataItemObject.ruleDescMds = dataNodeResponseDataResponseDataItem["RuleDescMds"].asString();
		if(!dataNodeResponseDataResponseDataItem["ThreatLevel"].isNull())
			responseDataItemObject.threatLevel = dataNodeResponseDataResponseDataItem["ThreatLevel"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertType"].isNull())
			responseDataItemObject.alertType = dataNodeResponseDataResponseDataItem["AlertType"].asString();
		if(!dataNodeResponseDataResponseDataItem["Source"].isNull())
			responseDataItemObject.source = dataNodeResponseDataResponseDataItem["Source"].asString();
		if(!dataNodeResponseDataResponseDataItem["EventTransferType"].isNull())
			responseDataItemObject.eventTransferType = dataNodeResponseDataResponseDataItem["EventTransferType"].asString();
		if(!dataNodeResponseDataResponseDataItem["AttCk"].isNull())
			responseDataItemObject.attCk = dataNodeResponseDataResponseDataItem["AttCk"].asString();
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

std::string ListCloudSiemPredefinedRulesResult::getMessage()const
{
	return message_;
}

ListCloudSiemPredefinedRulesResult::Data ListCloudSiemPredefinedRulesResult::getData()const
{
	return data_;
}

int ListCloudSiemPredefinedRulesResult::getCode()const
{
	return code_;
}

bool ListCloudSiemPredefinedRulesResult::getSuccess()const
{
	return success_;
}

