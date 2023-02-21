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

#include <alibabacloud/dt-oc-info/model/GetOcIpSoftwareCopyrightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIpSoftwareCopyrightResult::GetOcIpSoftwareCopyrightResult() :
	ServiceResult()
{}

GetOcIpSoftwareCopyrightResult::GetOcIpSoftwareCopyrightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIpSoftwareCopyrightResult::~GetOcIpSoftwareCopyrightResult()
{}

void GetOcIpSoftwareCopyrightResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["CopyNum"].isNull())
			dataObject.copyNum = valueDataDataItem["CopyNum"].asString();
		if(!valueDataDataItem["TypeNum"].isNull())
			dataObject.typeNum = valueDataDataItem["TypeNum"].asString();
		if(!valueDataDataItem["ShortName"].isNull())
			dataObject.shortName = valueDataDataItem["ShortName"].asString();
		if(!valueDataDataItem["CopyName"].isNull())
			dataObject.copyName = valueDataDataItem["CopyName"].asString();
		if(!valueDataDataItem["Version"].isNull())
			dataObject.version = valueDataDataItem["Version"].asString();
		if(!valueDataDataItem["SuccessDate"].isNull())
			dataObject.successDate = valueDataDataItem["SuccessDate"].asString();
		if(!valueDataDataItem["FirstDate"].isNull())
			dataObject.firstDate = valueDataDataItem["FirstDate"].asString();
		if(!valueDataDataItem["ApprovalDate"].isNull())
			dataObject.approvalDate = valueDataDataItem["ApprovalDate"].asString();
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

int GetOcIpSoftwareCopyrightResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIpSoftwareCopyrightResult::getMessage()const
{
	return message_;
}

int GetOcIpSoftwareCopyrightResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIpSoftwareCopyrightResult::DataItem> GetOcIpSoftwareCopyrightResult::getData()const
{
	return data_;
}

int GetOcIpSoftwareCopyrightResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIpSoftwareCopyrightResult::getCode()const
{
	return code_;
}

bool GetOcIpSoftwareCopyrightResult::getSuccess()const
{
	return success_;
}

