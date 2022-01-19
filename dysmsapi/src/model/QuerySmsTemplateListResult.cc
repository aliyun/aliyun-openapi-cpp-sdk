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

#include <alibabacloud/dysmsapi/model/QuerySmsTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QuerySmsTemplateListResult::QuerySmsTemplateListResult() :
	ServiceResult()
{}

QuerySmsTemplateListResult::QuerySmsTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmsTemplateListResult::~QuerySmsTemplateListResult()
{}

void QuerySmsTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmsTemplateListNode = value["SmsTemplateList"]["SmsStatsResultDTO"];
	for (auto valueSmsTemplateListSmsStatsResultDTO : allSmsTemplateListNode)
	{
		SmsStatsResultDTO smsTemplateListObject;
		if(!valueSmsTemplateListSmsStatsResultDTO["TemplateCode"].isNull())
			smsTemplateListObject.templateCode = valueSmsTemplateListSmsStatsResultDTO["TemplateCode"].asString();
		if(!valueSmsTemplateListSmsStatsResultDTO["TemplateName"].isNull())
			smsTemplateListObject.templateName = valueSmsTemplateListSmsStatsResultDTO["TemplateName"].asString();
		if(!valueSmsTemplateListSmsStatsResultDTO["TemplateType"].isNull())
			smsTemplateListObject.templateType = std::stoi(valueSmsTemplateListSmsStatsResultDTO["TemplateType"].asString());
		if(!valueSmsTemplateListSmsStatsResultDTO["AuditStatus"].isNull())
			smsTemplateListObject.auditStatus = valueSmsTemplateListSmsStatsResultDTO["AuditStatus"].asString();
		if(!valueSmsTemplateListSmsStatsResultDTO["TemplateContent"].isNull())
			smsTemplateListObject.templateContent = valueSmsTemplateListSmsStatsResultDTO["TemplateContent"].asString();
		if(!valueSmsTemplateListSmsStatsResultDTO["CreateDate"].isNull())
			smsTemplateListObject.createDate = valueSmsTemplateListSmsStatsResultDTO["CreateDate"].asString();
		if(!valueSmsTemplateListSmsStatsResultDTO["OrderId"].isNull())
			smsTemplateListObject.orderId = valueSmsTemplateListSmsStatsResultDTO["OrderId"].asString();
		auto reasonNode = value["Reason"];
		if(!reasonNode["RejectDate"].isNull())
			smsTemplateListObject.reason.rejectDate = reasonNode["RejectDate"].asString();
		if(!reasonNode["RejectInfo"].isNull())
			smsTemplateListObject.reason.rejectInfo = reasonNode["RejectInfo"].asString();
		if(!reasonNode["RejectSubInfo"].isNull())
			smsTemplateListObject.reason.rejectSubInfo = reasonNode["RejectSubInfo"].asString();
		smsTemplateList_.push_back(smsTemplateListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySmsTemplateListResult::getMessage()const
{
	return message_;
}

std::vector<QuerySmsTemplateListResult::SmsStatsResultDTO> QuerySmsTemplateListResult::getSmsTemplateList()const
{
	return smsTemplateList_;
}

std::string QuerySmsTemplateListResult::getCode()const
{
	return code_;
}

