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

#include <alibabacloud/cusanalytic_sc_online/model/GetStayDistributionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetStayDistributionResult::GetStayDistributionResult() :
	ServiceResult()
{}

GetStayDistributionResult::GetStayDistributionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStayDistributionResult::~GetStayDistributionResult()
{}

void GetStayDistributionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStayDistributionItemsNode = value["StayDistributionItems"]["StayDistributionItem"];
	for (auto valueStayDistributionItemsStayDistributionItem : allStayDistributionItemsNode)
	{
		StayDistributionItem stayDistributionItemsObject;
		if(!valueStayDistributionItemsStayDistributionItem["EndTs"].isNull())
			stayDistributionItemsObject.endTs = std::stol(valueStayDistributionItemsStayDistributionItem["EndTs"].asString());
		if(!valueStayDistributionItemsStayDistributionItem["Count"].isNull())
			stayDistributionItemsObject.count = std::stoi(valueStayDistributionItemsStayDistributionItem["Count"].asString());
		if(!valueStayDistributionItemsStayDistributionItem["StartTs"].isNull())
			stayDistributionItemsObject.startTs = std::stol(valueStayDistributionItemsStayDistributionItem["StartTs"].asString());
		stayDistributionItems_.push_back(stayDistributionItemsObject);
	}
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["LocationId"].isNull())
		locationId_ = std::stol(value["LocationId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetStayDistributionResult::StayDistributionItem> GetStayDistributionResult::getStayDistributionItems()const
{
	return stayDistributionItems_;
}

long GetStayDistributionResult::getStoreId()const
{
	return storeId_;
}

std::string GetStayDistributionResult::getErrorMsg()const
{
	return errorMsg_;
}

long GetStayDistributionResult::getLocationId()const
{
	return locationId_;
}

bool GetStayDistributionResult::getSuccess()const
{
	return success_;
}

