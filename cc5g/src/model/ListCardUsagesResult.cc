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

#include <alibabacloud/cc5g/model/ListCardUsagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListCardUsagesResult::ListCardUsagesResult() :
	ServiceResult()
{}

ListCardUsagesResult::ListCardUsagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCardUsagesResult::~ListCardUsagesResult()
{}

void ListCardUsagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCardsNode = value["Cards"]["Card"];
	for (auto valueCardsCard : allCardsNode)
	{
		Card cardsObject;
		if(!valueCardsCard["Iccid"].isNull())
			cardsObject.iccid = valueCardsCard["Iccid"].asString();
		if(!valueCardsCard["UsageDataMonth"].isNull())
			cardsObject.usageDataMonth = std::stol(valueCardsCard["UsageDataMonth"].asString());
		cards_.push_back(cardsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListCardUsagesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListCardUsagesResult::Card> ListCardUsagesResult::getCards()const
{
	return cards_;
}

