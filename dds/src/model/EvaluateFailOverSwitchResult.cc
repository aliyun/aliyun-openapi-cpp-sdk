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

#include <alibabacloud/dds/model/EvaluateFailOverSwitchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsItemsItem["DBInstanceId"].asString();
		if(!valueItemsItemsItem["RegionId"].isNull())
			itemsObject.regionId = valueItemsItemsItem["RegionId"].asString();
		if(!valueItemsItemsItem["ReadWriteType"].isNull())
			itemsObject.readWriteType = valueItemsItemsItem["ReadWriteType"].asString();
		if(!valueItemsItemsItem["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsItemsItem["InstanceNetworkType"].asString();
		if(!valueItemsItemsItem["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsItemsItem["SecurityIPList"].asString();
		if(!valueItemsItemsItem["HasInternetIP"].isNull())
			itemsObject.hasInternetIP = valueItemsItemsItem["HasInternetIP"].asString() == "true";
		if(!valueItemsItemsItem["InternetIP"].isNull())
			itemsObject.internetIP = valueItemsItemsItem["InternetIP"].asString();
		auto allAccountsNode = allItemsNode["Accounts"]["AccountsItem"];
		for (auto allItemsNodeAccountsAccountsItem : allAccountsNode)
		{
			ItemsItem::AccountsItem accountsObject;
			if(!allItemsNodeAccountsAccountsItem["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = allItemsNodeAccountsAccountsItem["AccountPrivilege"].asString();
			if(!allItemsNodeAccountsAccountsItem["AccountStatus"].isNull())
				accountsObject.accountStatus = allItemsNodeAccountsAccountsItem["AccountStatus"].asString();
			if(!allItemsNodeAccountsAccountsItem["AccountPrivilegeDetail"].isNull())
				accountsObject.accountPrivilegeDetail = allItemsNodeAccountsAccountsItem["AccountPrivilegeDetail"].asString();
			if(!allItemsNodeAccountsAccountsItem["AccountDescription"].isNull())
				accountsObject.accountDescription = allItemsNodeAccountsAccountsItem["AccountDescription"].asString();
			if(!allItemsNodeAccountsAccountsItem["AccountID"].isNull())
				accountsObject.accountID = allItemsNodeAccountsAccountsItem["AccountID"].asString();
			if(!allItemsNodeAccountsAccountsItem["AccountName"].isNull())
				accountsObject.accountName = allItemsNodeAccountsAccountsItem["AccountName"].asString();
			if(!allItemsNodeAccountsAccountsItem["PrivExceeded"].isNull())
				accountsObject.privExceeded = allItemsNodeAccountsAccountsItem["PrivExceeded"].asString();
			if(!allItemsNodeAccountsAccountsItem["Engine"].isNull())
				accountsObject.engine = allItemsNodeAccountsAccountsItem["Engine"].asString();
			if(!allItemsNodeAccountsAccountsItem["AccountType"].isNull())
				accountsObject.accountType = allItemsNodeAccountsAccountsItem["AccountType"].asString();
			itemsObject.accounts.push_back(accountsObject);
		}
		items_.push_back(itemsObject);
	}
	auto allReportsNode = value["Reports"]["ReportsItem"];
	for (auto valueReportsReportsItem : allReportsNode)
	{
		ReportsItem reportsObject;
		if(!valueReportsReportsItem["CheckType"].isNull())
			reportsObject.checkType = valueReportsReportsItem["CheckType"].asString();
		if(!valueReportsReportsItem["Severity"].isNull())
			reportsObject.severity = valueReportsReportsItem["Severity"].asString();
		if(!valueReportsReportsItem["ReasonCode"].isNull())
			reportsObject.reasonCode = valueReportsReportsItem["ReasonCode"].asString();
		if(!valueReportsReportsItem["ReasonMessage"].isNull())
			reportsObject.reasonMessage = valueReportsReportsItem["ReasonMessage"].asString();
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

