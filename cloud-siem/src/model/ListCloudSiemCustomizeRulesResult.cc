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

#include <alibabacloud/cloud-siem/model/ListCloudSiemCustomizeRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListCloudSiemCustomizeRulesResult::ListCloudSiemCustomizeRulesResult() :
	ServiceResult()
{}

ListCloudSiemCustomizeRulesResult::ListCloudSiemCustomizeRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCloudSiemCustomizeRulesResult::~ListCloudSiemCustomizeRulesResult()
{}

void ListCloudSiemCustomizeRulesResult::parse(const std::string &payload)
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
		if(!dataNodeResponseDataResponseDataItem["RuleName"].isNull())
			responseDataItemObject.ruleName = dataNodeResponseDataResponseDataItem["RuleName"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleDesc"].isNull())
			responseDataItemObject.ruleDesc = dataNodeResponseDataResponseDataItem["RuleDesc"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleType"].isNull())
			responseDataItemObject.ruleType = dataNodeResponseDataResponseDataItem["RuleType"].asString();
		if(!dataNodeResponseDataResponseDataItem["ThreatLevel"].isNull())
			responseDataItemObject.threatLevel = dataNodeResponseDataResponseDataItem["ThreatLevel"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertType"].isNull())
			responseDataItemObject.alertType = dataNodeResponseDataResponseDataItem["AlertType"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertTypeMds"].isNull())
			responseDataItemObject.alertTypeMds = dataNodeResponseDataResponseDataItem["AlertTypeMds"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogType"].isNull())
			responseDataItemObject.logType = dataNodeResponseDataResponseDataItem["LogType"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogTypeMds"].isNull())
			responseDataItemObject.logTypeMds = dataNodeResponseDataResponseDataItem["LogTypeMds"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogSource"].isNull())
			responseDataItemObject.logSource = dataNodeResponseDataResponseDataItem["LogSource"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogSourceMds"].isNull())
			responseDataItemObject.logSourceMds = dataNodeResponseDataResponseDataItem["LogSourceMds"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleCondition"].isNull())
			responseDataItemObject.ruleCondition = dataNodeResponseDataResponseDataItem["RuleCondition"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleGroup"].isNull())
			responseDataItemObject.ruleGroup = dataNodeResponseDataResponseDataItem["RuleGroup"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleThreshold"].isNull())
			responseDataItemObject.ruleThreshold = dataNodeResponseDataResponseDataItem["RuleThreshold"].asString();
		if(!dataNodeResponseDataResponseDataItem["QueryCycle"].isNull())
			responseDataItemObject.queryCycle = dataNodeResponseDataResponseDataItem["QueryCycle"].asString();
		if(!dataNodeResponseDataResponseDataItem["AttCk"].isNull())
			responseDataItemObject.attCk = dataNodeResponseDataResponseDataItem["AttCk"].asString();
		if(!dataNodeResponseDataResponseDataItem["EventTransferSwitch"].isNull())
			responseDataItemObject.eventTransferSwitch = std::stoi(dataNodeResponseDataResponseDataItem["EventTransferSwitch"].asString());
		if(!dataNodeResponseDataResponseDataItem["EventTransferType"].isNull())
			responseDataItemObject.eventTransferType = dataNodeResponseDataResponseDataItem["EventTransferType"].asString();
		if(!dataNodeResponseDataResponseDataItem["EventTransferExt"].isNull())
			responseDataItemObject.eventTransferExt = dataNodeResponseDataResponseDataItem["EventTransferExt"].asString();
		if(!dataNodeResponseDataResponseDataItem["Status"].isNull())
			responseDataItemObject.status = std::stoi(dataNodeResponseDataResponseDataItem["Status"].asString());
		if(!dataNodeResponseDataResponseDataItem["DataType"].isNull())
			responseDataItemObject.dataType = std::stoi(dataNodeResponseDataResponseDataItem["DataType"].asString());
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

std::string ListCloudSiemCustomizeRulesResult::getMessage()const
{
	return message_;
}

ListCloudSiemCustomizeRulesResult::Data ListCloudSiemCustomizeRulesResult::getData()const
{
	return data_;
}

int ListCloudSiemCustomizeRulesResult::getCode()const
{
	return code_;
}

bool ListCloudSiemCustomizeRulesResult::getSuccess()const
{
	return success_;
}

