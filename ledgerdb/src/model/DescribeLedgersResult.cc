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

#include <alibabacloud/ledgerdb/model/DescribeLedgersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

DescribeLedgersResult::DescribeLedgersResult() :
	ServiceResult()
{}

DescribeLedgersResult::DescribeLedgersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLedgersResult::~DescribeLedgersResult()
{}

void DescribeLedgersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLedgersNode = value["Ledgers"]["Ledger"];
	for (auto valueLedgersLedger : allLedgersNode)
	{
		Ledger ledgersObject;
		if(!valueLedgersLedger["LedgerId"].isNull())
			ledgersObject.ledgerId = valueLedgersLedger["LedgerId"].asString();
		if(!valueLedgersLedger["LedgerName"].isNull())
			ledgersObject.ledgerName = valueLedgersLedger["LedgerName"].asString();
		if(!valueLedgersLedger["LedgerDescription"].isNull())
			ledgersObject.ledgerDescription = valueLedgersLedger["LedgerDescription"].asString();
		if(!valueLedgersLedger["LedgerType"].isNull())
			ledgersObject.ledgerType = valueLedgersLedger["LedgerType"].asString();
		if(!valueLedgersLedger["OwnerAliUid"].isNull())
			ledgersObject.ownerAliUid = valueLedgersLedger["OwnerAliUid"].asString();
		if(!valueLedgersLedger["RegionId"].isNull())
			ledgersObject.regionId = valueLedgersLedger["RegionId"].asString();
		if(!valueLedgersLedger["ZoneId"].isNull())
			ledgersObject.zoneId = valueLedgersLedger["ZoneId"].asString();
		if(!valueLedgersLedger["CreateTime"].isNull())
			ledgersObject.createTime = valueLedgersLedger["CreateTime"].asString();
		if(!valueLedgersLedger["UpdateTime"].isNull())
			ledgersObject.updateTime = valueLedgersLedger["UpdateTime"].asString();
		if(!valueLedgersLedger["LedgerStatus"].isNull())
			ledgersObject.ledgerStatus = valueLedgersLedger["LedgerStatus"].asString();
		if(!valueLedgersLedger["JournalCount"].isNull())
			ledgersObject.journalCount = std::stol(valueLedgersLedger["JournalCount"].asString());
		if(!valueLedgersLedger["MemberCount"].isNull())
			ledgersObject.memberCount = std::stol(valueLedgersLedger["MemberCount"].asString());
		if(!valueLedgersLedger["TimeAnchorCount"].isNull())
			ledgersObject.timeAnchorCount = std::stol(valueLedgersLedger["TimeAnchorCount"].asString());
		auto lastTimeAnchorNode = value["LastTimeAnchor"];
		if(!lastTimeAnchorNode["JournalId"].isNull())
			ledgersObject.lastTimeAnchor.journalId = lastTimeAnchorNode["JournalId"].asString();
		if(!lastTimeAnchorNode["LedgerDigest"].isNull())
			ledgersObject.lastTimeAnchor.ledgerDigest = lastTimeAnchorNode["LedgerDigest"].asString();
		if(!lastTimeAnchorNode["LedgerDigestType"].isNull())
			ledgersObject.lastTimeAnchor.ledgerDigestType = lastTimeAnchorNode["LedgerDigestType"].asString();
		if(!lastTimeAnchorNode["LedgerVersion"].isNull())
			ledgersObject.lastTimeAnchor.ledgerVersion = lastTimeAnchorNode["LedgerVersion"].asString();
		if(!lastTimeAnchorNode["Proof"].isNull())
			ledgersObject.lastTimeAnchor.proof = lastTimeAnchorNode["Proof"].asString();
		if(!lastTimeAnchorNode["TimeStamp"].isNull())
			ledgersObject.lastTimeAnchor.timeStamp = lastTimeAnchorNode["TimeStamp"].asString();
		ledgers_.push_back(ledgersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string DescribeLedgersResult::getNextToken()const
{
	return nextToken_;
}

int DescribeLedgersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeLedgersResult::Ledger> DescribeLedgersResult::getLedgers()const
{
	return ledgers_;
}

