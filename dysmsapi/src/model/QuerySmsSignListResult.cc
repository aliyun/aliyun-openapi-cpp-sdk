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

#include <alibabacloud/dysmsapi/model/QuerySmsSignListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QuerySmsSignListResult::QuerySmsSignListResult() :
	ServiceResult()
{}

QuerySmsSignListResult::QuerySmsSignListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmsSignListResult::~QuerySmsSignListResult()
{}

void QuerySmsSignListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmsSignListNode = value["SmsSignList"]["QuerySmsSignDTO"];
	for (auto valueSmsSignListQuerySmsSignDTO : allSmsSignListNode)
	{
		QuerySmsSignDTO smsSignListObject;
		if(!valueSmsSignListQuerySmsSignDTO["SignName"].isNull())
			smsSignListObject.signName = valueSmsSignListQuerySmsSignDTO["SignName"].asString();
		if(!valueSmsSignListQuerySmsSignDTO["AuditStatus"].isNull())
			smsSignListObject.auditStatus = valueSmsSignListQuerySmsSignDTO["AuditStatus"].asString();
		if(!valueSmsSignListQuerySmsSignDTO["CreateDate"].isNull())
			smsSignListObject.createDate = valueSmsSignListQuerySmsSignDTO["CreateDate"].asString();
		if(!valueSmsSignListQuerySmsSignDTO["BusinessType"].isNull())
			smsSignListObject.businessType = valueSmsSignListQuerySmsSignDTO["BusinessType"].asString();
		if(!valueSmsSignListQuerySmsSignDTO["OrderId"].isNull())
			smsSignListObject.orderId = valueSmsSignListQuerySmsSignDTO["OrderId"].asString();
		auto reasonNode = value["Reason"];
		if(!reasonNode["RejectSubInfo"].isNull())
			smsSignListObject.reason.rejectSubInfo = reasonNode["RejectSubInfo"].asString();
		if(!reasonNode["RejectDate"].isNull())
			smsSignListObject.reason.rejectDate = reasonNode["RejectDate"].asString();
		if(!reasonNode["RejectInfo"].isNull())
			smsSignListObject.reason.rejectInfo = reasonNode["RejectInfo"].asString();
		smsSignList_.push_back(smsSignListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySmsSignListResult::getMessage()const
{
	return message_;
}

std::vector<QuerySmsSignListResult::QuerySmsSignDTO> QuerySmsSignListResult::getSmsSignList()const
{
	return smsSignList_;
}

std::string QuerySmsSignListResult::getCode()const
{
	return code_;
}

