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

#include <alibabacloud/config/model/ListSupportedProductsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListSupportedProductsResult::ListSupportedProductsResult() :
	ServiceResult()
{}

ListSupportedProductsResult::ListSupportedProductsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSupportedProductsResult::~ListSupportedProductsResult()
{}

void ListSupportedProductsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProductsNode = value["Products"]["Data"];
	for (auto valueProductsData : allProductsNode)
	{
		Data productsObject;
		if(!valueProductsData["ProductNameEn"].isNull())
			productsObject.productNameEn = valueProductsData["ProductNameEn"].asString();
		if(!valueProductsData["ProductNameZh"].isNull())
			productsObject.productNameZh = valueProductsData["ProductNameZh"].asString();
		if(!valueProductsData["ProductCode"].isNull())
			productsObject.productCode = valueProductsData["ProductCode"].asString();
		auto allResourceTypeListNode = valueProductsData["ResourceTypeList"]["ResourceType"];
		for (auto valueProductsDataResourceTypeListResourceType : allResourceTypeListNode)
		{
			Data::ResourceType resourceTypeListObject;
			if(!valueProductsDataResourceTypeListResourceType["ResourceType"].isNull())
				resourceTypeListObject.resourceType = valueProductsDataResourceTypeListResourceType["ResourceType"].asString();
			if(!valueProductsDataResourceTypeListResourceType["TypeNameEn"].isNull())
				resourceTypeListObject.typeNameEn = valueProductsDataResourceTypeListResourceType["TypeNameEn"].asString();
			if(!valueProductsDataResourceTypeListResourceType["TypeNameZh"].isNull())
				resourceTypeListObject.typeNameZh = valueProductsDataResourceTypeListResourceType["TypeNameZh"].asString();
			if(!valueProductsDataResourceTypeListResourceType["TypePageLink"].isNull())
				resourceTypeListObject.typePageLink = valueProductsDataResourceTypeListResourceType["TypePageLink"].asString();
			productsObject.resourceTypeList.push_back(resourceTypeListObject);
		}
		products_.push_back(productsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();

}

std::vector<ListSupportedProductsResult::Data> ListSupportedProductsResult::getProducts()const
{
	return products_;
}

std::string ListSupportedProductsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListSupportedProductsResult::getMaxResults()const
{
	return maxResults_;
}

