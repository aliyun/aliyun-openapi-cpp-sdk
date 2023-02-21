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

#include <alibabacloud/dt-oc-info/model/GetOcIcDoubleCheckupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIcDoubleCheckupResult::GetOcIcDoubleCheckupResult() :
	ServiceResult()
{}

GetOcIcDoubleCheckupResult::GetOcIcDoubleCheckupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIcDoubleCheckupResult::~GetOcIcDoubleCheckupResult()
{}

void GetOcIcDoubleCheckupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["InspectPlanId"].isNull())
			dataObject.inspectPlanId = valueDataDataItem["InspectPlanId"].asString();
		if(!valueDataDataItem["InspectPlanName"].isNull())
			dataObject.inspectPlanName = valueDataDataItem["InspectPlanName"].asString();
		if(!valueDataDataItem["InspectTaskId"].isNull())
			dataObject.inspectTaskId = valueDataDataItem["InspectTaskId"].asString();
		if(!valueDataDataItem["InspectTaskName"].isNull())
			dataObject.inspectTaskName = valueDataDataItem["InspectTaskName"].asString();
		if(!valueDataDataItem["InspectTypeName"].isNull())
			dataObject.inspectTypeName = valueDataDataItem["InspectTypeName"].asString();
		if(!valueDataDataItem["InspectDepartment"].isNull())
			dataObject.inspectDepartment = valueDataDataItem["InspectDepartment"].asString();
		if(!valueDataDataItem["InspectDate"].isNull())
			dataObject.inspectDate = valueDataDataItem["InspectDate"].asString();
		if(!valueDataDataItem["InspectItem"].isNull())
			dataObject.inspectItem = valueDataDataItem["InspectItem"].asString();
		if(!valueDataDataItem["InspectResult"].isNull())
			dataObject.inspectResult = valueDataDataItem["InspectResult"].asString();
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

int GetOcIcDoubleCheckupResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIcDoubleCheckupResult::getMessage()const
{
	return message_;
}

int GetOcIcDoubleCheckupResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIcDoubleCheckupResult::DataItem> GetOcIcDoubleCheckupResult::getData()const
{
	return data_;
}

int GetOcIcDoubleCheckupResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIcDoubleCheckupResult::getCode()const
{
	return code_;
}

bool GetOcIcDoubleCheckupResult::getSuccess()const
{
	return success_;
}

