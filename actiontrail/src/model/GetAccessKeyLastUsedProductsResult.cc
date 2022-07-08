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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedProductsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

GetAccessKeyLastUsedProductsResult::GetAccessKeyLastUsedProductsResult() :
	ServiceResult()
{}

GetAccessKeyLastUsedProductsResult::GetAccessKeyLastUsedProductsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccessKeyLastUsedProductsResult::~GetAccessKeyLastUsedProductsResult()
{}

void GetAccessKeyLastUsedProductsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProductsNode = value["Products"]["ProductsItem"];
	for (auto valueProductsProductsItem : allProductsNode)
	{
		ProductsItem productsObject;
		if(!valueProductsProductsItem["UsedTimestamp"].isNull())
			productsObject.usedTimestamp = std::stol(valueProductsProductsItem["UsedTimestamp"].asString());
		if(!valueProductsProductsItem["Detail"].isNull())
			productsObject.detail = valueProductsProductsItem["Detail"].asString();
		if(!valueProductsProductsItem["Source"].isNull())
			productsObject.source = valueProductsProductsItem["Source"].asString();
		if(!valueProductsProductsItem["ServiceName"].isNull())
			productsObject.serviceName = valueProductsProductsItem["ServiceName"].asString();
		if(!valueProductsProductsItem["ServiceNameCn"].isNull())
			productsObject.serviceNameCn = valueProductsProductsItem["ServiceNameCn"].asString();
		if(!valueProductsProductsItem["ServiceNameEn"].isNull())
			productsObject.serviceNameEn = valueProductsProductsItem["ServiceNameEn"].asString();
		products_.push_back(productsObject);
	}

}

std::vector<GetAccessKeyLastUsedProductsResult::ProductsItem> GetAccessKeyLastUsedProductsResult::getProducts()const
{
	return products_;
}

