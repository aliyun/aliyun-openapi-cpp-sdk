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

#include <alibabacloud/companyreg/model/ListCashJournalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListCashJournalResult::ListCashJournalResult() :
	ServiceResult()
{}

ListCashJournalResult::ListCashJournalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCashJournalResult::~ListCashJournalResult()
{}

void ListCashJournalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCashJournalListNode = value["CashJournalList"]["CashJournalListItem"];
	for (auto valueCashJournalListCashJournalListItem : allCashJournalListNode)
	{
		CashJournalListItem cashJournalListObject;
		if(!valueCashJournalListCashJournalListItem["BankName"].isNull())
			cashJournalListObject.bankName = valueCashJournalListCashJournalListItem["BankName"].asString();
		if(!valueCashJournalListCashJournalListItem["IncomeAmount"].isNull())
			cashJournalListObject.incomeAmount = valueCashJournalListCashJournalListItem["IncomeAmount"].asString();
		if(!valueCashJournalListCashJournalListItem["ExpendAmount"].isNull())
			cashJournalListObject.expendAmount = valueCashJournalListCashJournalListItem["ExpendAmount"].asString();
		cashJournalList_.push_back(cashJournalListObject);
	}

}

std::vector<ListCashJournalResult::CashJournalListItem> ListCashJournalResult::getCashJournalList()const
{
	return cashJournalList_;
}

