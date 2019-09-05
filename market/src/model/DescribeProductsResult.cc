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
	auto allProductItems = value["ProductItems"]["ProductItem"];
	for (auto value : allProductItems)
	{
		ProductItem productItemsObject;
		if(!value["Code"].isNull())
			productItemsObject.code = value["Code"].asString();
		if(!value["Name"].isNull())
			productItemsObject.name = value["Name"].asString();
		if(!value["CategoryId"].isNull())
			productItemsObject.categoryId = std::stol(value["CategoryId"].asString());
		if(!value["SupplierId"].isNull())
			productItemsObject.supplierId = std::stol(value["SupplierId"].asString());
		if(!value["SupplierName"].isNull())
			productItemsObject.supplierName = value["SupplierName"].asString();
		if(!value["ShortDescription"].isNull())
			productItemsObject.shortDescription = value["ShortDescription"].asString();
		if(!value["Tags"].isNull())
			productItemsObject.tags = value["Tags"].asString();
		if(!value["SuggestedPrice"].isNull())
			productItemsObject.suggestedPrice = value["SuggestedPrice"].asString();
		if(!value["TargetUrl"].isNull())
			productItemsObject.targetUrl = value["TargetUrl"].asString();
		if(!value["ImageUrl"].isNull())
			productItemsObject.imageUrl = value["ImageUrl"].asString();
		if(!value["Score"].isNull())
			productItemsObject.score = value["Score"].asString();
		if(!value["OperationSystem"].isNull())
			productItemsObject.operationSystem = value["OperationSystem"].asString();
		if(!value["WarrantyDate"].isNull())
			productItemsObject.warrantyDate = value["WarrantyDate"].asString();
		if(!value["DeliveryDate"].isNull())
			productItemsObject.deliveryDate = value["DeliveryDate"].asString();
		if(!value["DeliveryWay"].isNull())
			productItemsObject.deliveryWay = value["DeliveryWay"].asString();
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

