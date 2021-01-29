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

#include <alibabacloud/cdrs/model/GetMonitorListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

GetMonitorListResult::GetMonitorListResult() :
	ServiceResult()
{}

GetMonitorListResult::GetMonitorListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMonitorListResult::~GetMonitorListResult()
{}

void GetMonitorListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allRecordsNode = dataNode["Records"]["Record"];
	for (auto dataNodeRecordsRecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsRecord["TaskId"].isNull())
			recordObject.taskId = dataNodeRecordsRecord["TaskId"].asString();
		if(!dataNodeRecordsRecord["Status"].isNull())
			recordObject.status = dataNodeRecordsRecord["Status"].asString();
		if(!dataNodeRecordsRecord["MonitorType"].isNull())
			recordObject.monitorType = dataNodeRecordsRecord["MonitorType"].asString();
		if(!dataNodeRecordsRecord["RuleName"].isNull())
			recordObject.ruleName = dataNodeRecordsRecord["RuleName"].asString();
		if(!dataNodeRecordsRecord["AlgorithmVendor"].isNull())
			recordObject.algorithmVendor = dataNodeRecordsRecord["AlgorithmVendor"].asString();
		if(!dataNodeRecordsRecord["CreateDate"].isNull())
			recordObject.createDate = dataNodeRecordsRecord["CreateDate"].asString();
		if(!dataNodeRecordsRecord["ModifiedDate"].isNull())
			recordObject.modifiedDate = dataNodeRecordsRecord["ModifiedDate"].asString();
		if(!dataNodeRecordsRecord["DeviceList"].isNull())
			recordObject.deviceList = dataNodeRecordsRecord["DeviceList"].asString();
		if(!dataNodeRecordsRecord["Attributes"].isNull())
			recordObject.attributes = dataNodeRecordsRecord["Attributes"].asString();
		if(!dataNodeRecordsRecord["RuleExpression"].isNull())
			recordObject.ruleExpression = dataNodeRecordsRecord["RuleExpression"].asString();
		if(!dataNodeRecordsRecord["NotifierType"].isNull())
			recordObject.notifierType = dataNodeRecordsRecord["NotifierType"].asString();
		if(!dataNodeRecordsRecord["NotifierExtra"].isNull())
			recordObject.notifierExtra = dataNodeRecordsRecord["NotifierExtra"].asString();
		if(!dataNodeRecordsRecord["Description"].isNull())
			recordObject.description = dataNodeRecordsRecord["Description"].asString();
		if(!dataNodeRecordsRecord["Expression"].isNull())
			recordObject.expression = dataNodeRecordsRecord["Expression"].asString();
		if(!dataNodeRecordsRecord["ImageMatch"].isNull())
			recordObject.imageMatch = dataNodeRecordsRecord["ImageMatch"].asString();
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetMonitorListResult::getMessage()const
{
	return message_;
}

GetMonitorListResult::Data GetMonitorListResult::getData()const
{
	return data_;
}

std::string GetMonitorListResult::getCode()const
{
	return code_;
}

