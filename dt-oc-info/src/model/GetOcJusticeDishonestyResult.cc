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

#include <alibabacloud/dt-oc-info/model/GetOcJusticeDishonestyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcJusticeDishonestyResult::GetOcJusticeDishonestyResult() :
	ServiceResult()
{}

GetOcJusticeDishonestyResult::GetOcJusticeDishonestyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcJusticeDishonestyResult::~GetOcJusticeDishonestyResult()
{}

void GetOcJusticeDishonestyResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["SocialCreditCode"].isNull())
			dataObject.socialCreditCode = valueDataDataItem["SocialCreditCode"].asString();
		if(!valueDataDataItem["LegalName"].isNull())
			dataObject.legalName = valueDataDataItem["LegalName"].asString();
		if(!valueDataDataItem["Court"].isNull())
			dataObject.court = valueDataDataItem["Court"].asString();
		if(!valueDataDataItem["Province"].isNull())
			dataObject.province = valueDataDataItem["Province"].asString();
		if(!valueDataDataItem["FromCaseNum"].isNull())
			dataObject.fromCaseNum = valueDataDataItem["FromCaseNum"].asString();
		if(!valueDataDataItem["FilingDate"].isNull())
			dataObject.filingDate = valueDataDataItem["FilingDate"].asString();
		if(!valueDataDataItem["CaseNum"].isNull())
			dataObject.caseNum = valueDataDataItem["CaseNum"].asString();
		if(!valueDataDataItem["ExecuteDepartment"].isNull())
			dataObject.executeDepartment = valueDataDataItem["ExecuteDepartment"].asString();
		if(!valueDataDataItem["FinalDuty"].isNull())
			dataObject.finalDuty = valueDataDataItem["FinalDuty"].asString();
		if(!valueDataDataItem["ExecutionStatus"].isNull())
			dataObject.executionStatus = valueDataDataItem["ExecutionStatus"].asString();
		if(!valueDataDataItem["ExecutionDesc"].isNull())
			dataObject.executionDesc = valueDataDataItem["ExecutionDesc"].asString();
		if(!valueDataDataItem["PublishDate"].isNull())
			dataObject.publishDate = valueDataDataItem["PublishDate"].asString();
		if(!valueDataDataItem["Amount"].isNull())
			dataObject.amount = valueDataDataItem["Amount"].asString();
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

int GetOcJusticeDishonestyResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcJusticeDishonestyResult::getMessage()const
{
	return message_;
}

int GetOcJusticeDishonestyResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcJusticeDishonestyResult::DataItem> GetOcJusticeDishonestyResult::getData()const
{
	return data_;
}

int GetOcJusticeDishonestyResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcJusticeDishonestyResult::getCode()const
{
	return code_;
}

bool GetOcJusticeDishonestyResult::getSuccess()const
{
	return success_;
}

