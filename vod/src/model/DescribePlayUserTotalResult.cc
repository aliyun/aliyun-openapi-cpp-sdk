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

#include <alibabacloud/vod/model/DescribePlayUserTotalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribePlayUserTotalResult::DescribePlayUserTotalResult() :
	ServiceResult()
{}

DescribePlayUserTotalResult::DescribePlayUserTotalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayUserTotalResult::~DescribePlayUserTotalResult()
{}

void DescribePlayUserTotalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserPlayStatisTotalsNode = value["UserPlayStatisTotals"]["UserPlayStatisTotal"];
	for (auto valueUserPlayStatisTotalsUserPlayStatisTotal : allUserPlayStatisTotalsNode)
	{
		UserPlayStatisTotal userPlayStatisTotalsObject;
		if(!valueUserPlayStatisTotalsUserPlayStatisTotal["Date"].isNull())
			userPlayStatisTotalsObject.date = valueUserPlayStatisTotalsUserPlayStatisTotal["Date"].asString();
		if(!valueUserPlayStatisTotalsUserPlayStatisTotal["PlayDuration"].isNull())
			userPlayStatisTotalsObject.playDuration = valueUserPlayStatisTotalsUserPlayStatisTotal["PlayDuration"].asString();
		if(!valueUserPlayStatisTotalsUserPlayStatisTotal["PlayRange"].isNull())
			userPlayStatisTotalsObject.playRange = valueUserPlayStatisTotalsUserPlayStatisTotal["PlayRange"].asString();
		auto vVNode = value["VV"];
		if(!vVNode["Flash"].isNull())
			userPlayStatisTotalsObject.vV.flash = vVNode["Flash"].asString();
		if(!vVNode["iOS"].isNull())
			userPlayStatisTotalsObject.vV.iOS = vVNode["iOS"].asString();
		if(!vVNode["HTML5"].isNull())
			userPlayStatisTotalsObject.vV.hTML5 = vVNode["HTML5"].asString();
		if(!vVNode["Android"].isNull())
			userPlayStatisTotalsObject.vV.android = vVNode["Android"].asString();
		auto uVNode = value["UV"];
		if(!uVNode["Flash"].isNull())
			userPlayStatisTotalsObject.uV.flash = uVNode["Flash"].asString();
		if(!uVNode["iOS"].isNull())
			userPlayStatisTotalsObject.uV.iOS = uVNode["iOS"].asString();
		if(!uVNode["HTML5"].isNull())
			userPlayStatisTotalsObject.uV.hTML5 = uVNode["HTML5"].asString();
		if(!uVNode["Android"].isNull())
			userPlayStatisTotalsObject.uV.android = uVNode["Android"].asString();
		userPlayStatisTotals_.push_back(userPlayStatisTotalsObject);
	}

}

std::vector<DescribePlayUserTotalResult::UserPlayStatisTotal> DescribePlayUserTotalResult::getUserPlayStatisTotals()const
{
	return userPlayStatisTotals_;
}

