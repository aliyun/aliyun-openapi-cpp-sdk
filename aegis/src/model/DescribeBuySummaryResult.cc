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

#include <alibabacloud/aegis/model/DescribeBuySummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeBuySummaryResult::DescribeBuySummaryResult() :
	ServiceResult()
{}

DescribeBuySummaryResult::DescribeBuySummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBuySummaryResult::~DescribeBuySummaryResult()
{}

void DescribeBuySummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto buySummaryNode = value["BuySummary"];
	if(!buySummaryNode["ExpireDateTimestamp"].isNull())
		buySummary_.expireDateTimestamp = std::stol(buySummaryNode["ExpireDateTimestamp"].asString());
	if(!buySummaryNode["PurchaseDate"].isNull())
		buySummary_.purchaseDate = std::stol(buySummaryNode["PurchaseDate"].asString());
	if(!buySummaryNode["BuyVersion"].isNull())
		buySummary_.buyVersion = buySummaryNode["BuyVersion"].asString();
	if(!buySummaryNode["SafePointSurplusDays"].isNull())
		buySummary_.safePointSurplusDays = std::stoi(buySummaryNode["SafePointSurplusDays"].asString());
	if(!buySummaryNode["SafePointdailyCost"].isNull())
		buySummary_.safePointdailyCost = std::stoi(buySummaryNode["SafePointdailyCost"].asString());
	if(!buySummaryNode["Capacity"].isNull())
		buySummary_.capacity = std::stoi(buySummaryNode["Capacity"].asString());
	if(!buySummaryNode["TotalMachineNum"].isNull())
		buySummary_.totalMachineNum = std::stoi(buySummaryNode["TotalMachineNum"].asString());
	if(!buySummaryNode["CanApplyTrial"].isNull())
		buySummary_.canApplyTrial = buySummaryNode["CanApplyTrial"].asString() == "true";
	if(!buySummaryNode["InstanceId"].isNull())
		buySummary_.instanceId = buySummaryNode["InstanceId"].asString();
	if(!buySummaryNode["UseCapacity"].isNull())
		buySummary_.useCapacity = std::stoi(buySummaryNode["UseCapacity"].asString());
	if(!buySummaryNode["CanAccessHidden"].isNull())
		buySummary_.canAccessHidden = buySummaryNode["CanAccessHidden"].asString() == "true";
	if(!buySummaryNode["BuyStatus"].isNull())
		buySummary_.buyStatus = buySummaryNode["BuyStatus"].asString() == "true";
	if(!buySummaryNode["BuyType"].isNull())
		buySummary_.buyType = buySummaryNode["BuyType"].asString();
	if(!buySummaryNode["ExpireDate"].isNull())
		buySummary_.expireDate = std::stol(buySummaryNode["ExpireDate"].asString());
	if(!buySummaryNode["SafePointCapacity"].isNull())
		buySummary_.safePointCapacity = std::stoi(buySummaryNode["SafePointCapacity"].asString());
	if(!buySummaryNode["NeedFeedBack"].isNull())
		buySummary_.needFeedBack = buySummaryNode["NeedFeedBack"].asString() == "true";
	if(!buySummaryNode["SafePointBuyVersion"].isNull())
		buySummary_.safePointBuyVersion = buySummaryNode["SafePointBuyVersion"].asString();
	if(!buySummaryNode["OriginalVersion"].isNull())
		buySummary_.originalVersion = buySummaryNode["OriginalVersion"].asString();
	if(!buySummaryNode["OriginalBuyType"].isNull())
		buySummary_.originalBuyType = buySummaryNode["OriginalBuyType"].asString();
	if(!buySummaryNode["SafePointExpireDate"].isNull())
		buySummary_.safePointExpireDate = std::stol(buySummaryNode["SafePointExpireDate"].asString());
	if(!buySummaryNode["SpecialCount"].isNull())
		buySummary_.specialCount = std::stoi(buySummaryNode["SpecialCount"].asString());

}

DescribeBuySummaryResult::BuySummary DescribeBuySummaryResult::getBuySummary()const
{
	return buySummary_;
}

