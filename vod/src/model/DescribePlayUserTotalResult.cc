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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUserPlayStatisTotals = value["UserPlayStatisTotals"]["UserPlayStatisTotal"];
	for (auto value : allUserPlayStatisTotals)
	{
		UserPlayStatisTotal userPlayStatisTotalsObject;
		if(!value["Date"].isNull())
			userPlayStatisTotalsObject.date = value["Date"].asString();
		if(!value["PlayDuration"].isNull())
			userPlayStatisTotalsObject.playDuration = value["PlayDuration"].asString();
		if(!value["PlayRange"].isNull())
			userPlayStatisTotalsObject.playRange = value["PlayRange"].asString();
		auto vVNode = value["VV"];
		if(!vVNode["Android"].isNull())
			userPlayStatisTotalsObject.vV.android = vVNode["Android"].asString();
		if(!vVNode["iOS"].isNull())
			userPlayStatisTotalsObject.vV.iOS = vVNode["iOS"].asString();
		if(!vVNode["Flash"].isNull())
			userPlayStatisTotalsObject.vV.flash = vVNode["Flash"].asString();
		if(!vVNode["HTML5"].isNull())
			userPlayStatisTotalsObject.vV.hTML5 = vVNode["HTML5"].asString();
		auto uVNode = value["UV"];
		if(!uVNode["Android"].isNull())
			userPlayStatisTotalsObject.uV.android = uVNode["Android"].asString();
		if(!uVNode["iOS"].isNull())
			userPlayStatisTotalsObject.uV.iOS = uVNode["iOS"].asString();
		if(!uVNode["Flash"].isNull())
			userPlayStatisTotalsObject.uV.flash = uVNode["Flash"].asString();
		if(!uVNode["HTML5"].isNull())
			userPlayStatisTotalsObject.uV.hTML5 = uVNode["HTML5"].asString();
		userPlayStatisTotals_.push_back(userPlayStatisTotalsObject);
	}

}

std::vector<DescribePlayUserTotalResult::UserPlayStatisTotal> DescribePlayUserTotalResult::getUserPlayStatisTotals()const
{
	return userPlayStatisTotals_;
}

