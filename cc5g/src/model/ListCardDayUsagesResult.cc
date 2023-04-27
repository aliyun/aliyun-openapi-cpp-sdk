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

#include <alibabacloud/cc5g/model/ListCardDayUsagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListCardDayUsagesResult::ListCardDayUsagesResult() :
	ServiceResult()
{}

ListCardDayUsagesResult::ListCardDayUsagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCardDayUsagesResult::~ListCardDayUsagesResult()
{}

void ListCardDayUsagesResult::parse(const std::string &payload)
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
		auto allUsageDataMonthsNode = valueCardsCard["UsageDataMonths"]["UsageDataMonth"];
		for (auto valueCardsCardUsageDataMonthsUsageDataMonth : allUsageDataMonthsNode)
		{
			Card::UsageDataMonth usageDataMonthsObject;
			if(!valueCardsCardUsageDataMonthsUsageDataMonth["UsageDataMonth"].isNull())
				usageDataMonthsObject.usageDataMonth = valueCardsCardUsageDataMonthsUsageDataMonth["UsageDataMonth"].asString();
			if(!valueCardsCardUsageDataMonthsUsageDataMonth["Month"].isNull())
				usageDataMonthsObject.month = valueCardsCardUsageDataMonthsUsageDataMonth["Month"].asString();
			auto allCardDayUsagesNode = valueCardsCardUsageDataMonthsUsageDataMonth["CardDayUsages"]["CardDayUsage"];
			for (auto valueCardsCardUsageDataMonthsUsageDataMonthCardDayUsagesCardDayUsage : allCardDayUsagesNode)
			{
				Card::UsageDataMonth::CardDayUsage cardDayUsagesObject;
				if(!valueCardsCardUsageDataMonthsUsageDataMonthCardDayUsagesCardDayUsage["Day"].isNull())
					cardDayUsagesObject.day = valueCardsCardUsageDataMonthsUsageDataMonthCardDayUsagesCardDayUsage["Day"].asString();
				if(!valueCardsCardUsageDataMonthsUsageDataMonthCardDayUsagesCardDayUsage["UsageData"].isNull())
					cardDayUsagesObject.usageData = valueCardsCardUsageDataMonthsUsageDataMonthCardDayUsagesCardDayUsage["UsageData"].asString();
				usageDataMonthsObject.cardDayUsages.push_back(cardDayUsagesObject);
			}
			cardsObject.usageDataMonths.push_back(usageDataMonthsObject);
		}
		cards_.push_back(cardsObject);
	}

}

std::vector<ListCardDayUsagesResult::Card> ListCardDayUsagesResult::getCards()const
{
	return cards_;
}

