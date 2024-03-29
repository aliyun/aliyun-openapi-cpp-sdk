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

#include <alibabacloud/sas/model/DescribeAttackAnalysisDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAttackAnalysisDataResult::DescribeAttackAnalysisDataResult() :
	ServiceResult()
{}

DescribeAttackAnalysisDataResult::DescribeAttackAnalysisDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAttackAnalysisDataResult::~DescribeAttackAnalysisDataResult()
{}

void DescribeAttackAnalysisDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());

}

int DescribeAttackAnalysisDataResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAttackAnalysisDataResult::getTotal()const
{
	return total_;
}

std::string DescribeAttackAnalysisDataResult::getData()const
{
	return data_;
}

int DescribeAttackAnalysisDataResult::getPage()const
{
	return page_;
}

