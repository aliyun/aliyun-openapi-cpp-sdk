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

#include <alibabacloud/dt-oc-info/model/GetOcJusticeJudgementDocResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcJusticeJudgementDocResult::GetOcJusticeJudgementDocResult() :
	ServiceResult()
{}

GetOcJusticeJudgementDocResult::GetOcJusticeJudgementDocResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcJusticeJudgementDocResult::~GetOcJusticeJudgementDocResult()
{}

void GetOcJusticeJudgementDocResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Title"].isNull())
			dataObject.title = valueDataDataItem["Title"].asString();
		if(!valueDataDataItem["CaseNum"].isNull())
			dataObject.caseNum = valueDataDataItem["CaseNum"].asString();
		if(!valueDataDataItem["Role"].isNull())
			dataObject.role = valueDataDataItem["Role"].asString();
		if(!valueDataDataItem["JudgeResult"].isNull())
			dataObject.judgeResult = valueDataDataItem["JudgeResult"].asString();
		if(!valueDataDataItem["JudgeDate"].isNull())
			dataObject.judgeDate = valueDataDataItem["JudgeDate"].asString();
		if(!valueDataDataItem["PublicDate"].isNull())
			dataObject.publicDate = valueDataDataItem["PublicDate"].asString();
		if(!valueDataDataItem["CauseAction"].isNull())
			dataObject.causeAction = valueDataDataItem["CauseAction"].asString();
		if(!valueDataDataItem["CaseType"].isNull())
			dataObject.caseType = valueDataDataItem["CaseType"].asString();
		if(!valueDataDataItem["Court"].isNull())
			dataObject.court = valueDataDataItem["Court"].asString();
		if(!valueDataDataItem["SubAmount"].isNull())
			dataObject.subAmount = valueDataDataItem["SubAmount"].asString();
		if(!valueDataDataItem["CaseFlow"].isNull())
			dataObject.caseFlow = valueDataDataItem["CaseFlow"].asString();
		if(!valueDataDataItem["Party"].isNull())
			dataObject.party = valueDataDataItem["Party"].asString();
		if(!valueDataDataItem["Plaintiff"].isNull())
			dataObject.plaintiff = valueDataDataItem["Plaintiff"].asString();
		if(!valueDataDataItem["Defendant"].isNull())
			dataObject.defendant = valueDataDataItem["Defendant"].asString();
		if(!valueDataDataItem["JudgeType"].isNull())
			dataObject.judgeType = valueDataDataItem["JudgeType"].asString();
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

int GetOcJusticeJudgementDocResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcJusticeJudgementDocResult::getMessage()const
{
	return message_;
}

int GetOcJusticeJudgementDocResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcJusticeJudgementDocResult::DataItem> GetOcJusticeJudgementDocResult::getData()const
{
	return data_;
}

int GetOcJusticeJudgementDocResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcJusticeJudgementDocResult::getCode()const
{
	return code_;
}

bool GetOcJusticeJudgementDocResult::getSuccess()const
{
	return success_;
}

