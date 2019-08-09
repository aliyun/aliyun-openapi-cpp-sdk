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

#include <alibabacloud/ehpc/model/DescribeImagePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeImagePriceResult::DescribeImagePriceResult() :
	ServiceResult()
{}

DescribeImagePriceResult::DescribeImagePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagePriceResult::~DescribeImagePriceResult()
{}

void DescribeImagePriceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["DiscountPrice"].isNull())
		discountPrice_ = std::stof(value["DiscountPrice"].asString());
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = std::stof(value["OriginalPrice"].asString());
	if(!value["TradePrice"].isNull())
		tradePrice_ = std::stof(value["TradePrice"].asString());
	if(!value["Amount"].isNull())
		amount_ = std::stoi(value["Amount"].asString());

}

float DescribeImagePriceResult::getOriginalPrice()const
{
	return originalPrice_;
}

float DescribeImagePriceResult::getDiscountPrice()const
{
	return discountPrice_;
}

int DescribeImagePriceResult::getAmount()const
{
	return amount_;
}

std::string DescribeImagePriceResult::getImageId()const
{
	return imageId_;
}

float DescribeImagePriceResult::getTradePrice()const
{
	return tradePrice_;
}

