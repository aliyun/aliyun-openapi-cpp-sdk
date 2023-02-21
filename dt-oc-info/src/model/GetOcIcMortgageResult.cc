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

#include <alibabacloud/dt-oc-info/model/GetOcIcMortgageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIcMortgageResult::GetOcIcMortgageResult() :
	ServiceResult()
{}

GetOcIcMortgageResult::GetOcIcMortgageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIcMortgageResult::~GetOcIcMortgageResult()
{}

void GetOcIcMortgageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["OnecompId"].isNull())
			dataObject.onecompId = valueDataDataItem["OnecompId"].asString();
		if(!valueDataDataItem["Number"].isNull())
			dataObject.number = valueDataDataItem["Number"].asString();
		if(!valueDataDataItem["RegDate"].isNull())
			dataObject.regDate = valueDataDataItem["RegDate"].asString();
		if(!valueDataDataItem["Department"].isNull())
			dataObject.department = valueDataDataItem["Department"].asString();
		if(!valueDataDataItem["MortgageesName"].isNull())
			dataObject.mortgageesName = valueDataDataItem["MortgageesName"].asString();
		if(!valueDataDataItem["IdentifyType"].isNull())
			dataObject.identifyType = valueDataDataItem["IdentifyType"].asString();
		if(!valueDataDataItem["IdentifyNo"].isNull())
			dataObject.identifyNo = valueDataDataItem["IdentifyNo"].asString();
		if(!valueDataDataItem["DebitType"].isNull())
			dataObject.debitType = valueDataDataItem["DebitType"].asString();
		if(!valueDataDataItem["DebitAmount"].isNull())
			dataObject.debitAmount = valueDataDataItem["DebitAmount"].asString();
		if(!valueDataDataItem["DebitPeriod"].isNull())
			dataObject.debitPeriod = valueDataDataItem["DebitPeriod"].asString();
		if(!valueDataDataItem["DebitScope"].isNull())
			dataObject.debitScope = valueDataDataItem["DebitScope"].asString();
		if(!valueDataDataItem["Guarantees"].isNull())
			dataObject.guarantees = valueDataDataItem["Guarantees"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["PublicDate"].isNull())
			dataObject.publicDate = valueDataDataItem["PublicDate"].asString();
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

int GetOcIcMortgageResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIcMortgageResult::getMessage()const
{
	return message_;
}

int GetOcIcMortgageResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIcMortgageResult::DataItem> GetOcIcMortgageResult::getData()const
{
	return data_;
}

int GetOcIcMortgageResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIcMortgageResult::getCode()const
{
	return code_;
}

bool GetOcIcMortgageResult::getSuccess()const
{
	return success_;
}

