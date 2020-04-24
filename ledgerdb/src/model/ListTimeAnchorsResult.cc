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

#include <alibabacloud/ledgerdb/model/ListTimeAnchorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

ListTimeAnchorsResult::ListTimeAnchorsResult() :
	ServiceResult()
{}

ListTimeAnchorsResult::ListTimeAnchorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTimeAnchorsResult::~ListTimeAnchorsResult()
{}

void ListTimeAnchorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTimeAnchorsNode = value["TimeAnchors"]["TimeAnchor"];
	for (auto valueTimeAnchorsTimeAnchor : allTimeAnchorsNode)
	{
		TimeAnchor timeAnchorsObject;
		if(!valueTimeAnchorsTimeAnchor["JournalId"].isNull())
			timeAnchorsObject.journalId = std::stol(valueTimeAnchorsTimeAnchor["JournalId"].asString());
		if(!valueTimeAnchorsTimeAnchor["LedgerVersion"].isNull())
			timeAnchorsObject.ledgerVersion = std::stol(valueTimeAnchorsTimeAnchor["LedgerVersion"].asString());
		if(!valueTimeAnchorsTimeAnchor["LedgerDigest"].isNull())
			timeAnchorsObject.ledgerDigest = valueTimeAnchorsTimeAnchor["LedgerDigest"].asString();
		if(!valueTimeAnchorsTimeAnchor["LedgerDigestType"].isNull())
			timeAnchorsObject.ledgerDigestType = valueTimeAnchorsTimeAnchor["LedgerDigestType"].asString();
		if(!valueTimeAnchorsTimeAnchor["TimeStamp"].isNull())
			timeAnchorsObject.timeStamp = std::stol(valueTimeAnchorsTimeAnchor["TimeStamp"].asString());
		if(!valueTimeAnchorsTimeAnchor["Proof"].isNull())
			timeAnchorsObject.proof = valueTimeAnchorsTimeAnchor["Proof"].asString();
		timeAnchors_.push_back(timeAnchorsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListTimeAnchorsResult::TimeAnchor> ListTimeAnchorsResult::getTimeAnchors()const
{
	return timeAnchors_;
}

std::string ListTimeAnchorsResult::getNextToken()const
{
	return nextToken_;
}

int ListTimeAnchorsResult::getMaxResults()const
{
	return maxResults_;
}

