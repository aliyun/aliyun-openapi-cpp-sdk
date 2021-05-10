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

#include <alibabacloud/dcdn/model/DescribeDcdnSecFuncInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnSecFuncInfoResult::DescribeDcdnSecFuncInfoResult() :
	ServiceResult()
{}

DescribeDcdnSecFuncInfoResult::DescribeDcdnSecFuncInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnSecFuncInfoResult::~DescribeDcdnSecFuncInfoResult()
{}

void DescribeDcdnSecFuncInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["ContentItem"];
	for (auto valueContentContentItem : allContentNode)
	{
		ContentItem contentObject;
		if(!valueContentContentItem["Label"].isNull())
			contentObject.label = valueContentContentItem["Label"].asString();
		if(!valueContentContentItem["Value"].isNull())
			contentObject.value = valueContentContentItem["Value"].asString();
		content_.push_back(contentObject);
	}
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["RetCode"].isNull())
		retCode_ = value["RetCode"].asString();
	if(!value["HttpStatus"].isNull())
		httpStatus_ = value["HttpStatus"].asString();

}

std::string DescribeDcdnSecFuncInfoResult::getDescription()const
{
	return description_;
}

std::string DescribeDcdnSecFuncInfoResult::getRetCode()const
{
	return retCode_;
}

std::string DescribeDcdnSecFuncInfoResult::getHttpStatus()const
{
	return httpStatus_;
}

std::vector<DescribeDcdnSecFuncInfoResult::ContentItem> DescribeDcdnSecFuncInfoResult::getContent()const
{
	return content_;
}

