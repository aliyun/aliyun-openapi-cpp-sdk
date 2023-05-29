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

#include <alibabacloud/market/model/DescribeProductsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeProductsResult::DescribeProductsResult() :
	ServiceResult()
{}

DescribeProductsResult::DescribeProductsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProductsResult::~DescribeProductsResult()
{}

void DescribeProductsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProductItemsNode = value["ProductItems"]["ProductItem"];
	for (auto valueProductItemsProductItem : allProductItemsNode)
	{
		ProductItem productItemsObject;
		if(!valueProductItemsProductItem["PriceInfo"].isNull())
			productItemsObject.priceInfo = valueProductItemsProductItem["PriceInfo"].asString();
		if(!valueProductItemsProductItem["DeliveryWay"].isNull())
			productItemsObject.deliveryWay = valueProductItemsProductItem["DeliveryWay"].asString();
		if(!valueProductItemsProductItem["ImageUrl"].isNull())
			productItemsObject.imageUrl = valueProductItemsProductItem["ImageUrl"].asString();
		if(!valueProductItemsProductItem["WarrantyDate"].isNull())
			productItemsObject.warrantyDate = valueProductItemsProductItem["WarrantyDate"].asString();
		if(!valueProductItemsProductItem["Tags"].isNull())
			productItemsObject.tags = valueProductItemsProductItem["Tags"].asString();
		if(!valueProductItemsProductItem["Score"].isNull())
			productItemsObject.score = valueProductItemsProductItem["Score"].asString();
		if(!valueProductItemsProductItem["SupplierId"].isNull())
			productItemsObject.supplierId = std::stol(valueProductItemsProductItem["SupplierId"].asString());
		if(!valueProductItemsProductItem["OperationSystem"].isNull())
			productItemsObject.operationSystem = valueProductItemsProductItem["OperationSystem"].asString();
		if(!valueProductItemsProductItem["ShortDescription"].isNull())
			productItemsObject.shortDescription = valueProductItemsProductItem["ShortDescription"].asString();
		if(!valueProductItemsProductItem["DeliveryDate"].isNull())
			productItemsObject.deliveryDate = valueProductItemsProductItem["DeliveryDate"].asString();
		if(!valueProductItemsProductItem["TargetUrl"].isNull())
			productItemsObject.targetUrl = valueProductItemsProductItem["TargetUrl"].asString();
		if(!valueProductItemsProductItem["Code"].isNull())
			productItemsObject.code = valueProductItemsProductItem["Code"].asString();
		if(!valueProductItemsProductItem["CategoryId"].isNull())
			productItemsObject.categoryId = std::stol(valueProductItemsProductItem["CategoryId"].asString());
		if(!valueProductItemsProductItem["Name"].isNull())
			productItemsObject.name = valueProductItemsProductItem["Name"].asString();
		if(!valueProductItemsProductItem["SuggestedPrice"].isNull())
			productItemsObject.suggestedPrice = valueProductItemsProductItem["SuggestedPrice"].asString();
		if(!valueProductItemsProductItem["SupplierName"].isNull())
			productItemsObject.supplierName = valueProductItemsProductItem["SupplierName"].asString();
		productItems_.push_back(productItemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeProductsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeProductsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeProductsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeProductsResult::ProductItem> DescribeProductsResult::getProductItems()const
{
	return productItems_;
}

