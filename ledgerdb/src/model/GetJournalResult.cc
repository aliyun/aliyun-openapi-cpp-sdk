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

#include <alibabacloud/ledgerdb/model/GetJournalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

GetJournalResult::GetJournalResult() :
	ServiceResult()
{}

GetJournalResult::GetJournalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJournalResult::~GetJournalResult()
{}

void GetJournalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto journalNode = value["Journal"];
	if(!journalNode["JournalId"].isNull())
		journal_.journalId = journalNode["JournalId"].asString();
	if(!journalNode["LedgerId"].isNull())
		journal_.ledgerId = journalNode["LedgerId"].asString();
	if(!journalNode["PayloadType"].isNull())
		journal_.payloadType = journalNode["PayloadType"].asString();
	if(!journalNode["PayloadJsonString"].isNull())
		journal_.payloadJsonString = journalNode["PayloadJsonString"].asString();
	if(!journalNode["MemberId"].isNull())
		journal_.memberId = journalNode["MemberId"].asString();
	if(!journalNode["ClientId"].isNull())
		journal_.clientId = journalNode["ClientId"].asString();
	if(!journalNode["JournalHash"].isNull())
		journal_.journalHash = journalNode["JournalHash"].asString();
	if(!journalNode["Timestamp"].isNull())
		journal_.timestamp = std::stol(journalNode["Timestamp"].asString());
		auto allClues = journalNode["Clues"]["Clue"];
		for (auto value : allClues)
			journal_.clues.push_back(value.asString());

}

GetJournalResult::Journal GetJournalResult::getJournal()const
{
	return journal_;
}

