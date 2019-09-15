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

#include <alibabacloud/aegis/model/DescribeEcsStsStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeEcsStsStatusResult::DescribeEcsStsStatusResult() :
	ServiceResult()
{}

DescribeEcsStsStatusResult::DescribeEcsStsStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEcsStsStatusResult::~DescribeEcsStsStatusResult()
{}

void DescribeEcsStsStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Grant"].isNull())
		grant_ = value["Grant"].asString() == "true";

}

bool DescribeEcsStsStatusResult::getGrant()const
{
	return grant_;
}

