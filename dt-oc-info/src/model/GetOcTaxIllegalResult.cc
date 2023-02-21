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

#include <alibabacloud/dt-oc-info/model/GetOcTaxIllegalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcTaxIllegalResult::GetOcTaxIllegalResult() :
	ServiceResult()
{}

GetOcTaxIllegalResult::GetOcTaxIllegalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcTaxIllegalResult::~GetOcTaxIllegalResult()
{}

void GetOcTaxIllegalResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["TaxpayerNum"].isNull())
			dataObject.taxpayerNum = valueDataDataItem["TaxpayerNum"].asString();
		if(!valueDataDataItem["OrgCode"].isNull())
			dataObject.orgCode = valueDataDataItem["OrgCode"].asString();
		if(!valueDataDataItem["EntAddress"].isNull())
			dataObject.entAddress = valueDataDataItem["EntAddress"].asString();
		if(!valueDataDataItem["CaseType"].isNull())
			dataObject.caseType = valueDataDataItem["CaseType"].asString();
		if(!valueDataDataItem["IllegalTruth"].isNull())
			dataObject.illegalTruth = valueDataDataItem["IllegalTruth"].asString();
		if(!valueDataDataItem["PublishDate"].isNull())
			dataObject.publishDate = valueDataDataItem["PublishDate"].asString();
		if(!valueDataDataItem["LawBasis"].isNull())
			dataObject.lawBasis = valueDataDataItem["LawBasis"].asString();
		if(!valueDataDataItem["Department"].isNull())
			dataObject.department = valueDataDataItem["Department"].asString();
		if(!valueDataDataItem["LegalName"].isNull())
			dataObject.legalName = valueDataDataItem["LegalName"].asString();
		if(!valueDataDataItem["LegalSex"].isNull())
			dataObject.legalSex = valueDataDataItem["LegalSex"].asString();
		if(!valueDataDataItem["LegalCardType"].isNull())
			dataObject.legalCardType = valueDataDataItem["LegalCardType"].asString();
		if(!valueDataDataItem["LegalCardNum"].isNull())
			dataObject.legalCardNum = valueDataDataItem["LegalCardNum"].asString();
		if(!valueDataDataItem["FinancialName"].isNull())
			dataObject.financialName = valueDataDataItem["FinancialName"].asString();
		if(!valueDataDataItem["FinancialSex"].isNull())
			dataObject.financialSex = valueDataDataItem["FinancialSex"].asString();
		if(!valueDataDataItem["FinancialCardType"].isNull())
			dataObject.financialCardType = valueDataDataItem["FinancialCardType"].asString();
		if(!valueDataDataItem["FinancialCardNum"].isNull())
			dataObject.financialCardNum = valueDataDataItem["FinancialCardNum"].asString();
		if(!valueDataDataItem["AgencyEnt"].isNull())
			dataObject.agencyEnt = valueDataDataItem["AgencyEnt"].asString();
		if(!valueDataDataItem["AgencyName"].isNull())
			dataObject.agencyName = valueDataDataItem["AgencyName"].asString();
		if(!valueDataDataItem["AgencySex"].isNull())
			dataObject.agencySex = valueDataDataItem["AgencySex"].asString();
		if(!valueDataDataItem["AgencyCardType"].isNull())
			dataObject.agencyCardType = valueDataDataItem["AgencyCardType"].asString();
		if(!valueDataDataItem["AgencyCardNum"].isNull())
			dataObject.agencyCardNum = valueDataDataItem["AgencyCardNum"].asString();
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

int GetOcTaxIllegalResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcTaxIllegalResult::getMessage()const
{
	return message_;
}

int GetOcTaxIllegalResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcTaxIllegalResult::DataItem> GetOcTaxIllegalResult::getData()const
{
	return data_;
}

int GetOcTaxIllegalResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcTaxIllegalResult::getCode()const
{
	return code_;
}

bool GetOcTaxIllegalResult::getSuccess()const
{
	return success_;
}

