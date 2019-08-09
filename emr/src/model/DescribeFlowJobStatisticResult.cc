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

#include <alibabacloud/emr/model/DescribeFlowJobStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowJobStatisticResult::DescribeFlowJobStatisticResult() :
	ServiceResult()
{}

DescribeFlowJobStatisticResult::DescribeFlowJobStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowJobStatisticResult::~DescribeFlowJobStatisticResult()
{}

void DescribeFlowJobStatisticResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["StatisticInfo"].isNull())
		statisticInfo_ = value["StatisticInfo"].asString();

}

std::string DescribeFlowJobStatisticResult::getStatisticInfo()const
{
	return statisticInfo_;
}

