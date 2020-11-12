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

#include <alibabacloud/openanalytics-open/model/QueryDiscountListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

QueryDiscountListResult::QueryDiscountListResult() :
	ServiceResult()
{}

QueryDiscountListResult::QueryDiscountListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDiscountListResult::~QueryDiscountListResult()
{}

void QueryDiscountListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["PlanID"].isNull())
			dataObject.planID = valueDataDataItem["PlanID"].asString();
		if(!valueDataDataItem["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataDataItem["GmtCreate"].asString();
		if(!valueDataDataItem["GmtCreateValue"].isNull())
			dataObject.gmtCreateValue = std::stol(valueDataDataItem["GmtCreateValue"].asString());
		if(!valueDataDataItem["DiscountType"].isNull())
			dataObject.discountType = valueDataDataItem["DiscountType"].asString();
		if(!valueDataDataItem["DiscountConfig"].isNull())
			dataObject.discountConfig = valueDataDataItem["DiscountConfig"].asString();
		if(!valueDataDataItem["PayType"].isNull())
			dataObject.payType = std::stoi(valueDataDataItem["PayType"].asString());
		if(!valueDataDataItem["PayAmount"].isNull())
			dataObject.payAmount = valueDataDataItem["PayAmount"].asString();
		if(!valueDataDataItem["Weight"].isNull())
			dataObject.weight = std::stoi(valueDataDataItem["Weight"].asString());
		if(!valueDataDataItem["Stacked"].isNull())
			dataObject.stacked = std::stoi(valueDataDataItem["Stacked"].asString());
		if(!valueDataDataItem["UsageBytes"].isNull())
			dataObject.usageBytes = std::stol(valueDataDataItem["UsageBytes"].asString());
		if(!valueDataDataItem["EffectiveStartTime"].isNull())
			dataObject.effectiveStartTime = valueDataDataItem["EffectiveStartTime"].asString();
		if(!valueDataDataItem["EffectiveStartTimeValue"].isNull())
			dataObject.effectiveStartTimeValue = std::stol(valueDataDataItem["EffectiveStartTimeValue"].asString());
		if(!valueDataDataItem["EffectiveEndTime"].isNull())
			dataObject.effectiveEndTime = valueDataDataItem["EffectiveEndTime"].asString();
		if(!valueDataDataItem["EffectiveEndTimeValue"].isNull())
			dataObject.effectiveEndTimeValue = std::stol(valueDataDataItem["EffectiveEndTimeValue"].asString());
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = std::stoi(valueDataDataItem["Status"].asString());
		data_.push_back(dataObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryDiscountListResult::getTotalCount()const
{
	return totalCount_;
}

int QueryDiscountListResult::getPageSize()const
{
	return pageSize_;
}

int QueryDiscountListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryDiscountListResult::DataItem> QueryDiscountListResult::getData()const
{
	return data_;
}

std::string QueryDiscountListResult::getRegionId()const
{
	return regionId_;
}

