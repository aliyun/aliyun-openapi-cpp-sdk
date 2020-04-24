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

#include <alibabacloud/ledgerdb/model/ListJournalsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

ListJournalsResult::ListJournalsResult() :
	ServiceResult()
{}

ListJournalsResult::ListJournalsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJournalsResult::~ListJournalsResult()
{}

void ListJournalsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJournalsNode = value["Journals"]["Journal"];
	for (auto valueJournalsJournal : allJournalsNode)
	{
		Journal journalsObject;
		if(!valueJournalsJournal["JournalId"].isNull())
			journalsObject.journalId = valueJournalsJournal["JournalId"].asString();
		if(!valueJournalsJournal["LedgerId"].isNull())
			journalsObject.ledgerId = valueJournalsJournal["LedgerId"].asString();
		if(!valueJournalsJournal["PayloadType"].isNull())
			journalsObject.payloadType = valueJournalsJournal["PayloadType"].asString();
		if(!valueJournalsJournal["PayloadJsonString"].isNull())
			journalsObject.payloadJsonString = valueJournalsJournal["PayloadJsonString"].asString();
		if(!valueJournalsJournal["MemberId"].isNull())
			journalsObject.memberId = valueJournalsJournal["MemberId"].asString();
		if(!valueJournalsJournal["ClientId"].isNull())
			journalsObject.clientId = valueJournalsJournal["ClientId"].asString();
		if(!valueJournalsJournal["JournalHash"].isNull())
			journalsObject.journalHash = valueJournalsJournal["JournalHash"].asString();
		if(!valueJournalsJournal["Timestamp"].isNull())
			journalsObject.timestamp = std::stol(valueJournalsJournal["Timestamp"].asString());
		auto allClues = value["Clues"]["Clue"];
		for (auto value : allClues)
			journalsObject.clues.push_back(value.asString());
		journals_.push_back(journalsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListJournalsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListJournalsResult::Journal> ListJournalsResult::getJournals()const
{
	return journals_;
}

int ListJournalsResult::getMaxResults()const
{
	return maxResults_;
}

