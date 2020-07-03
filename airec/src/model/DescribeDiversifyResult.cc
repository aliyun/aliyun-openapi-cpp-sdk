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

#include <alibabacloud/airec/model/DescribeDiversifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeDiversifyResult::DescribeDiversifyResult() :
	ServiceResult()
{}

DescribeDiversifyResult::DescribeDiversifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiversifyResult::~DescribeDiversifyResult()
{}

void DescribeDiversifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto _parameterNode = resultNode["Parameter"];
	if(!_parameterNode["CategoryIndex"].isNull())
		result_._parameter.categoryIndex = std::stoi(_parameterNode["CategoryIndex"].asString());
	if(!_parameterNode["Window"].isNull())
		result_._parameter.window = std::stoi(_parameterNode["Window"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDiversifyResult::getMessage()const
{
	return message_;
}

std::string DescribeDiversifyResult::getCode()const
{
	return code_;
}

DescribeDiversifyResult::Result DescribeDiversifyResult::getResult()const
{
	return result_;
}

