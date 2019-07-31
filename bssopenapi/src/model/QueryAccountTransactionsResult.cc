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

#include <alibabacloud/bssopenapi/model/QueryAccountTransactionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryAccountTransactionsResult::QueryAccountTransactionsResult() :
	ServiceResult()
{}

QueryAccountTransactionsResult::QueryAccountTransactionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccountTransactionsResult::~QueryAccountTransactionsResult()
{}

void QueryAccountTransactionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allAccountTransactionsList = value["AccountTransactionsList"]["AccountTransactionsListItem"];
	for (auto value : allAccountTransactionsList)
	{
		Data::AccountTransactionsListItem accountTransactionsListItemObject;
		if(!value["TransactionNumber"].isNull())
			accountTransactionsListItemObject.transactionNumber = value["TransactionNumber"].asString();
		if(!value["TransactionTime"].isNull())
			accountTransactionsListItemObject.transactionTime = value["TransactionTime"].asString();
		if(!value["TransactionFlow"].isNull())
			accountTransactionsListItemObject.transactionFlow = value["TransactionFlow"].asString();
		if(!value["TransactionType"].isNull())
			accountTransactionsListItemObject.transactionType = value["TransactionType"].asString();
		if(!value["TransactionChannel"].isNull())
			accountTransactionsListItemObject.transactionChannel = value["TransactionChannel"].asString();
		if(!value["TransactionChannelSN"].isNull())
			accountTransactionsListItemObject.transactionChannelSN = value["TransactionChannelSN"].asString();
		if(!value["FundType"].isNull())
			accountTransactionsListItemObject.fundType = value["FundType"].asString();
		if(!value["RecordID"].isNull())
			accountTransactionsListItemObject.recordID = value["RecordID"].asString();
		if(!value["Remarks"].isNull())
			accountTransactionsListItemObject.remarks = value["Remarks"].asString();
		if(!value["BillingCycle"].isNull())
			accountTransactionsListItemObject.billingCycle = value["BillingCycle"].asString();
		if(!value["Amount"].isNull())
			accountTransactionsListItemObject.amount = value["Amount"].asString();
		if(!value["Balance"].isNull())
			accountTransactionsListItemObject.balance = value["Balance"].asString();
		if(!value["TransactionAccount"].isNull())
			accountTransactionsListItemObject.transactionAccount = value["TransactionAccount"].asString();
		data_.accountTransactionsList.push_back(accountTransactionsListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryAccountTransactionsResult::getMessage()const
{
	return message_;
}

QueryAccountTransactionsResult::Data QueryAccountTransactionsResult::getData()const
{
	return data_;
}

std::string QueryAccountTransactionsResult::getCode()const
{
	return code_;
}

bool QueryAccountTransactionsResult::getSuccess()const
{
	return success_;
}

