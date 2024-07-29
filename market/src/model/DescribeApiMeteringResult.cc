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

#include <alibabacloud/market/model/DescribeApiMeteringResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeApiMeteringResult::DescribeApiMeteringResult() :
	ServiceResult()
{}

DescribeApiMeteringResult::DescribeApiMeteringResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiMeteringResult::~DescribeApiMeteringResult()
{}

void DescribeApiMeteringResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["resultItem"];
	for (auto valueResultresultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultresultItem["AliyunPk"].isNull())
			resultObject.aliyunPk = std::stol(valueResultresultItem["AliyunPk"].asString());
		if(!valueResultresultItem["ProductCode"].isNull())
			resultObject.productCode = valueResultresultItem["ProductCode"].asString();
		if(!valueResultresultItem["ProductName"].isNull())
			resultObject.productName = valueResultresultItem["ProductName"].asString();
		if(!valueResultresultItem["TotalQuota"].isNull())
			resultObject.totalQuota = std::stol(valueResultresultItem["TotalQuota"].asString());
		if(!valueResultresultItem["TotalUsage"].isNull())
			resultObject.totalUsage = std::stol(valueResultresultItem["TotalUsage"].asString());
		if(!valueResultresultItem["TotalCapacity"].isNull())
			resultObject.totalCapacity = std::stol(valueResultresultItem["TotalCapacity"].asString());
		if(!valueResultresultItem["Unit"].isNull())
			resultObject.unit = valueResultresultItem["Unit"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["Fatal"].isNull())
		fatal_ = value["Fatal"].asString() == "true";

}

long DescribeApiMeteringResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeApiMeteringResult::getMessage()const
{
	return message_;
}

long DescribeApiMeteringResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeApiMeteringResult::getVersion()const
{
	return version_;
}

long DescribeApiMeteringResult::getCount()const
{
	return count_;
}

bool DescribeApiMeteringResult::getFatal()const
{
	return fatal_;
}

std::string DescribeApiMeteringResult::getCode()const
{
	return code_;
}

bool DescribeApiMeteringResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeApiMeteringResult::ResultItem> DescribeApiMeteringResult::getResult()const
{
	return result_;
}

