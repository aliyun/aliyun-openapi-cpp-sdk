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

#include <alibabacloud/goodstech/model/ClassifyCommodityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Goodstech;
using namespace AlibabaCloud::Goodstech::Model;

ClassifyCommodityResult::ClassifyCommodityResult() :
	ServiceResult()
{}

ClassifyCommodityResult::ClassifyCommodityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ClassifyCommodityResult::~ClassifyCommodityResult()
{}

void ClassifyCommodityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCategoriesNode = dataNode["Categories"]["Category"];
	for (auto dataNodeCategoriesCategory : allCategoriesNode)
	{
		Data::Category categoryObject;
		if(!dataNodeCategoriesCategory["Score"].isNull())
			categoryObject.score = std::stof(dataNodeCategoriesCategory["Score"].asString());
		if(!dataNodeCategoriesCategory["CategoryName"].isNull())
			categoryObject.categoryName = dataNodeCategoriesCategory["CategoryName"].asString();
		if(!dataNodeCategoriesCategory["CategoryId"].isNull())
			categoryObject.categoryId = dataNodeCategoriesCategory["CategoryId"].asString();
		data_.categories.push_back(categoryObject);
	}

}

ClassifyCommodityResult::Data ClassifyCommodityResult::getData()const
{
	return data_;
}

