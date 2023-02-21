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

#include <alibabacloud/dt-oc-info/model/GetOcIpWorksCopyrightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIpWorksCopyrightResult::GetOcIpWorksCopyrightResult() :
	ServiceResult()
{}

GetOcIpWorksCopyrightResult::GetOcIpWorksCopyrightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIpWorksCopyrightResult::~GetOcIpWorksCopyrightResult()
{}

void GetOcIpWorksCopyrightResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["CopyName"].isNull())
			dataObject.copyName = valueDataDataItem["CopyName"].asString();
		if(!valueDataDataItem["TypeName"].isNull())
			dataObject.typeName = valueDataDataItem["TypeName"].asString();
		if(!valueDataDataItem["CopyNum"].isNull())
			dataObject.copyNum = valueDataDataItem["CopyNum"].asString();
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

int GetOcIpWorksCopyrightResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIpWorksCopyrightResult::getMessage()const
{
	return message_;
}

int GetOcIpWorksCopyrightResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIpWorksCopyrightResult::DataItem> GetOcIpWorksCopyrightResult::getData()const
{
	return data_;
}

int GetOcIpWorksCopyrightResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIpWorksCopyrightResult::getCode()const
{
	return code_;
}

bool GetOcIpWorksCopyrightResult::getSuccess()const
{
	return success_;
}

