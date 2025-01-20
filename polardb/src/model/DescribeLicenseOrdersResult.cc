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

#include <alibabacloud/polardb/model/DescribeLicenseOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeLicenseOrdersResult::DescribeLicenseOrdersResult() :
	ServiceResult()
{}

DescribeLicenseOrdersResult::DescribeLicenseOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLicenseOrdersResult::~DescribeLicenseOrdersResult()
{}

void DescribeLicenseOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["LicenseOrder"];
	for (auto valueItemsLicenseOrder : allItemsNode)
	{
		LicenseOrder itemsObject;
		if(!valueItemsLicenseOrder["ActivatedCodeCount"].isNull())
			itemsObject.activatedCodeCount = std::stoi(valueItemsLicenseOrder["ActivatedCodeCount"].asString());
		if(!valueItemsLicenseOrder["ActivationCodeQuota"].isNull())
			itemsObject.activationCodeQuota = std::stoi(valueItemsLicenseOrder["ActivationCodeQuota"].asString());
		if(!valueItemsLicenseOrder["AliyunOrderId"].isNull())
			itemsObject.aliyunOrderId = valueItemsLicenseOrder["AliyunOrderId"].asString();
		if(!valueItemsLicenseOrder["AllowEmptySystemIdentifier"].isNull())
			itemsObject.allowEmptySystemIdentifier = valueItemsLicenseOrder["AllowEmptySystemIdentifier"].asString() == "true";
		if(!valueItemsLicenseOrder["Engine"].isNull())
			itemsObject.engine = valueItemsLicenseOrder["Engine"].asString();
		if(!valueItemsLicenseOrder["GmtCreated"].isNull())
			itemsObject.gmtCreated = valueItemsLicenseOrder["GmtCreated"].asString();
		if(!valueItemsLicenseOrder["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsLicenseOrder["GmtModified"].asString();
		if(!valueItemsLicenseOrder["IsVirtualOrder"].isNull())
			itemsObject.isVirtualOrder = valueItemsLicenseOrder["IsVirtualOrder"].asString() == "true";
		if(!valueItemsLicenseOrder["IsVirtualOrderFrozen"].isNull())
			itemsObject.isVirtualOrderFrozen = valueItemsLicenseOrder["IsVirtualOrderFrozen"].asString() == "true";
		if(!valueItemsLicenseOrder["PackageType"].isNull())
			itemsObject.packageType = valueItemsLicenseOrder["PackageType"].asString();
		if(!valueItemsLicenseOrder["PackageValidity"].isNull())
			itemsObject.packageValidity = valueItemsLicenseOrder["PackageValidity"].asString();
		if(!valueItemsLicenseOrder["PurchaseChannel"].isNull())
			itemsObject.purchaseChannel = valueItemsLicenseOrder["PurchaseChannel"].asString();
		if(!valueItemsLicenseOrder["VirtualAliyunOrderId"].isNull())
			itemsObject.virtualAliyunOrderId = valueItemsLicenseOrder["VirtualAliyunOrderId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeLicenseOrdersResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeLicenseOrdersResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeLicenseOrdersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLicenseOrdersResult::LicenseOrder> DescribeLicenseOrdersResult::getItems()const
{
	return items_;
}

