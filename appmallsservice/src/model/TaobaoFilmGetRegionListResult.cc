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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetRegionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetRegionListResult::TaobaoFilmGetRegionListResult() :
	ServiceResult()
{}

TaobaoFilmGetRegionListResult::TaobaoFilmGetRegionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetRegionListResult::~TaobaoFilmGetRegionListResult()
{}

void TaobaoFilmGetRegionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["RegionsItem"];
	for (auto valueRegionsRegionsItem : allRegionsNode)
	{
		RegionsItem regionsObject;
		if(!valueRegionsRegionsItem["CityCode"].isNull())
			regionsObject.cityCode = std::stol(valueRegionsRegionsItem["CityCode"].asString());
		if(!valueRegionsRegionsItem["Id"].isNull())
			regionsObject.id = std::stol(valueRegionsRegionsItem["Id"].asString());
		if(!valueRegionsRegionsItem["ParentId"].isNull())
			regionsObject.parentId = std::stol(valueRegionsRegionsItem["ParentId"].asString());
		if(!valueRegionsRegionsItem["PinYin"].isNull())
			regionsObject.pinYin = valueRegionsRegionsItem["PinYin"].asString();
		if(!valueRegionsRegionsItem["RegionName"].isNull())
			regionsObject.regionName = valueRegionsRegionsItem["RegionName"].asString();
		regions_.push_back(regionsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["SubCode"].isNull())
		subCode_ = value["SubCode"].asString();
	if(!value["SubMsg"].isNull())
		subMsg_ = value["SubMsg"].asString();
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();

}

std::string TaobaoFilmGetRegionListResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmGetRegionListResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmGetRegionListResult::getLogsId()const
{
	return logsId_;
}

std::vector<TaobaoFilmGetRegionListResult::RegionsItem> TaobaoFilmGetRegionListResult::getRegions()const
{
	return regions_;
}

std::string TaobaoFilmGetRegionListResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmGetRegionListResult::getSubCode()const
{
	return subCode_;
}

