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

#include <alibabacloud/r-kvstore/model/EvaluateFailOverSwitchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

EvaluateFailOverSwitchResult::EvaluateFailOverSwitchResult() :
	ServiceResult()
{}

EvaluateFailOverSwitchResult::EvaluateFailOverSwitchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EvaluateFailOverSwitchResult::~EvaluateFailOverSwitchResult()
{}

void EvaluateFailOverSwitchResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["ReadWriteType"].isNull())
			itemsObject.readWriteType = value["ReadWriteType"].asString();
		if(!value["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		if(!value["SecurityIPList"].isNull())
			itemsObject.securityIPList = value["SecurityIPList"].asString();
		if(!value["HasInternetIP"].isNull())
			itemsObject.hasInternetIP = value["HasInternetIP"].asString() == "true";
		if(!value["InternetIP"].isNull())
			itemsObject.internetIP = value["InternetIP"].asString();
		auto allAccounts = value["Accounts"]["AccountsItem"];
		for (auto value : allAccounts)
		{
			ItemsItem::AccountsItem accountsObject;
			if(!value["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = value["AccountPrivilege"].asString();
			if(!value["AccountStatus"].isNull())
				accountsObject.accountStatus = value["AccountStatus"].asString();
			if(!value["AccountPrivilegeDetail"].isNull())
				accountsObject.accountPrivilegeDetail = value["AccountPrivilegeDetail"].asString();
			if(!value["AccountDescription"].isNull())
				accountsObject.accountDescription = value["AccountDescription"].asString();
			if(!value["AccountID"].isNull())
				accountsObject.accountID = value["AccountID"].asString();
			if(!value["AccountName"].isNull())
				accountsObject.accountName = value["AccountName"].asString();
			if(!value["PrivExceeded"].isNull())
				accountsObject.privExceeded = value["PrivExceeded"].asString();
			if(!value["Engine"].isNull())
				accountsObject.engine = value["Engine"].asString();
			if(!value["AccountType"].isNull())
				accountsObject.accountType = value["AccountType"].asString();
			itemsObject.accounts.push_back(accountsObject);
		}
		items_.push_back(itemsObject);
	}
	auto allReports = value["Reports"]["ReportsItem"];
	for (auto value : allReports)
	{
		ReportsItem reportsObject;
		if(!value["CheckType"].isNull())
			reportsObject.checkType = value["CheckType"].asString();
		if(!value["Severity"].isNull())
			reportsObject.severity = value["Severity"].asString();
		if(!value["ReasonCode"].isNull())
			reportsObject.reasonCode = value["ReasonCode"].asString();
		if(!value["ReasonMessage"].isNull())
			reportsObject.reasonMessage = value["ReasonMessage"].asString();
		reports_.push_back(reportsObject);
	}
	if(!value["ReplicaId"].isNull())
		replicaId_ = value["ReplicaId"].asString();
	if(!value["EvaluateResult"].isNull())
		evaluateResult_ = value["EvaluateResult"].asString();

}

std::string EvaluateFailOverSwitchResult::getEvaluateResult()const
{
	return evaluateResult_;
}

std::vector<EvaluateFailOverSwitchResult::ReportsItem> EvaluateFailOverSwitchResult::getReports()const
{
	return reports_;
}

std::vector<EvaluateFailOverSwitchResult::ItemsItem> EvaluateFailOverSwitchResult::getItems()const
{
	return items_;
}

std::string EvaluateFailOverSwitchResult::getReplicaId()const
{
	return replicaId_;
}

