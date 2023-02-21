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

#include <alibabacloud/dt-oc-info/model/GetOcNegativeAdminPunishmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcNegativeAdminPunishmentResult::GetOcNegativeAdminPunishmentResult() :
	ServiceResult()
{}

GetOcNegativeAdminPunishmentResult::GetOcNegativeAdminPunishmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcNegativeAdminPunishmentResult::~GetOcNegativeAdminPunishmentResult()
{}

void GetOcNegativeAdminPunishmentResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["PunishNum"].isNull())
			dataObject.punishNum = valueDataDataItem["PunishNum"].asString();
		if(!valueDataDataItem["IllegalType"].isNull())
			dataObject.illegalType = valueDataDataItem["IllegalType"].asString();
		if(!valueDataDataItem["PunishResult"].isNull())
			dataObject.punishResult = valueDataDataItem["PunishResult"].asString();
		if(!valueDataDataItem["Department"].isNull())
			dataObject.department = valueDataDataItem["Department"].asString();
		if(!valueDataDataItem["PunishDate"].isNull())
			dataObject.punishDate = valueDataDataItem["PunishDate"].asString();
		if(!valueDataDataItem["LawBasis"].isNull())
			dataObject.lawBasis = valueDataDataItem["LawBasis"].asString();
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

int GetOcNegativeAdminPunishmentResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcNegativeAdminPunishmentResult::getMessage()const
{
	return message_;
}

int GetOcNegativeAdminPunishmentResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcNegativeAdminPunishmentResult::DataItem> GetOcNegativeAdminPunishmentResult::getData()const
{
	return data_;
}

int GetOcNegativeAdminPunishmentResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcNegativeAdminPunishmentResult::getCode()const
{
	return code_;
}

bool GetOcNegativeAdminPunishmentResult::getSuccess()const
{
	return success_;
}

