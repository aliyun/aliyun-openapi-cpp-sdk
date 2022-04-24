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
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	auto allAccountTransactionsListNode = dataNode["AccountTransactionsList"]["AccountTransactionsListItem"];
	for (auto dataNodeAccountTransactionsListAccountTransactionsListItem : allAccountTransactionsListNode)
	{
		Data::AccountTransactionsListItem accountTransactionsListItemObject;
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["BillingCycle"].isNull())
			accountTransactionsListItemObject.billingCycle = dataNodeAccountTransactionsListAccountTransactionsListItem["BillingCycle"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionChannel"].isNull())
			accountTransactionsListItemObject.transactionChannel = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionChannel"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["RecordID"].isNull())
			accountTransactionsListItemObject.recordID = dataNodeAccountTransactionsListAccountTransactionsListItem["RecordID"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["Remarks"].isNull())
			accountTransactionsListItemObject.remarks = dataNodeAccountTransactionsListAccountTransactionsListItem["Remarks"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["Amount"].isNull())
			accountTransactionsListItemObject.amount = dataNodeAccountTransactionsListAccountTransactionsListItem["Amount"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionAccount"].isNull())
			accountTransactionsListItemObject.transactionAccount = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionAccount"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionTime"].isNull())
			accountTransactionsListItemObject.transactionTime = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionTime"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionType"].isNull())
			accountTransactionsListItemObject.transactionType = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionType"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionFlow"].isNull())
			accountTransactionsListItemObject.transactionFlow = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionFlow"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["FundType"].isNull())
			accountTransactionsListItemObject.fundType = dataNodeAccountTransactionsListAccountTransactionsListItem["FundType"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionChannelSN"].isNull())
			accountTransactionsListItemObject.transactionChannelSN = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionChannelSN"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionNumber"].isNull())
			accountTransactionsListItemObject.transactionNumber = dataNodeAccountTransactionsListAccountTransactionsListItem["TransactionNumber"].asString();
		if(!dataNodeAccountTransactionsListAccountTransactionsListItem["Balance"].isNull())
			accountTransactionsListItemObject.balance = dataNodeAccountTransactionsListAccountTransactionsListItem["Balance"].asString();
		data_.accountTransactionsList.push_back(accountTransactionsListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

