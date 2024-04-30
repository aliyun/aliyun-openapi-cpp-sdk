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

#include <alibabacloud/dcdn/model/DescribeDcdnUserSecDropResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnUserSecDropResult::DescribeDcdnUserSecDropResult() :
	ServiceResult()
{}

DescribeDcdnUserSecDropResult::DescribeDcdnUserSecDropResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnUserSecDropResult::~DescribeDcdnUserSecDropResult()
{}

void DescribeDcdnUserSecDropResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Drops"].isNull())
		drops_ = std::stoi(value["Drops"].asString());
	if(!value["UuidStr"].isNull())
		uuidStr_ = value["UuidStr"].asString();

}

std::string DescribeDcdnUserSecDropResult::getMsg()const
{
	return msg_;
}

int DescribeDcdnUserSecDropResult::getDrops()const
{
	return drops_;
}

std::string DescribeDcdnUserSecDropResult::getUuidStr()const
{
	return uuidStr_;
}

