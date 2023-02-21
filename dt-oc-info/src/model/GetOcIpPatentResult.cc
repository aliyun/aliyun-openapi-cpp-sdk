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

#include <alibabacloud/dt-oc-info/model/GetOcIpPatentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIpPatentResult::GetOcIpPatentResult() :
	ServiceResult()
{}

GetOcIpPatentResult::GetOcIpPatentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIpPatentResult::~GetOcIpPatentResult()
{}

void GetOcIpPatentResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["PatentType"].isNull())
			dataObject.patentType = valueDataDataItem["PatentType"].asString();
		if(!valueDataDataItem["PatentName"].isNull())
			dataObject.patentName = valueDataDataItem["PatentName"].asString();
		if(!valueDataDataItem["PatentStatus"].isNull())
			dataObject.patentStatus = valueDataDataItem["PatentStatus"].asString();
		if(!valueDataDataItem["RequestNum"].isNull())
			dataObject.requestNum = valueDataDataItem["RequestNum"].asString();
		if(!valueDataDataItem["RequestDate"].isNull())
			dataObject.requestDate = valueDataDataItem["RequestDate"].asString();
		if(!valueDataDataItem["PublicNum"].isNull())
			dataObject.publicNum = valueDataDataItem["PublicNum"].asString();
		if(!valueDataDataItem["PublicDate"].isNull())
			dataObject.publicDate = valueDataDataItem["PublicDate"].asString();
		if(!valueDataDataItem["InventorList"].isNull())
			dataObject.inventorList = valueDataDataItem["InventorList"].asString();
		if(!valueDataDataItem["PatenteeList"].isNull())
			dataObject.patenteeList = valueDataDataItem["PatenteeList"].asString();
		if(!valueDataDataItem["CateNum"].isNull())
			dataObject.cateNum = valueDataDataItem["CateNum"].asString();
		if(!valueDataDataItem["PrioNum"].isNull())
			dataObject.prioNum = valueDataDataItem["PrioNum"].asString();
		if(!valueDataDataItem["PrioDate"].isNull())
			dataObject.prioDate = valueDataDataItem["PrioDate"].asString();
		if(!valueDataDataItem["Agency"].isNull())
			dataObject.agency = valueDataDataItem["Agency"].asString();
		if(!valueDataDataItem["Agent"].isNull())
			dataObject.agent = valueDataDataItem["Agent"].asString();
		if(!valueDataDataItem["Brief"].isNull())
			dataObject.brief = valueDataDataItem["Brief"].asString();
		if(!valueDataDataItem["MainClaim"].isNull())
			dataObject.mainClaim = valueDataDataItem["MainClaim"].asString();
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

int GetOcIpPatentResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIpPatentResult::getMessage()const
{
	return message_;
}

int GetOcIpPatentResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIpPatentResult::DataItem> GetOcIpPatentResult::getData()const
{
	return data_;
}

int GetOcIpPatentResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIpPatentResult::getCode()const
{
	return code_;
}

bool GetOcIpPatentResult::getSuccess()const
{
	return success_;
}

