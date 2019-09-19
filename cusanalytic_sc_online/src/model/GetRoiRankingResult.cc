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

#include <alibabacloud/cusanalytic_sc_online/model/GetRoiRankingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetRoiRankingResult::GetRoiRankingResult() :
	ServiceResult()
{}

GetRoiRankingResult::GetRoiRankingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRoiRankingResult::~GetRoiRankingResult()
{}

void GetRoiRankingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoiRankingItemsNode = value["RoiRankingItems"]["RoiRankingItem"];
	for (auto valueRoiRankingItemsRoiRankingItem : allRoiRankingItemsNode)
	{
		RoiRankingItem roiRankingItemsObject;
		if(!valueRoiRankingItemsRoiRankingItem["LocationName"].isNull())
			roiRankingItemsObject.locationName = valueRoiRankingItemsRoiRankingItem["LocationName"].asString();
		if(!valueRoiRankingItemsRoiRankingItem["VisitorNum"].isNull())
			roiRankingItemsObject.visitorNum = std::stoi(valueRoiRankingItemsRoiRankingItem["VisitorNum"].asString());
		roiRankingItems_.push_back(roiRankingItemsObject);
	}
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRoiRankingResult::getMsg()const
{
	return msg_;
}

std::vector<GetRoiRankingResult::RoiRankingItem> GetRoiRankingResult::getRoiRankingItems()const
{
	return roiRankingItems_;
}

bool GetRoiRankingResult::getSuccess()const
{
	return success_;
}

