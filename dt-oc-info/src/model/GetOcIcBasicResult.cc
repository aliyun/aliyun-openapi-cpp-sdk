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

#include <alibabacloud/dt-oc-info/model/GetOcIcBasicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIcBasicResult::GetOcIcBasicResult() :
	ServiceResult()
{}

GetOcIcBasicResult::GetOcIcBasicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIcBasicResult::~GetOcIcBasicResult()
{}

void GetOcIcBasicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EntName"].isNull())
		data_.entName = dataNode["EntName"].asString();
	if(!dataNode["LegalName"].isNull())
		data_.legalName = dataNode["LegalName"].asString();
	if(!dataNode["EsDate"].isNull())
		data_.esDate = dataNode["EsDate"].asString();
	if(!dataNode["EntStatus"].isNull())
		data_.entStatus = dataNode["EntStatus"].asString();
	if(!dataNode["RegCap"].isNull())
		data_.regCap = dataNode["RegCap"].asString();
	if(!dataNode["RecCap"].isNull())
		data_.recCap = dataNode["RecCap"].asString();
	if(!dataNode["SocialCreditCode"].isNull())
		data_.socialCreditCode = dataNode["SocialCreditCode"].asString();
	if(!dataNode["LicenseNumber"].isNull())
		data_.licenseNumber = dataNode["LicenseNumber"].asString();
	if(!dataNode["OrgNo"].isNull())
		data_.orgNo = dataNode["OrgNo"].asString();
	if(!dataNode["TaxNum"].isNull())
		data_.taxNum = dataNode["TaxNum"].asString();
	if(!dataNode["EntType"].isNull())
		data_.entType = dataNode["EntType"].asString();
	if(!dataNode["IndustryNameLv1"].isNull())
		data_.industryNameLv1 = dataNode["IndustryNameLv1"].asString();
	if(!dataNode["IndustryNameLv2"].isNull())
		data_.industryNameLv2 = dataNode["IndustryNameLv2"].asString();
	if(!dataNode["OpFrom"].isNull())
		data_.opFrom = dataNode["OpFrom"].asString();
	if(!dataNode["OpTo"].isNull())
		data_.opTo = dataNode["OpTo"].asString();
	if(!dataNode["StaffNum"].isNull())
		data_.staffNum = dataNode["StaffNum"].asString();
	if(!dataNode["InsuredNum"].isNull())
		data_.insuredNum = dataNode["InsuredNum"].asString();
	if(!dataNode["EntNameEng"].isNull())
		data_.entNameEng = dataNode["EntNameEng"].asString();
	if(!dataNode["FormerNames"].isNull())
		data_.formerNames = dataNode["FormerNames"].asString();
	if(!dataNode["RegOrg"].isNull())
		data_.regOrg = dataNode["RegOrg"].asString();
	if(!dataNode["CheckDate"].isNull())
		data_.checkDate = dataNode["CheckDate"].asString();
	if(!dataNode["OpScope"].isNull())
		data_.opScope = dataNode["OpScope"].asString();
	if(!dataNode["EntAddress"].isNull())
		data_.entAddress = dataNode["EntAddress"].asString();
	if(!dataNode["EntBrief"].isNull())
		data_.entBrief = dataNode["EntBrief"].asString();
	if(!dataNode["RegOrgProvince"].isNull())
		data_.regOrgProvince = dataNode["RegOrgProvince"].asString();
	if(!dataNode["RegOrgCity"].isNull())
		data_.regOrgCity = dataNode["RegOrgCity"].asString();
	if(!dataNode["RegOrgDistrict"].isNull())
		data_.regOrgDistrict = dataNode["RegOrgDistrict"].asString();
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

int GetOcIcBasicResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIcBasicResult::getMessage()const
{
	return message_;
}

int GetOcIcBasicResult::getPageNum()const
{
	return pageNum_;
}

GetOcIcBasicResult::Data GetOcIcBasicResult::getData()const
{
	return data_;
}

int GetOcIcBasicResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIcBasicResult::getCode()const
{
	return code_;
}

bool GetOcIcBasicResult::getSuccess()const
{
	return success_;
}

