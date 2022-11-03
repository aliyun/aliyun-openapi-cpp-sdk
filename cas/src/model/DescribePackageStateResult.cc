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

#include <alibabacloud/cas/model/DescribePackageStateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribePackageStateResult::DescribePackageStateResult() :
	ServiceResult()
{}

DescribePackageStateResult::DescribePackageStateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePackageStateResult::~DescribePackageStateResult()
{}

void DescribePackageStateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IssuedCount"].isNull())
		issuedCount_ = std::stol(value["IssuedCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();
	if(!value["UsedCount"].isNull())
		usedCount_ = std::stol(value["UsedCount"].asString());

}

long DescribePackageStateResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribePackageStateResult::getProductCode()const
{
	return productCode_;
}

long DescribePackageStateResult::getUsedCount()const
{
	return usedCount_;
}

long DescribePackageStateResult::getIssuedCount()const
{
	return issuedCount_;
}

