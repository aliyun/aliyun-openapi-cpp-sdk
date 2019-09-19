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

#include <alibabacloud/market/model/QueryMarketImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

QueryMarketImagesResult::QueryMarketImagesResult() :
	ServiceResult()
{}

QueryMarketImagesResult::QueryMarketImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMarketImagesResult::~QueryMarketImagesResult()
{}

void QueryMarketImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ImageProduct"];
	for (auto valueResultImageProduct : allResultNode)
	{
		ImageProduct resultObject;
		if(!valueResultImageProduct["ImageProductCode"].isNull())
			resultObject.imageProductCode = valueResultImageProduct["ImageProductCode"].asString();
		if(!valueResultImageProduct["ProductName"].isNull())
			resultObject.productName = valueResultImageProduct["ProductName"].asString();
		if(!valueResultImageProduct["CategoryName"].isNull())
			resultObject.categoryName = valueResultImageProduct["CategoryName"].asString();
		if(!valueResultImageProduct["SupplierName"].isNull())
			resultObject.supplierName = valueResultImageProduct["SupplierName"].asString();
		if(!valueResultImageProduct["BaseSystem"].isNull())
			resultObject.baseSystem = valueResultImageProduct["BaseSystem"].asString();
		if(!valueResultImageProduct["OsKind"].isNull())
			resultObject.osKind = valueResultImageProduct["OsKind"].asString();
		if(!valueResultImageProduct["OsBit"].isNull())
			resultObject.osBit = std::stoi(valueResultImageProduct["OsBit"].asString());
		if(!valueResultImageProduct["PictureUrl"].isNull())
			resultObject.pictureUrl = valueResultImageProduct["PictureUrl"].asString();
		if(!valueResultImageProduct["SmallPicUrl"].isNull())
			resultObject.smallPicUrl = valueResultImageProduct["SmallPicUrl"].asString();
		if(!valueResultImageProduct["ShortDescription"].isNull())
			resultObject.shortDescription = valueResultImageProduct["ShortDescription"].asString();
		if(!valueResultImageProduct["AgreementUrl"].isNull())
			resultObject.agreementUrl = valueResultImageProduct["AgreementUrl"].asString();
		if(!valueResultImageProduct["DetailUrl"].isNull())
			resultObject.detailUrl = valueResultImageProduct["DetailUrl"].asString();
		if(!valueResultImageProduct["BuyUrl"].isNull())
			resultObject.buyUrl = valueResultImageProduct["BuyUrl"].asString();
		if(!valueResultImageProduct["StoreUrl"].isNull())
			resultObject.storeUrl = valueResultImageProduct["StoreUrl"].asString();
		if(!valueResultImageProduct["Score"].isNull())
			resultObject.score = std::stof(valueResultImageProduct["Score"].asString());
		if(!valueResultImageProduct["UserCount"].isNull())
			resultObject.userCount = std::stol(valueResultImageProduct["UserCount"].asString());
		if(!valueResultImageProduct["SupportIO"].isNull())
			resultObject.supportIO = valueResultImageProduct["SupportIO"].asString() == "true";
		if(!valueResultImageProduct["CreatedOn"].isNull())
			resultObject.createdOn = std::stol(valueResultImageProduct["CreatedOn"].asString());
		auto allImagesNode = allResultNode["Images"]["Image"];
		for (auto allResultNodeImagesImage : allImagesNode)
		{
			ImageProduct::Image imagesObject;
			if(!allResultNodeImagesImage["Version"].isNull())
				imagesObject.version = allResultNodeImagesImage["Version"].asString();
			if(!allResultNodeImagesImage["VersionDescription"].isNull())
				imagesObject.versionDescription = allResultNodeImagesImage["VersionDescription"].asString();
			if(!allResultNodeImagesImage["ImageId"].isNull())
				imagesObject.imageId = allResultNodeImagesImage["ImageId"].asString();
			if(!allResultNodeImagesImage["ImageSize"].isNull())
				imagesObject.imageSize = std::stoi(allResultNodeImagesImage["ImageSize"].asString());
			if(!allResultNodeImagesImage["Region"].isNull())
				imagesObject.region = allResultNodeImagesImage["Region"].asString();
			if(!allResultNodeImagesImage["IsDefault"].isNull())
				imagesObject.isDefault = allResultNodeImagesImage["IsDefault"].asString() == "true";
			if(!allResultNodeImagesImage["SupportIO"].isNull())
				imagesObject.supportIO = allResultNodeImagesImage["SupportIO"].asString() == "true";
			auto allDiskDeviceMappingsNode = allImagesNode["DiskDeviceMappings"]["DiskDeviceMapping"];
			for (auto allImagesNodeDiskDeviceMappingsDiskDeviceMapping : allDiskDeviceMappingsNode)
			{
				ImageProduct::Image::DiskDeviceMapping diskDeviceMappingsObject;
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["DiskType"].isNull())
					diskDeviceMappingsObject.diskType = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["DiskType"].asString();
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Format"].isNull())
					diskDeviceMappingsObject.format = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Format"].asString();
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].isNull())
					diskDeviceMappingsObject.snapshotId = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].asString();
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Size"].isNull())
					diskDeviceMappingsObject.size = std::stoi(allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Size"].asString());
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Device"].isNull())
					diskDeviceMappingsObject.device = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Device"].asString();
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].isNull())
					diskDeviceMappingsObject.importOSSBucket = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].asString();
				if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].isNull())
					diskDeviceMappingsObject.importOSSObject = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].asString();
				imagesObject.diskDeviceMappings.push_back(diskDeviceMappingsObject);
			}
			resultObject.images.push_back(imagesObject);
		}
		auto quotaNode = value["Quota"];
		if(!quotaNode["TotalQuota"].isNull())
			resultObject.quota.totalQuota = std::stol(quotaNode["TotalQuota"].asString());
		if(!quotaNode["UsingQuota"].isNull())
			resultObject.quota.usingQuota = std::stol(quotaNode["UsingQuota"].asString());
		if(!quotaNode["UnusedQuota"].isNull())
			resultObject.quota.unusedQuota = std::stol(quotaNode["UnusedQuota"].asString());
		auto priceInfoNode = value["PriceInfo"];
		auto allRulesNode = priceInfoNode["Rules"]["Rule"];
		for (auto priceInfoNodeRulesRule : allRulesNode)
		{
			ImageProduct::PriceInfo::Rule ruleObject;
			if(!priceInfoNodeRulesRule["RuleId"].isNull())
				ruleObject.ruleId = std::stol(priceInfoNodeRulesRule["RuleId"].asString());
			if(!priceInfoNodeRulesRule["Title"].isNull())
				ruleObject.title = priceInfoNodeRulesRule["Title"].asString();
			if(!priceInfoNodeRulesRule["Name"].isNull())
				ruleObject.name = priceInfoNodeRulesRule["Name"].asString();
			resultObject.priceInfo.rules.push_back(ruleObject);
		}
		auto orderNode = priceInfoNode["Order"];
		if(!orderNode["OriginalPrice"].isNull())
			resultObject.priceInfo.order.originalPrice = std::stof(orderNode["OriginalPrice"].asString());
		if(!orderNode["DiscountPrice"].isNull())
			resultObject.priceInfo.order.discountPrice = std::stof(orderNode["DiscountPrice"].asString());
		if(!orderNode["TradePrice"].isNull())
			resultObject.priceInfo.order.tradePrice = std::stof(orderNode["TradePrice"].asString());
		if(!orderNode["Currency"].isNull())
			resultObject.priceInfo.order.currency = orderNode["Currency"].asString();
		if(!orderNode["Period"].isNull())
			resultObject.priceInfo.order.period = std::stoi(orderNode["Period"].asString());
		if(!orderNode["PriceUnit"].isNull())
			resultObject.priceInfo.order.priceUnit = orderNode["PriceUnit"].asString();
			auto allRuleIdSet = orderNode["RuleIdSet"]["RuleId"];
			for (auto value : allRuleIdSet)
				resultObject.priceInfo.order.ruleIdSet.push_back(value.asString());
		auto allSkuCodes = value["SkuCodes"]["SkuCode"];
		for (auto value : allSkuCodes)
			resultObject.skuCodes.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryMarketImagesResult::getTotalCount()const
{
	return totalCount_;
}

int QueryMarketImagesResult::getPageSize()const
{
	return pageSize_;
}

int QueryMarketImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryMarketImagesResult::ImageProduct> QueryMarketImagesResult::getResult()const
{
	return result_;
}

