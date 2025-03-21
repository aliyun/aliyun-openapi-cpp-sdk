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

#include <alibabacloud/vod/model/GetDailyPlayRegionStatisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetDailyPlayRegionStatisResult::GetDailyPlayRegionStatisResult() :
	ServiceResult()
{}

GetDailyPlayRegionStatisResult::GetDailyPlayRegionStatisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDailyPlayRegionStatisResult::~GetDailyPlayRegionStatisResult()
{}

void GetDailyPlayRegionStatisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDailyPlayRegionStatisListNode = value["DailyPlayRegionStatisList"]["DailyPlayRegionStatisFileDO"];
	for (auto valueDailyPlayRegionStatisListDailyPlayRegionStatisFileDO : allDailyPlayRegionStatisListNode)
	{
		DailyPlayRegionStatisFileDO dailyPlayRegionStatisListObject;
		if(!valueDailyPlayRegionStatisListDailyPlayRegionStatisFileDO["Date"].isNull())
			dailyPlayRegionStatisListObject.date = valueDailyPlayRegionStatisListDailyPlayRegionStatisFileDO["Date"].asString();
		if(!valueDailyPlayRegionStatisListDailyPlayRegionStatisFileDO["FileUrl"].isNull())
			dailyPlayRegionStatisListObject.fileUrl = valueDailyPlayRegionStatisListDailyPlayRegionStatisFileDO["FileUrl"].asString();
		dailyPlayRegionStatisList_.push_back(dailyPlayRegionStatisListObject);
	}
	auto allFailDates = value["FailDates"]["failDate"];
	for (const auto &item : allFailDates)
		failDates_.push_back(item.asString());
	auto allEmptyDates = value["EmptyDates"]["emptyDate"];
	for (const auto &item : allEmptyDates)
		emptyDates_.push_back(item.asString());

}

std::vector<std::string> GetDailyPlayRegionStatisResult::getEmptyDates()const
{
	return emptyDates_;
}

std::vector<GetDailyPlayRegionStatisResult::DailyPlayRegionStatisFileDO> GetDailyPlayRegionStatisResult::getDailyPlayRegionStatisList()const
{
	return dailyPlayRegionStatisList_;
}

std::vector<std::string> GetDailyPlayRegionStatisResult::getFailDates()const
{
	return failDates_;
}

