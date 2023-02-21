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

#include <alibabacloud/dt-oc-info/model/GetOcOperationCustomsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcOperationCustomsResult::GetOcOperationCustomsResult() :
	ServiceResult()
{}

GetOcOperationCustomsResult::GetOcOperationCustomsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcOperationCustomsResult::~GetOcOperationCustomsResult()
{}

void GetOcOperationCustomsResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["RegDate"].isNull())
			dataObject.regDate = valueDataDataItem["RegDate"].asString();
		if(!valueDataDataItem["CustomsNum"].isNull())
			dataObject.customsNum = valueDataDataItem["CustomsNum"].asString();
		if(!valueDataDataItem["CustomsReg"].isNull())
			dataObject.customsReg = valueDataDataItem["CustomsReg"].asString();
		if(!valueDataDataItem["BusinessCate"].isNull())
			dataObject.businessCate = valueDataDataItem["BusinessCate"].asString();
		if(!valueDataDataItem["AdminRegionName"].isNull())
			dataObject.adminRegionName = valueDataDataItem["AdminRegionName"].asString();
		if(!valueDataDataItem["EcoRegionName"].isNull())
			dataObject.ecoRegionName = valueDataDataItem["EcoRegionName"].asString();
		if(!valueDataDataItem["SpecialArea"].isNull())
			dataObject.specialArea = valueDataDataItem["SpecialArea"].asString();
		if(!valueDataDataItem["IndustryType"].isNull())
			dataObject.industryType = valueDataDataItem["IndustryType"].asString();
		if(!valueDataDataItem["ValidDate"].isNull())
			dataObject.validDate = valueDataDataItem["ValidDate"].asString();
		if(!valueDataDataItem["ElectType"].isNull())
			dataObject.electType = valueDataDataItem["ElectType"].asString();
		if(!valueDataDataItem["CancelFlag"].isNull())
			dataObject.cancelFlag = valueDataDataItem["CancelFlag"].asString();
		if(!valueDataDataItem["AnnualReport"].isNull())
			dataObject.annualReport = valueDataDataItem["AnnualReport"].asString();
		if(!valueDataDataItem["CreditLevelsNew"].isNull())
			dataObject.creditLevelsNew = valueDataDataItem["CreditLevelsNew"].asString();
		if(!valueDataDataItem["IdentCode"].isNull())
			dataObject.identCode = valueDataDataItem["IdentCode"].asString();
		if(!valueDataDataItem["IdentDate"].isNull())
			dataObject.identDate = valueDataDataItem["IdentDate"].asString();
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

int GetOcOperationCustomsResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcOperationCustomsResult::getMessage()const
{
	return message_;
}

int GetOcOperationCustomsResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcOperationCustomsResult::DataItem> GetOcOperationCustomsResult::getData()const
{
	return data_;
}

int GetOcOperationCustomsResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcOperationCustomsResult::getCode()const
{
	return code_;
}

bool GetOcOperationCustomsResult::getSuccess()const
{
	return success_;
}

