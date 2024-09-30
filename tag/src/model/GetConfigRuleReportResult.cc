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

#include <alibabacloud/tag/model/GetConfigRuleReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

GetConfigRuleReportResult::GetConfigRuleReportResult() :
	ServiceResult()
{}

GetConfigRuleReportResult::GetConfigRuleReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConfigRuleReportResult::~GetConfigRuleReportResult()
{}

void GetConfigRuleReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = std::stol(dataNode["CreatedTime"].asString());
	if(!dataNode["ReportId"].isNull())
		data_.reportId = dataNode["ReportId"].asString();
	if(!dataNode["TargetId"].isNull())
		data_.targetId = dataNode["TargetId"].asString();
	if(!dataNode["TargetType"].isNull())
		data_.targetType = dataNode["TargetType"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetConfigRuleReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetConfigRuleReportResult::Data GetConfigRuleReportResult::getData()const
{
	return data_;
}

bool GetConfigRuleReportResult::getSuccess()const
{
	return success_;
}

