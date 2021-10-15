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

#include <alibabacloud/cloudesl/model/DescribeEslDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeEslDeviceResult::DescribeEslDeviceResult() :
	ServiceResult()
{}

DescribeEslDeviceResult::DescribeEslDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEslDeviceResult::~DescribeEslDeviceResult()
{}

void DescribeEslDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEslDetailsNode = value["EslDetails"]["eslDetailsItem"];
	for (auto valueEslDetailseslDetailsItem : allEslDetailsNode)
	{
		EslDetailsItem eslDetailsObject;
		if(!valueEslDetailseslDetailsItem["EslBarCode"].isNull())
			eslDetailsObject.eslBarCode = valueEslDetailseslDetailsItem["EslBarCode"].asString();
		if(!valueEslDetailseslDetailsItem["LastUpdateTime"].isNull())
			eslDetailsObject.lastUpdateTime = valueEslDetailseslDetailsItem["LastUpdateTime"].asString();
		if(!valueEslDetailseslDetailsItem["ItemBarCode"].isNull())
			eslDetailsObject.itemBarCode = std::stol(valueEslDetailseslDetailsItem["ItemBarCode"].asString());
		if(!valueEslDetailseslDetailsItem["ItemId"].isNull())
			eslDetailsObject.itemId = std::stol(valueEslDetailseslDetailsItem["ItemId"].asString());
		if(!valueEslDetailseslDetailsItem["ItemShortTitle"].isNull())
			eslDetailsObject.itemShortTitle = valueEslDetailseslDetailsItem["ItemShortTitle"].asString();
		if(!valueEslDetailseslDetailsItem["Status"].isNull())
			eslDetailsObject.status = valueEslDetailseslDetailsItem["Status"].asString();
		if(!valueEslDetailseslDetailsItem["StoreId"].isNull())
			eslDetailsObject.storeId = valueEslDetailseslDetailsItem["StoreId"].asString();
		eslDetails_.push_back(eslDetailsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long DescribeEslDeviceResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeEslDeviceResult::getPageSize()const
{
	return pageSize_;
}

long DescribeEslDeviceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEslDeviceResult::EslDetailsItem> DescribeEslDeviceResult::getEslDetails()const
{
	return eslDetails_;
}

bool DescribeEslDeviceResult::getSuccess()const
{
	return success_;
}

