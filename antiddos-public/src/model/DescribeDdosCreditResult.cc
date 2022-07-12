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

#include <alibabacloud/antiddos-public/model/DescribeDdosCreditResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeDdosCreditResult::DescribeDdosCreditResult() :
	ServiceResult()
{}

DescribeDdosCreditResult::DescribeDdosCreditResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDdosCreditResult::~DescribeDdosCreditResult()
{}

void DescribeDdosCreditResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ddosCreditNode = value["DdosCredit"];
	if(!ddosCreditNode["Score"].isNull())
		ddosCredit_.score = std::stoi(ddosCreditNode["Score"].asString());
	if(!ddosCreditNode["ScoreLevel"].isNull())
		ddosCredit_.scoreLevel = ddosCreditNode["ScoreLevel"].asString();
	if(!ddosCreditNode["BlackholeTime"].isNull())
		ddosCredit_.blackholeTime = std::stoi(ddosCreditNode["BlackholeTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeDdosCreditResult::DdosCredit DescribeDdosCreditResult::getDdosCredit()const
{
	return ddosCredit_;
}

bool DescribeDdosCreditResult::getSuccess()const
{
	return success_;
}

