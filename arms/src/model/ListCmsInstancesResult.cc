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

#include <alibabacloud/arms/model/ListCmsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListCmsInstancesResult::ListCmsInstancesResult() :
	ServiceResult()
{}

ListCmsInstancesResult::ListCmsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCmsInstancesResult::~ListCmsInstancesResult()
{}

void ListCmsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EnableTag"].isNull())
		data_.enableTag = dataNode["EnableTag"].asString() == "true";
	auto allProductsNode = dataNode["Products"]["ProductsItem"];
	for (auto dataNodeProductsProductsItem : allProductsNode)
	{
		Data::ProductsItem productsItemObject;
		if(!dataNodeProductsProductsItem["Descr"].isNull())
			productsItemObject.descr = dataNodeProductsProductsItem["Descr"].asString();
		if(!dataNodeProductsProductsItem["Instance"].isNull())
			productsItemObject.instance = dataNodeProductsProductsItem["Instance"].asString();
		if(!dataNodeProductsProductsItem["Prod"].isNull())
			productsItemObject.prod = dataNodeProductsProductsItem["Prod"].asString();
		if(!dataNodeProductsProductsItem["Name"].isNull())
			productsItemObject.name = dataNodeProductsProductsItem["Name"].asString();
		if(!dataNodeProductsProductsItem["Id"].isNull())
			productsItemObject.id = dataNodeProductsProductsItem["Id"].asString();
		if(!dataNodeProductsProductsItem["State"].isNull())
			productsItemObject.state = dataNodeProductsProductsItem["State"].asString();
		if(!dataNodeProductsProductsItem["Time"].isNull())
			productsItemObject.time = dataNodeProductsProductsItem["Time"].asString();
		if(!dataNodeProductsProductsItem["Type"].isNull())
			productsItemObject.type = dataNodeProductsProductsItem["Type"].asString();
		if(!dataNodeProductsProductsItem["Url"].isNull())
			productsItemObject.url = dataNodeProductsProductsItem["Url"].asString();
		if(!dataNodeProductsProductsItem["Source"].isNull())
			productsItemObject.source = dataNodeProductsProductsItem["Source"].asString();
		data_.products.push_back(productsItemObject);
	}

}

ListCmsInstancesResult::Data ListCmsInstancesResult::getData()const
{
	return data_;
}

