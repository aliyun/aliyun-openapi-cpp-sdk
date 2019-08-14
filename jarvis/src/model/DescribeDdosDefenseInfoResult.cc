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

#include <alibabacloud/jarvis/model/DescribeDdosDefenseInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeDdosDefenseInfoResult::DescribeDdosDefenseInfoResult() :
	ServiceResult()
{}

DescribeDdosDefenseInfoResult::DescribeDdosDefenseInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDdosDefenseInfoResult::~DescribeDdosDefenseInfoResult()
{}

void DescribeDdosDefenseInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDdosDefenseThreshold = value["DdosDefenseThreshold"]["DdosDefenseThresholdItem"];
	for (auto value : allDdosDefenseThreshold)
	{
		DdosDefenseThresholdItem ddosDefenseThresholdObject;
		if(!value["RegionId"].isNull())
			ddosDefenseThresholdObject.regionId = value["RegionId"].asString();
		if(!value["CurrThreshold"].isNull())
			ddosDefenseThresholdObject.currThreshold = std::stoi(value["CurrThreshold"].asString());
		if(!value["RecommendThreshold"].isNull())
			ddosDefenseThresholdObject.recommendThreshold = std::stoi(value["RecommendThreshold"].asString());
		ddosDefenseThreshold_.push_back(ddosDefenseThresholdObject);
	}
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();
	if(!value["BlackTimes"].isNull())
		blackTimes_ = std::stoi(value["BlackTimes"].asString());
	if(!value["Duration"].isNull())
		duration_ = std::stoi(value["Duration"].asString());
	if(!value["BgpPkgState"].isNull())
		bgpPkgState_ = value["BgpPkgState"].asString();

}

std::vector<DescribeDdosDefenseInfoResult::DdosDefenseThresholdItem> DescribeDdosDefenseInfoResult::getDdosDefenseThreshold()const
{
	return ddosDefenseThreshold_;
}

std::string DescribeDdosDefenseInfoResult::getBgpPkgState()const
{
	return bgpPkgState_;
}

int DescribeDdosDefenseInfoResult::getBlackTimes()const
{
	return blackTimes_;
}

int DescribeDdosDefenseInfoResult::getDuration()const
{
	return duration_;
}

std::string DescribeDdosDefenseInfoResult::getModule()const
{
	return module_;
}

