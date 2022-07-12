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

#include <alibabacloud/antiddos-public/model/DescribeDdosCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeDdosCountResult::DescribeDdosCountResult() :
	ServiceResult()
{}

DescribeDdosCountResult::DescribeDdosCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDdosCountResult::~DescribeDdosCountResult()
{}

void DescribeDdosCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ddosCountNode = value["DdosCount"];
	if(!ddosCountNode["BlackholeCount"].isNull())
		ddosCount_.blackholeCount = std::stoi(ddosCountNode["BlackholeCount"].asString());
	if(!ddosCountNode["InstacenCount"].isNull())
		ddosCount_.instacenCount = std::stoi(ddosCountNode["InstacenCount"].asString());
	if(!ddosCountNode["DefenseCount"].isNull())
		ddosCount_.defenseCount = std::stoi(ddosCountNode["DefenseCount"].asString());

}

DescribeDdosCountResult::DdosCount DescribeDdosCountResult::getDdosCount()const
{
	return ddosCount_;
}

