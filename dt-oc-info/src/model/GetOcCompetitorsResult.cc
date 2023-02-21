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

#include <alibabacloud/dt-oc-info/model/GetOcCompetitorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcCompetitorsResult::GetOcCompetitorsResult() :
	ServiceResult()
{}

GetOcCompetitorsResult::GetOcCompetitorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcCompetitorsResult::~GetOcCompetitorsResult()
{}

void GetOcCompetitorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EntName"].isNull())
			dataObject.entName = valueDataDataItem["EntName"].asString();
		if(!valueDataDataItem["CompetitionProductName"].isNull())
			dataObject.competitionProductName = valueDataDataItem["CompetitionProductName"].asString();
		if(!valueDataDataItem["CompetitionEntName"].isNull())
			dataObject.competitionEntName = valueDataDataItem["CompetitionEntName"].asString();
		if(!valueDataDataItem["CompetitionWebsite"].isNull())
			dataObject.competitionWebsite = valueDataDataItem["CompetitionWebsite"].asString();
		if(!valueDataDataItem["CompetitionTag"].isNull())
			dataObject.competitionTag = valueDataDataItem["CompetitionTag"].asString();
		if(!valueDataDataItem["CompetitionLogoUrl"].isNull())
			dataObject.competitionLogoUrl = valueDataDataItem["CompetitionLogoUrl"].asString();
		if(!valueDataDataItem["CompetitionIntroduction"].isNull())
			dataObject.competitionIntroduction = valueDataDataItem["CompetitionIntroduction"].asString();
		if(!valueDataDataItem["CompetitionBrandIntroduction"].isNull())
			dataObject.competitionBrandIntroduction = valueDataDataItem["CompetitionBrandIntroduction"].asString();
		if(!valueDataDataItem["CompetitionEntFinTurn"].isNull())
			dataObject.competitionEntFinTurn = valueDataDataItem["CompetitionEntFinTurn"].asString();
		if(!valueDataDataItem["CompetitionEntAddress"].isNull())
			dataObject.competitionEntAddress = valueDataDataItem["CompetitionEntAddress"].asString();
		if(!valueDataDataItem["CompetitionEntEsDate"].isNull())
			dataObject.competitionEntEsDate = valueDataDataItem["CompetitionEntEsDate"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());

}

int GetOcCompetitorsResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcCompetitorsResult::getMessage()const
{
	return message_;
}

int GetOcCompetitorsResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcCompetitorsResult::DataItem> GetOcCompetitorsResult::getData()const
{
	return data_;
}

int GetOcCompetitorsResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcCompetitorsResult::getCode()const
{
	return code_;
}

bool GetOcCompetitorsResult::getSuccess()const
{
	return success_;
}

