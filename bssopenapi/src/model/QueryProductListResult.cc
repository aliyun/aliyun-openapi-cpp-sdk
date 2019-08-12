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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allProductList = value["ProductList"]["Product"];
	for (auto value : allProductList)
	{
		Data::Product productObject;
		if(!value["ProductCode"].isNull())
			productObject.productCode = value["ProductCode"].asString();
		if(!value["ProductName"].isNull())
			productObject.productName = value["ProductName"].asString();
		if(!value["ProductType"].isNull())
			productObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			productObject.subscriptionType = value["SubscriptionType"].asString();
		data_.productList.push_back(productObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

