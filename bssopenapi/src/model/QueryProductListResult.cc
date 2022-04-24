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

#include <alibabacloud/bssopenapi/model/QueryProductListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryProductListResult::QueryProductListResult() :
	ServiceResult()
{}

QueryProductListResult::QueryProductListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryProductListResult::~QueryProductListResult()
{}

void QueryProductListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allProductListNode = dataNode["ProductList"]["Product"];
	for (auto dataNodeProductListProduct : allProductListNode)
	{
		Data::Product productObject;
		if(!dataNodeProductListProduct["ProductName"].isNull())
			productObject.productName = dataNodeProductListProduct["ProductName"].asString();
		if(!dataNodeProductListProduct["ProductType"].isNull())
			productObject.productType = dataNodeProductListProduct["ProductType"].asString();
		if(!dataNodeProductListProduct["SubscriptionType"].isNull())
			productObject.subscriptionType = dataNodeProductListProduct["SubscriptionType"].asString();
		if(!dataNodeProductListProduct["ProductCode"].isNull())
			productObject.productCode = dataNodeProductListProduct["ProductCode"].asString();
		data_.productList.push_back(productObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryProductListResult::getMessage()const
{
	return message_;
}

QueryProductListResult::Data QueryProductListResult::getData()const
{
	return data_;
}

std::string QueryProductListResult::getCode()const
{
	return code_;
}

bool QueryProductListResult::getSuccess()const
{
	return success_;
}

