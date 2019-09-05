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
	auto allResult = value["Result"]["ImageProduct"];
	for (auto value : allResult)
	{
		ImageProduct resultObject;
		if(!value["ImageProductCode"].isNull())
			resultObject.imageProductCode = value["ImageProductCode"].asString();
		if(!value["ProductName"].isNull())
			resultObject.productName = value["ProductName"].asString();
		if(!value["CategoryName"].isNull())
			resultObject.categoryName = value["CategoryName"].asString();
		if(!value["SupplierName"].isNull())
			resultObject.supplierName = value["SupplierName"].asString();
		if(!value["BaseSystem"].isNull())
			resultObject.baseSystem = value["BaseSystem"].asString();
		if(!value["OsKind"].isNull())
			resultObject.osKind = value["OsKind"].asString();
		if(!value["OsBit"].isNull())
			resultObject.osBit = std::stoi(value["OsBit"].asString());
		if(!value["PictureUrl"].isNull())
			resultObject.pictureUrl = value["PictureUrl"].asString();
		if(!value["SmallPicUrl"].isNull())
			resultObject.smallPicUrl = value["SmallPicUrl"].asString();
		if(!value["ShortDescription"].isNull())
			resultObject.shortDescription = value["ShortDescription"].asString();
		if(!value["AgreementUrl"].isNull())
			resultObject.agreementUrl = value["AgreementUrl"].asString();
		if(!value["DetailUrl"].isNull())
			resultObject.detailUrl = value["DetailUrl"].asString();
		if(!value["BuyUrl"].isNull())
			resultObject.buyUrl = value["BuyUrl"].asString();
		if(!value["StoreUrl"].isNull())
			resultObject.storeUrl = value["StoreUrl"].asString();
		if(!value["Score"].isNull())
			resultObject.score = std::stof(value["Score"].asString());
		if(!value["UserCount"].isNull())
			resultObject.userCount = std::stol(value["UserCount"].asString());
		if(!value["SupportIO"].isNull())
			resultObject.supportIO = value["SupportIO"].asString() == "true";
		if(!value["CreatedOn"].isNull())
			resultObject.createdOn = std::stol(value["CreatedOn"].asString());
		auto allImages = value["Images"]["Image"];
		for (auto value : allImages)
		{
			ImageProduct::Image imagesObject;
			if(!value["Version"].isNull())
				imagesObject.version = value["Version"].asString();
			if(!value["VersionDescription"].isNull())
				imagesObject.versionDescription = value["VersionDescription"].asString();
			if(!value["ImageId"].isNull())
				imagesObject.imageId = value["ImageId"].asString();
			if(!value["ImageSize"].isNull())
				imagesObject.imageSize = std::stoi(value["ImageSize"].asString());
			if(!value["Region"].isNull())
				imagesObject.region = value["Region"].asString();
			if(!value["IsDefault"].isNull())
				imagesObject.isDefault = value["IsDefault"].asString() == "true";
			if(!value["SupportIO"].isNull())
				imagesObject.supportIO = value["SupportIO"].asString() == "true";
			auto allDiskDeviceMappings = value["DiskDeviceMappings"]["DiskDeviceMapping"];
			for (auto value : allDiskDeviceMappings)
			{
				ImageProduct::Image::DiskDeviceMapping diskDeviceMappingsObject;
				if(!value["DiskType"].isNull())
					diskDeviceMappingsObject.diskType = value["DiskType"].asString();
				if(!value["Format"].isNull())
					diskDeviceMappingsObject.format = value["Format"].asString();
				if(!value["SnapshotId"].isNull())
					diskDeviceMappingsObject.snapshotId = value["SnapshotId"].asString();
				if(!value["Size"].isNull())
					diskDeviceMappingsObject.size = std::stoi(value["Size"].asString());
				if(!value["Device"].isNull())
					diskDeviceMappingsObject.device = value["Device"].asString();
				if(!value["ImportOSSBucket"].isNull())
					diskDeviceMappingsObject.importOSSBucket = value["ImportOSSBucket"].asString();
				if(!value["ImportOSSObject"].isNull())
					diskDeviceMappingsObject.importOSSObject = value["ImportOSSObject"].asString();
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
		auto allRules = value["Rules"]["Rule"];
		for (auto value : allRules)
		{
			ImageProduct::PriceInfo::Rule ruleObject;
			if(!value["RuleId"].isNull())
				ruleObject.ruleId = std::stol(value["RuleId"].asString());
			if(!value["Title"].isNull())
				ruleObject.title = value["Title"].asString();
			if(!value["Name"].isNull())
				ruleObject.name = value["Name"].asString();
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

