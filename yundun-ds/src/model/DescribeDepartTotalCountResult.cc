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

#include <alibabacloud/yundun-ds/model/DescribeDepartTotalCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDepartTotalCountResult::DescribeDepartTotalCountResult() :
	ServiceResult()
{}

DescribeDepartTotalCountResult::DescribeDepartTotalCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDepartTotalCountResult::~DescribeDepartTotalCountResult()
{}

void DescribeDepartTotalCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto departCountNode = value["DepartCount"];
	if(!departCountNode["DepartCount"].isNull())
		departCount_.departCount = std::stol(departCountNode["DepartCount"].asString());
	if(!departCountNode["Count"].isNull())
		departCount_.count = std::stol(departCountNode["Count"].asString());
	if(!departCountNode["UserCount"].isNull())
		departCount_.userCount = std::stol(departCountNode["UserCount"].asString());
	if(!departCountNode["DtCount"].isNull())
		departCount_.dtCount = std::stol(departCountNode["DtCount"].asString());
	if(!departCountNode["SubCount"].isNull())
		departCount_.subCount = std::stol(departCountNode["SubCount"].asString());
	if(!departCountNode["SensitiveCount"].isNull())
		departCount_.sensitiveCount = std::stol(departCountNode["SensitiveCount"].asString());

}

DescribeDepartTotalCountResult::DepartCount DescribeDepartTotalCountResult::getDepartCount()const
{
	return departCount_;
}

