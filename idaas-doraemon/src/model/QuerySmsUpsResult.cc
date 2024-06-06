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

#include <alibabacloud/idaas-doraemon/model/QuerySmsUpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

QuerySmsUpsResult::QuerySmsUpsResult() :
	ServiceResult()
{}

QuerySmsUpsResult::QuerySmsUpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmsUpsResult::~QuerySmsUpsResult()
{}

void QuerySmsUpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmsUpsNode = value["SmsUps"]["smsUpsItem"];
	for (auto valueSmsUpssmsUpsItem : allSmsUpsNode)
	{
		SmsUpsItem smsUpsObject;
		if(!valueSmsUpssmsUpsItem["PhoneNumber"].isNull())
			smsUpsObject.phoneNumber = valueSmsUpssmsUpsItem["PhoneNumber"].asString();
		if(!valueSmsUpssmsUpsItem["Content"].isNull())
			smsUpsObject.content = valueSmsUpssmsUpsItem["Content"].asString();
		if(!valueSmsUpssmsUpsItem["DestCode"].isNull())
			smsUpsObject.destCode = valueSmsUpssmsUpsItem["DestCode"].asString();
		if(!valueSmsUpssmsUpsItem["SequenceId"].isNull())
			smsUpsObject.sequenceId = valueSmsUpssmsUpsItem["SequenceId"].asString();
		if(!valueSmsUpssmsUpsItem["TenantId"].isNull())
			smsUpsObject.tenantId = valueSmsUpssmsUpsItem["TenantId"].asString();
		if(!valueSmsUpssmsUpsItem["SendTime"].isNull())
			smsUpsObject.sendTime = valueSmsUpssmsUpsItem["SendTime"].asString();
		smsUps_.push_back(smsUpsObject);
	}
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stol(value["TotalElements"].asString());

}

std::vector<QuerySmsUpsResult::SmsUpsItem> QuerySmsUpsResult::getSmsUps()const
{
	return smsUps_;
}

long QuerySmsUpsResult::getTotalElements()const
{
	return totalElements_;
}

