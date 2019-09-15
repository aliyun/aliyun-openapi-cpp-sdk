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

#include <alibabacloud/aegis/model/DescribeScreenFlowRequestCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenFlowRequestCountResult::DescribeScreenFlowRequestCountResult() :
	ServiceResult()
{}

DescribeScreenFlowRequestCountResult::DescribeScreenFlowRequestCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenFlowRequestCountResult::~DescribeScreenFlowRequestCountResult()
{}

void DescribeScreenFlowRequestCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RequestTotalCount"].isNull())
		requestTotalCount_ = std::stoi(value["RequestTotalCount"].asString());
	if(!value["FlowTotalCount"].isNull())
		flowTotalCount_ = std::stoi(value["FlowTotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeScreenFlowRequestCountResult::getFlowTotalCount()const
{
	return flowTotalCount_;
}

int DescribeScreenFlowRequestCountResult::getRequestTotalCount()const
{
	return requestTotalCount_;
}

bool DescribeScreenFlowRequestCountResult::getSuccess()const
{
	return success_;
}

