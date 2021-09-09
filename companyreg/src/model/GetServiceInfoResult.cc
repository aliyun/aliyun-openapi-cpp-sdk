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

#include <alibabacloud/companyreg/model/GetServiceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetServiceInfoResult::GetServiceInfoResult() :
	ServiceResult()
{}

GetServiceInfoResult::GetServiceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceInfoResult::~GetServiceInfoResult()
{}

void GetServiceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto invoiceCheckControlledInfoNode = value["InvoiceCheckControlledInfo"];
	if(!invoiceCheckControlledInfoNode["MonthCheckCount"].isNull())
		invoiceCheckControlledInfo_.monthCheckCount = std::stoi(invoiceCheckControlledInfoNode["MonthCheckCount"].asString());
	if(!invoiceCheckControlledInfoNode["MonthLimitCount"].isNull())
		invoiceCheckControlledInfo_.monthLimitCount = std::stoi(invoiceCheckControlledInfoNode["MonthLimitCount"].asString());
	if(!invoiceCheckControlledInfoNode["TrialLimitCount"].isNull())
		invoiceCheckControlledInfo_.trialLimitCount = std::stoi(invoiceCheckControlledInfoNode["TrialLimitCount"].asString());
	if(!invoiceCheckControlledInfoNode["IsControlledByLimit"].isNull())
		invoiceCheckControlledInfo_.isControlledByLimit = invoiceCheckControlledInfoNode["IsControlledByLimit"].asString() == "true";
	if(!value["OpeningPeriod"].isNull())
		openingPeriod_ = value["OpeningPeriod"].asString();
	if(!value["CurrentPeriod"].isNull())
		currentPeriod_ = value["CurrentPeriod"].asString();
	if(!value["SystemTime"].isNull())
		systemTime_ = std::stol(value["SystemTime"].asString());
	if(!value["IsClearedTrialData"].isNull())
		isClearedTrialData_ = value["IsClearedTrialData"].asString() == "true";
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["OpeningBalanceStatus"].isNull())
		openingBalanceStatus_ = value["OpeningBalanceStatus"].asString();

}

std::string GetServiceInfoResult::getOpeningPeriod()const
{
	return openingPeriod_;
}

std::string GetServiceInfoResult::getCurrentPeriod()const
{
	return currentPeriod_;
}

std::string GetServiceInfoResult::getOpeningBalanceStatus()const
{
	return openingBalanceStatus_;
}

GetServiceInfoResult::InvoiceCheckControlledInfo GetServiceInfoResult::getInvoiceCheckControlledInfo()const
{
	return invoiceCheckControlledInfo_;
}

bool GetServiceInfoResult::getIsClearedTrialData()const
{
	return isClearedTrialData_;
}

long GetServiceInfoResult::getSystemTime()const
{
	return systemTime_;
}

std::string GetServiceInfoResult::getName()const
{
	return name_;
}

