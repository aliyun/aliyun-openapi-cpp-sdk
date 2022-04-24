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

#include <alibabacloud/bssopenapi/model/DescribeResourceCoverageDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeResourceCoverageDetailResult::DescribeResourceCoverageDetailResult() :
	ServiceResult()
{}

DescribeResourceCoverageDetailResult::DescribeResourceCoverageDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceCoverageDetailResult::~DescribeResourceCoverageDetailResult()
{}

void DescribeResourceCoverageDetailResult::parse(const std::string &payload)
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
		if(!dataNodeItemsItem["CommodityCode"].isNull())
			itemObject.commodityCode = dataNodeItemsItem["CommodityCode"].asString();
		if(!dataNodeItemsItem["ProductName"].isNull())
			itemObject.productName = dataNodeItemsItem["ProductName"].asString();
		if(!dataNodeItemsItem["TotalQuantity"].isNull())
			itemObject.totalQuantity = std::stof(dataNodeItemsItem["TotalQuantity"].asString());
		if(!dataNodeItemsItem["RegionNo"].isNull())
			itemObject.regionNo = dataNodeItemsItem["RegionNo"].asString();
		if(!dataNodeItemsItem["UserId"].isNull())
			itemObject.userId = dataNodeItemsItem["UserId"].asString();
		if(!dataNodeItemsItem["CommodityName"].isNull())
			itemObject.commodityName = dataNodeItemsItem["CommodityName"].asString();
		if(!dataNodeItemsItem["CapacityUnit"].isNull())
			itemObject.capacityUnit = dataNodeItemsItem["CapacityUnit"].asString();
		if(!dataNodeItemsItem["InstanceId"].isNull())
			itemObject.instanceId = dataNodeItemsItem["InstanceId"].asString();
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["ZoneName"].isNull())
			itemObject.zoneName = dataNodeItemsItem["ZoneName"].asString();
		if(!dataNodeItemsItem["InstanceSpec"].isNull())
			itemObject.instanceSpec = dataNodeItemsItem["InstanceSpec"].asString();
		if(!dataNodeItemsItem["EndTime"].isNull())
			itemObject.endTime = dataNodeItemsItem["EndTime"].asString();
		if(!dataNodeItemsItem["StartTime"].isNull())
			itemObject.startTime = dataNodeItemsItem["StartTime"].asString();
		if(!dataNodeItemsItem["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(dataNodeItemsItem["PaymentAmount"].asString());
		if(!dataNodeItemsItem["CoveragePercentage"].isNull())
			itemObject.coveragePercentage = std::stof(dataNodeItemsItem["CoveragePercentage"].asString());
		if(!dataNodeItemsItem["Region"].isNull())
			itemObject.region = dataNodeItemsItem["Region"].asString();
		if(!dataNodeItemsItem["DeductQuantity"].isNull())
			itemObject.deductQuantity = std::stof(dataNodeItemsItem["DeductQuantity"].asString());
		if(!dataNodeItemsItem["Zone"].isNull())
			itemObject.zone = dataNodeItemsItem["Zone"].asString();
		if(!dataNodeItemsItem["UserName"].isNull())
			itemObject.userName = dataNodeItemsItem["UserName"].asString();
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeResourceCoverageDetailResult::getMessage()const
{
	return message_;
}

DescribeResourceCoverageDetailResult::Data DescribeResourceCoverageDetailResult::getData()const
{
	return data_;
}

std::string DescribeResourceCoverageDetailResult::getCode()const
{
	return code_;
}

bool DescribeResourceCoverageDetailResult::getSuccess()const
{
	return success_;
}

