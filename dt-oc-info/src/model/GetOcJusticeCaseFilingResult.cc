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

#include <alibabacloud/dt-oc-info/model/GetOcJusticeCaseFilingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcJusticeCaseFilingResult::GetOcJusticeCaseFilingResult() :
	ServiceResult()
{}

GetOcJusticeCaseFilingResult::GetOcJusticeCaseFilingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcJusticeCaseFilingResult::~GetOcJusticeCaseFilingResult()
{}

void GetOcJusticeCaseFilingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CaseNum"].isNull())
			dataObject.caseNum = valueDataDataItem["CaseNum"].asString();
		if(!valueDataDataItem["Judge"].isNull())
			dataObject.judge = valueDataDataItem["Judge"].asString();
		if(!valueDataDataItem["Assistant"].isNull())
			dataObject.assistant = valueDataDataItem["Assistant"].asString();
		if(!valueDataDataItem["FilingDate"].isNull())
			dataObject.filingDate = valueDataDataItem["FilingDate"].asString();
		if(!valueDataDataItem["HearingDate"].isNull())
			dataObject.hearingDate = valueDataDataItem["HearingDate"].asString();
		if(!valueDataDataItem["EndDate"].isNull())
			dataObject.endDate = valueDataDataItem["EndDate"].asString();
		if(!valueDataDataItem["CaseStatus"].isNull())
			dataObject.caseStatus = valueDataDataItem["CaseStatus"].asString();
		if(!valueDataDataItem["Role"].isNull())
			dataObject.role = valueDataDataItem["Role"].asString();
		if(!valueDataDataItem["Party"].isNull())
			dataObject.party = valueDataDataItem["Party"].asString();
		if(!valueDataDataItem["CauseAction"].isNull())
			dataObject.causeAction = valueDataDataItem["CauseAction"].asString();
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

int GetOcJusticeCaseFilingResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcJusticeCaseFilingResult::getMessage()const
{
	return message_;
}

int GetOcJusticeCaseFilingResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcJusticeCaseFilingResult::DataItem> GetOcJusticeCaseFilingResult::getData()const
{
	return data_;
}

int GetOcJusticeCaseFilingResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcJusticeCaseFilingResult::getCode()const
{
	return code_;
}

bool GetOcJusticeCaseFilingResult::getSuccess()const
{
	return success_;
}

