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

#include <alibabacloud/dt-oc-info/model/GetOcOperationPurchaseLandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcOperationPurchaseLandResult::GetOcOperationPurchaseLandResult() :
	ServiceResult()
{}

GetOcOperationPurchaseLandResult::GetOcOperationPurchaseLandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcOperationPurchaseLandResult::~GetOcOperationPurchaseLandResult()
{}

void GetOcOperationPurchaseLandResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["RegionName"].isNull())
			dataObject.regionName = valueDataDataItem["RegionName"].asString();
		if(!valueDataDataItem["ElectronicNo"].isNull())
			dataObject.electronicNo = valueDataDataItem["ElectronicNo"].asString();
		if(!valueDataDataItem["ProjectName"].isNull())
			dataObject.projectName = valueDataDataItem["ProjectName"].asString();
		if(!valueDataDataItem["Location"].isNull())
			dataObject.location = valueDataDataItem["Location"].asString();
		if(!valueDataDataItem["Area"].isNull())
			dataObject.area = valueDataDataItem["Area"].asString();
		if(!valueDataDataItem["ReleaseDate"].isNull())
			dataObject.releaseDate = valueDataDataItem["ReleaseDate"].asString();
		if(!valueDataDataItem["LandSource"].isNull())
			dataObject.landSource = valueDataDataItem["LandSource"].asString();
		if(!valueDataDataItem["LandUse"].isNull())
			dataObject.landUse = valueDataDataItem["LandUse"].asString();
		if(!valueDataDataItem["LandLevel"].isNull())
			dataObject.landLevel = valueDataDataItem["LandLevel"].asString();
		if(!valueDataDataItem["SigningMode"].isNull())
			dataObject.signingMode = valueDataDataItem["SigningMode"].asString();
		if(!valueDataDataItem["UseYear"].isNull())
			dataObject.useYear = valueDataDataItem["UseYear"].asString();
		if(!valueDataDataItem["Industry"].isNull())
			dataObject.industry = valueDataDataItem["Industry"].asString();
		if(!valueDataDataItem["PromiseDeliveryDate"].isNull())
			dataObject.promiseDeliveryDate = valueDataDataItem["PromiseDeliveryDate"].asString();
		if(!valueDataDataItem["PromiseStartDate"].isNull())
			dataObject.promiseStartDate = valueDataDataItem["PromiseStartDate"].asString();
		if(!valueDataDataItem["PromiseEndDate"].isNull())
			dataObject.promiseEndDate = valueDataDataItem["PromiseEndDate"].asString();
		if(!valueDataDataItem["Department"].isNull())
			dataObject.department = valueDataDataItem["Department"].asString();
		if(!valueDataDataItem["Price"].isNull())
			dataObject.price = valueDataDataItem["Price"].asString();
		if(!valueDataDataItem["VolumeFractionUpperBound"].isNull())
			dataObject.volumeFractionUpperBound = valueDataDataItem["VolumeFractionUpperBound"].asString();
		if(!valueDataDataItem["VolumeFractionLowerBound"].isNull())
			dataObject.volumeFractionLowerBound = valueDataDataItem["VolumeFractionLowerBound"].asString();
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

int GetOcOperationPurchaseLandResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcOperationPurchaseLandResult::getMessage()const
{
	return message_;
}

int GetOcOperationPurchaseLandResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcOperationPurchaseLandResult::DataItem> GetOcOperationPurchaseLandResult::getData()const
{
	return data_;
}

int GetOcOperationPurchaseLandResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcOperationPurchaseLandResult::getCode()const
{
	return code_;
}

bool GetOcOperationPurchaseLandResult::getSuccess()const
{
	return success_;
}

