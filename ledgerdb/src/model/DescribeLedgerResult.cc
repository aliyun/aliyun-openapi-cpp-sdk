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

#include <alibabacloud/ledgerdb/model/DescribeLedgerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

DescribeLedgerResult::DescribeLedgerResult() :
	ServiceResult()
{}

DescribeLedgerResult::DescribeLedgerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLedgerResult::~DescribeLedgerResult()
{}

void DescribeLedgerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ledgerNode = value["Ledger"];
	if(!ledgerNode["LedgerId"].isNull())
		ledger_.ledgerId = ledgerNode["LedgerId"].asString();
	if(!ledgerNode["LedgerName"].isNull())
		ledger_.ledgerName = ledgerNode["LedgerName"].asString();
	if(!ledgerNode["LedgerDescription"].isNull())
		ledger_.ledgerDescription = ledgerNode["LedgerDescription"].asString();
	if(!ledgerNode["LedgerType"].isNull())
		ledger_.ledgerType = ledgerNode["LedgerType"].asString();
	if(!ledgerNode["OwnerAliUid"].isNull())
		ledger_.ownerAliUid = ledgerNode["OwnerAliUid"].asString();
	if(!ledgerNode["RegionId"].isNull())
		ledger_.regionId = ledgerNode["RegionId"].asString();
	if(!ledgerNode["ZoneId"].isNull())
		ledger_.zoneId = ledgerNode["ZoneId"].asString();
	if(!ledgerNode["CreateTime"].isNull())
		ledger_.createTime = ledgerNode["CreateTime"].asString();
	if(!ledgerNode["UpdateTime"].isNull())
		ledger_.updateTime = ledgerNode["UpdateTime"].asString();
	if(!ledgerNode["LedgerStatus"].isNull())
		ledger_.ledgerStatus = ledgerNode["LedgerStatus"].asString();
	if(!ledgerNode["JournalCount"].isNull())
		ledger_.journalCount = std::stol(ledgerNode["JournalCount"].asString());
	if(!ledgerNode["MemberCount"].isNull())
		ledger_.memberCount = std::stol(ledgerNode["MemberCount"].asString());
	if(!ledgerNode["TimeAnchorCount"].isNull())
		ledger_.timeAnchorCount = std::stol(ledgerNode["TimeAnchorCount"].asString());
	auto lastTimeAnchorNode = ledgerNode["LastTimeAnchor"];
	if(!lastTimeAnchorNode["JournalId"].isNull())
		ledger_.lastTimeAnchor.journalId = lastTimeAnchorNode["JournalId"].asString();
	if(!lastTimeAnchorNode["LedgerDigest"].isNull())
		ledger_.lastTimeAnchor.ledgerDigest = lastTimeAnchorNode["LedgerDigest"].asString();
	if(!lastTimeAnchorNode["LedgerDigestType"].isNull())
		ledger_.lastTimeAnchor.ledgerDigestType = lastTimeAnchorNode["LedgerDigestType"].asString();
	if(!lastTimeAnchorNode["LedgerVersion"].isNull())
		ledger_.lastTimeAnchor.ledgerVersion = lastTimeAnchorNode["LedgerVersion"].asString();
	if(!lastTimeAnchorNode["Proof"].isNull())
		ledger_.lastTimeAnchor.proof = lastTimeAnchorNode["Proof"].asString();
	if(!lastTimeAnchorNode["TimeStamp"].isNull())
		ledger_.lastTimeAnchor.timeStamp = lastTimeAnchorNode["TimeStamp"].asString();

}

DescribeLedgerResult::Ledger DescribeLedgerResult::getLedger()const
{
	return ledger_;
}

