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

#include <alibabacloud/marketplaceintl/model/DescribeSellerInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MarketplaceIntl;
using namespace AlibabaCloud::MarketplaceIntl::Model;

DescribeSellerInstancesResult::DescribeSellerInstancesResult() :
	ServiceResult()
{}

DescribeSellerInstancesResult::DescribeSellerInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSellerInstancesResult::~DescribeSellerInstancesResult()
{}

void DescribeSellerInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["AppInfo"].isNull())
			resultObject.appInfo = valueResultResultItem["AppInfo"].asString();
		if(!valueResultResultItem["CommodityCode"].isNull())
			resultObject.commodityCode = valueResultResultItem["CommodityCode"].asString();
		if(!valueResultResultItem["CreatedOn"].isNull())
			resultObject.createdOn = std::stol(valueResultResultItem["CreatedOn"].asString());
		if(!valueResultResultItem["InstanceId"].isNull())
			resultObject.instanceId = std::stol(valueResultResultItem["InstanceId"].asString());
		if(!valueResultResultItem["InstanceStatus"].isNull())
			resultObject.instanceStatus = valueResultResultItem["InstanceStatus"].asString();
		if(!valueResultResultItem["UserId"].isNull())
			resultObject.userId = std::stol(valueResultResultItem["UserId"].asString());
		if(!valueResultResultItem["HostInfo"].isNull())
			resultObject.hostInfo = valueResultResultItem["HostInfo"].asString();
		if(!valueResultResultItem["Info"].isNull())
			resultObject.info = valueResultResultItem["Info"].asString();
		if(!valueResultResultItem["ChargeType"].isNull())
			resultObject.chargeType = std::stoi(valueResultResultItem["ChargeType"].asString());
		result_.push_back(resultObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["Fatal"].isNull())
		fatal_ = value["Fatal"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long DescribeSellerInstancesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeSellerInstancesResult::getMessage()const
{
	return message_;
}

long DescribeSellerInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSellerInstancesResult::getVersion()const
{
	return version_;
}

long DescribeSellerInstancesResult::getCount()const
{
	return count_;
}

bool DescribeSellerInstancesResult::getFatal()const
{
	return fatal_;
}

std::string DescribeSellerInstancesResult::getCode()const
{
	return code_;
}

bool DescribeSellerInstancesResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeSellerInstancesResult::ResultItem> DescribeSellerInstancesResult::getResult()const
{
	return result_;
}

