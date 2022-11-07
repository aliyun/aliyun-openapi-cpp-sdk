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

#include <alibabacloud/cc5g/model/ListCardsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListCardsResult::ListCardsResult() :
	ServiceResult()
{}

ListCardsResult::ListCardsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCardsResult::~ListCardsResult()
{}

void ListCardsResult::parse(const std::string &payload)
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
		if(!valueCardsCard["NetType"].isNull())
			cardsObject.netType = valueCardsCard["NetType"].asString();
		if(!valueCardsCard["APN"].isNull())
			cardsObject.aPN = valueCardsCard["APN"].asString();
		if(!valueCardsCard["ISP"].isNull())
			cardsObject.iSP = valueCardsCard["ISP"].asString();
		if(!valueCardsCard["IpAddress"].isNull())
			cardsObject.ipAddress = valueCardsCard["IpAddress"].asString();
		if(!valueCardsCard["Imsi"].isNull())
			cardsObject.imsi = valueCardsCard["Imsi"].asString();
		if(!valueCardsCard["Imei"].isNull())
			cardsObject.imei = valueCardsCard["Imei"].asString();
		if(!valueCardsCard["Lock"].isNull())
			cardsObject.lock = valueCardsCard["Lock"].asString() == "true";
		if(!valueCardsCard["Spec"].isNull())
			cardsObject.spec = valueCardsCard["Spec"].asString();
		if(!valueCardsCard["Status"].isNull())
			cardsObject.status = valueCardsCard["Status"].asString();
		if(!valueCardsCard["Description"].isNull())
			cardsObject.description = valueCardsCard["Description"].asString();
		if(!valueCardsCard["Name"].isNull())
			cardsObject.name = valueCardsCard["Name"].asString();
		if(!valueCardsCard["UsageDataMonth"].isNull())
			cardsObject.usageDataMonth = std::stol(valueCardsCard["UsageDataMonth"].asString());
		if(!valueCardsCard["OrderId"].isNull())
			cardsObject.orderId = valueCardsCard["OrderId"].asString();
		if(!valueCardsCard["ActivatedTime"].isNull())
			cardsObject.activatedTime = valueCardsCard["ActivatedTime"].asString();
		if(!valueCardsCard["BusinessStatus"].isNull())
			cardsObject.businessStatus = valueCardsCard["BusinessStatus"].asString();
		if(!valueCardsCard["Msisdn"].isNull())
			cardsObject.msisdn = valueCardsCard["Msisdn"].asString();
		if(!valueCardsCard["UsageDataTotal"].isNull())
			cardsObject.usageDataTotal = valueCardsCard["UsageDataTotal"].asString();
		cards_.push_back(cardsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListCardsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListCardsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListCardsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListCardsResult::Card> ListCardsResult::getCards()const
{
	return cards_;
}

