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

#include <alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeSavingsPlansCoverageDetailResult::DescribeSavingsPlansCoverageDetailResult() :
	ServiceResult()
{}

DescribeSavingsPlansCoverageDetailResult::DescribeSavingsPlansCoverageDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSavingsPlansCoverageDetailResult::~DescribeSavingsPlansCoverageDetailResult()
{}

void DescribeSavingsPlansCoverageDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["UserId"].isNull())
			itemObject.userId = std::stol(dataNodeItemsItem["UserId"].asString());
		if(!dataNodeItemsItem["InstanceId"].isNull())
			itemObject.instanceId = dataNodeItemsItem["InstanceId"].asString();
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["InstanceSpec"].isNull())
			itemObject.instanceSpec = dataNodeItemsItem["InstanceSpec"].asString();
		if(!dataNodeItemsItem["PostpaidCost"].isNull())
			itemObject.postpaidCost = std::stof(dataNodeItemsItem["PostpaidCost"].asString());
		if(!dataNodeItemsItem["CoveragePercentage"].isNull())
			itemObject.coveragePercentage = std::stof(dataNodeItemsItem["CoveragePercentage"].asString());
		if(!dataNodeItemsItem["Region"].isNull())
			itemObject.region = dataNodeItemsItem["Region"].asString();
		if(!dataNodeItemsItem["DeductAmount"].isNull())
			itemObject.deductAmount = std::stof(dataNodeItemsItem["DeductAmount"].asString());
		if(!dataNodeItemsItem["StartPeriod"].isNull())
			itemObject.startPeriod = dataNodeItemsItem["StartPeriod"].asString();
		if(!dataNodeItemsItem["TotalAmount"].isNull())
			itemObject.totalAmount = std::stof(dataNodeItemsItem["TotalAmount"].asString());
		if(!dataNodeItemsItem["UserName"].isNull())
			itemObject.userName = dataNodeItemsItem["UserName"].asString();
		if(!dataNodeItemsItem["EndPeriod"].isNull())
			itemObject.endPeriod = dataNodeItemsItem["EndPeriod"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeSavingsPlansCoverageDetailResult::getMessage()const
{
	return message_;
}

DescribeSavingsPlansCoverageDetailResult::Data DescribeSavingsPlansCoverageDetailResult::getData()const
{
	return data_;
}

std::string DescribeSavingsPlansCoverageDetailResult::getCode()const
{
	return code_;
}

bool DescribeSavingsPlansCoverageDetailResult::getSuccess()const
{
	return success_;
}

