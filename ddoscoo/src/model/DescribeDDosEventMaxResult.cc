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

#include <alibabacloud/ddoscoo/model/DescribeDDosEventMaxResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDosEventMaxResult::DescribeDDosEventMaxResult() :
	ServiceResult()
{}

DescribeDDosEventMaxResult::DescribeDDosEventMaxResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDosEventMaxResult::~DescribeDDosEventMaxResult()
{}

void DescribeDDosEventMaxResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Qps"].isNull())
		qps_ = std::stol(value["Qps"].asString());
	if(!value["Cps"].isNull())
		cps_ = std::stol(value["Cps"].asString());
	if(!value["Mbps"].isNull())
		mbps_ = std::stol(value["Mbps"].asString());

}

long DescribeDDosEventMaxResult::getQps()const
{
	return qps_;
}

long DescribeDDosEventMaxResult::getCps()const
{
	return cps_;
}

long DescribeDDosEventMaxResult::getMbps()const
{
	return mbps_;
}

