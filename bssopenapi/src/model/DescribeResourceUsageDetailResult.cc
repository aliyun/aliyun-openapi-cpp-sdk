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

#include <alibabacloud/bssopenapi/model/DescribeResourceUsageDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeResourceUsageDetailResult::DescribeResourceUsageDetailResult() :
	ServiceResult()
{}

DescribeResourceUsageDetailResult::DescribeResourceUsageDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceUsageDetailResult::~DescribeResourceUsageDetailResult()
{}

void DescribeResourceUsageDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["Status"].isNull())
			itemObject.status = dataNodeItemsItem["Status"].asString();
		if(!dataNodeItemsItem["UsagePercentage"].isNull())
			itemObject.usagePercentage = std::stof(dataNodeItemsItem["UsagePercentage"].asString());
		if(!dataNodeItemsItem["ResourceInstanceId"].isNull())
			itemObject.resourceInstanceId = dataNodeItemsItem["ResourceInstanceId"].asString();
		if(!dataNodeItemsItem["TotalQuantity"].isNull())
			itemObject.totalQuantity = std::stof(dataNodeItemsItem["TotalQuantity"].asString());
		if(!dataNodeItemsItem["ReservationCost"].isNull())
			itemObject.reservationCost = dataNodeItemsItem["ReservationCost"].asString();
		if(!dataNodeItemsItem["RegionNo"].isNull())
			itemObject.regionNo = dataNodeItemsItem["RegionNo"].asString();
		if(!dataNodeItemsItem["UserId"].isNull())
			itemObject.userId = dataNodeItemsItem["UserId"].asString();
		if(!dataNodeItemsItem["StatusName"].isNull())
			itemObject.statusName = dataNodeItemsItem["StatusName"].asString();
		if(!dataNodeItemsItem["CapacityUnit"].isNull())
			itemObject.capacityUnit = dataNodeItemsItem["CapacityUnit"].asString();
		if(!dataNodeItemsItem["PotentialSavedCost"].isNull())
			itemObject.potentialSavedCost = dataNodeItemsItem["PotentialSavedCost"].asString();
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["ZoneName"].isNull())
			itemObject.zoneName = dataNodeItemsItem["ZoneName"].asString();
		if(!dataNodeItemsItem["InstanceSpec"].isNull())
			itemObject.instanceSpec = dataNodeItemsItem["InstanceSpec"].asString();
		if(!dataNodeItemsItem["EndTime"].isNull())
			itemObject.endTime = dataNodeItemsItem["EndTime"].asString();
		if(!dataNodeItemsItem["PostpaidCost"].isNull())
			itemObject.postpaidCost = dataNodeItemsItem["PostpaidCost"].asString();
		if(!dataNodeItemsItem["ImageType"].isNull())
			itemObject.imageType = dataNodeItemsItem["ImageType"].asString();
		if(!dataNodeItemsItem["StartTime"].isNull())
			itemObject.startTime = dataNodeItemsItem["StartTime"].asString();
		if(!dataNodeItemsItem["Region"].isNull())
			itemObject.region = dataNodeItemsItem["Region"].asString();
		if(!dataNodeItemsItem["DeductQuantity"].isNull())
			itemObject.deductQuantity = std::stof(dataNodeItemsItem["DeductQuantity"].asString());
		if(!dataNodeItemsItem["SavedCost"].isNull())
			itemObject.savedCost = dataNodeItemsItem["SavedCost"].asString();
		if(!dataNodeItemsItem["Zone"].isNull())
			itemObject.zone = dataNodeItemsItem["Zone"].asString();
		if(!dataNodeItemsItem["UserName"].isNull())
			itemObject.userName = dataNodeItemsItem["UserName"].asString();
		if(!dataNodeItemsItem["Quantity"].isNull())
			itemObject.quantity = std::stol(dataNodeItemsItem["Quantity"].asString());
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeResourceUsageDetailResult::getMessage()const
{
	return message_;
}

DescribeResourceUsageDetailResult::Data DescribeResourceUsageDetailResult::getData()const
{
	return data_;
}

std::string DescribeResourceUsageDetailResult::getCode()const
{
	return code_;
}

bool DescribeResourceUsageDetailResult::getSuccess()const
{
	return success_;
}

