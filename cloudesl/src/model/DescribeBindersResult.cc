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

#include <alibabacloud/cloudesl/model/DescribeBindersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeBindersResult::DescribeBindersResult() :
	ServiceResult()
{}

DescribeBindersResult::DescribeBindersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBindersResult::~DescribeBindersResult()
{}

void DescribeBindersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEslItemBindInfosNode = value["EslItemBindInfos"]["EslItemBindInfo"];
	for (auto valueEslItemBindInfosEslItemBindInfo : allEslItemBindInfosNode)
	{
		EslItemBindInfo eslItemBindInfosObject;
		if(!valueEslItemBindInfosEslItemBindInfo["EslBarCode"].isNull())
			eslItemBindInfosObject.eslBarCode = valueEslItemBindInfosEslItemBindInfo["EslBarCode"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["TemplateSceneId"].isNull())
			eslItemBindInfosObject.templateSceneId = valueEslItemBindInfosEslItemBindInfo["TemplateSceneId"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["ActionPrice"].isNull())
			eslItemBindInfosObject.actionPrice = valueEslItemBindInfosEslItemBindInfo["ActionPrice"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["ItemTitle"].isNull())
			eslItemBindInfosObject.itemTitle = valueEslItemBindInfosEslItemBindInfo["ItemTitle"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["PromotionStart"].isNull())
			eslItemBindInfosObject.promotionStart = valueEslItemBindInfosEslItemBindInfo["PromotionStart"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["PriceUnit"].isNull())
			eslItemBindInfosObject.priceUnit = valueEslItemBindInfosEslItemBindInfo["PriceUnit"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["OriginalPrice"].isNull())
			eslItemBindInfosObject.originalPrice = valueEslItemBindInfosEslItemBindInfo["OriginalPrice"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["ItemId"].isNull())
			eslItemBindInfosObject.itemId = valueEslItemBindInfosEslItemBindInfo["ItemId"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["GmtModified"].isNull())
			eslItemBindInfosObject.gmtModified = valueEslItemBindInfosEslItemBindInfo["GmtModified"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["EslPic"].isNull())
			eslItemBindInfosObject.eslPic = valueEslItemBindInfosEslItemBindInfo["EslPic"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["StoreId"].isNull())
			eslItemBindInfosObject.storeId = valueEslItemBindInfosEslItemBindInfo["StoreId"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["ItemShortTitle"].isNull())
			eslItemBindInfosObject.itemShortTitle = valueEslItemBindInfosEslItemBindInfo["ItemShortTitle"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["BindId"].isNull())
			eslItemBindInfosObject.bindId = valueEslItemBindInfosEslItemBindInfo["BindId"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["PromotionText"].isNull())
			eslItemBindInfosObject.promotionText = valueEslItemBindInfosEslItemBindInfo["PromotionText"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["EslModel"].isNull())
			eslItemBindInfosObject.eslModel = valueEslItemBindInfosEslItemBindInfo["EslModel"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["BePromotion"].isNull())
			eslItemBindInfosObject.bePromotion = valueEslItemBindInfosEslItemBindInfo["BePromotion"].asString() == "true";
		if(!valueEslItemBindInfosEslItemBindInfo["SkuId"].isNull())
			eslItemBindInfosObject.skuId = valueEslItemBindInfosEslItemBindInfo["SkuId"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["EslConnectAp"].isNull())
			eslItemBindInfosObject.eslConnectAp = valueEslItemBindInfosEslItemBindInfo["EslConnectAp"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["EslStatus"].isNull())
			eslItemBindInfosObject.eslStatus = valueEslItemBindInfosEslItemBindInfo["EslStatus"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["TemplateId"].isNull())
			eslItemBindInfosObject.templateId = valueEslItemBindInfosEslItemBindInfo["TemplateId"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["PromotionEnd"].isNull())
			eslItemBindInfosObject.promotionEnd = valueEslItemBindInfosEslItemBindInfo["PromotionEnd"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["ItemBarCode"].isNull())
			eslItemBindInfosObject.itemBarCode = valueEslItemBindInfosEslItemBindInfo["ItemBarCode"].asString();
		if(!valueEslItemBindInfosEslItemBindInfo["ContainerName"].isNull())
			eslItemBindInfosObject.containerName = valueEslItemBindInfosEslItemBindInfo["ContainerName"].asString();
		eslItemBindInfos_.push_back(eslItemBindInfosObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

int DescribeBindersResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeBindersResult::getMessage()const
{
	return message_;
}

int DescribeBindersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBindersResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeBindersResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeBindersResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeBindersResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeBindersResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeBindersResult::getCode()const
{
	return code_;
}

bool DescribeBindersResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeBindersResult::EslItemBindInfo> DescribeBindersResult::getEslItemBindInfos()const
{
	return eslItemBindInfos_;
}

