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

#include <alibabacloud/idaas-doraemon/model/QuerySmsReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

QuerySmsReportsResult::QuerySmsReportsResult() :
	ServiceResult()
{}

QuerySmsReportsResult::QuerySmsReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmsReportsResult::~QuerySmsReportsResult()
{}

void QuerySmsReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmsReportsNode = value["SmsReports"]["smsReportsItem"];
	for (auto valueSmsReportssmsReportsItem : allSmsReportsNode)
	{
		SmsReportsItem smsReportsObject;
		if(!valueSmsReportssmsReportsItem["Tid"].isNull())
			smsReportsObject.tid = valueSmsReportssmsReportsItem["Tid"].asString();
		if(!valueSmsReportssmsReportsItem["Mobile"].isNull())
			smsReportsObject.mobile = valueSmsReportssmsReportsItem["Mobile"].asString();
		if(!valueSmsReportssmsReportsItem["Code"].isNull())
			smsReportsObject.code = valueSmsReportssmsReportsItem["Code"].asString();
		if(!valueSmsReportssmsReportsItem["Stat"].isNull())
			smsReportsObject.stat = valueSmsReportssmsReportsItem["Stat"].asString();
		if(!valueSmsReportssmsReportsItem["Sn"].isNull())
			smsReportsObject.sn = valueSmsReportssmsReportsItem["Sn"].asString();
		if(!valueSmsReportssmsReportsItem["TenantId"].isNull())
			smsReportsObject.tenantId = valueSmsReportssmsReportsItem["TenantId"].asString();
		if(!valueSmsReportssmsReportsItem["AppId"].isNull())
			smsReportsObject.appId = valueSmsReportssmsReportsItem["AppId"].asString();
		if(!valueSmsReportssmsReportsItem["EventId"].isNull())
			smsReportsObject.eventId = valueSmsReportssmsReportsItem["EventId"].asString();
		if(!valueSmsReportssmsReportsItem["Time"].isNull())
			smsReportsObject.time = valueSmsReportssmsReportsItem["Time"].asString();
		if(!valueSmsReportssmsReportsItem["ChargedCount"].isNull())
			smsReportsObject.chargedCount = std::stoi(valueSmsReportssmsReportsItem["ChargedCount"].asString());
		smsReports_.push_back(smsReportsObject);
	}
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stol(value["TotalElements"].asString());

}

std::vector<QuerySmsReportsResult::SmsReportsItem> QuerySmsReportsResult::getSmsReports()const
{
	return smsReports_;
}

long QuerySmsReportsResult::getTotalElements()const
{
	return totalElements_;
}

