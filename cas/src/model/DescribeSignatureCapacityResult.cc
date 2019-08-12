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

#include <alibabacloud/cas/model/DescribeSignatureCapacityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeSignatureCapacityResult::DescribeSignatureCapacityResult() :
	ServiceResult()
{}

DescribeSignatureCapacityResult::DescribeSignatureCapacityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignatureCapacityResult::~DescribeSignatureCapacityResult()
{}

void DescribeSignatureCapacityResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["RemainCount"].isNull())
		remainCount_ = std::stoi(value["RemainCount"].asString());
	if(!value["UsedCount"].isNull())
		usedCount_ = std::stoi(value["UsedCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSignatureCapacityResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSignatureCapacityResult::getRemainCount()const
{
	return remainCount_;
}

int DescribeSignatureCapacityResult::getUsedCount()const
{
	return usedCount_;
}

