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

#include <alibabacloud/sgw/model/DescribePayAsYouGoPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribePayAsYouGoPriceResult::DescribePayAsYouGoPriceResult() :
	ServiceResult()
{}

DescribePayAsYouGoPriceResult::DescribePayAsYouGoPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePayAsYouGoPriceResult::~DescribePayAsYouGoPriceResult()
{}

void DescribePayAsYouGoPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["GatewayClassPrice"].isNull())
		gatewayClassPrice_ = std::stof(value["GatewayClassPrice"].asString());
	if(!value["CacheCloudEfficiencySizePrice"].isNull())
		cacheCloudEfficiencySizePrice_ = std::stof(value["CacheCloudEfficiencySizePrice"].asString());
	if(!value["CacheCloudSSDSizePrice"].isNull())
		cacheCloudSSDSizePrice_ = std::stof(value["CacheCloudSSDSizePrice"].asString());

}

std::string DescribePayAsYouGoPriceResult::getMessage()const
{
	return message_;
}

std::string DescribePayAsYouGoPriceResult::getCurrency()const
{
	return currency_;
}

float DescribePayAsYouGoPriceResult::getGatewayClassPrice()const
{
	return gatewayClassPrice_;
}

float DescribePayAsYouGoPriceResult::getCacheCloudEfficiencySizePrice()const
{
	return cacheCloudEfficiencySizePrice_;
}

std::string DescribePayAsYouGoPriceResult::getCode()const
{
	return code_;
}

bool DescribePayAsYouGoPriceResult::getSuccess()const
{
	return success_;
}

float DescribePayAsYouGoPriceResult::getCacheCloudSSDSizePrice()const
{
	return cacheCloudSSDSizePrice_;
}

