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

#include <alibabacloud/airec/model/DescribeSceneBucketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeSceneBucketResult::DescribeSceneBucketResult() :
	ServiceResult()
{}

DescribeSceneBucketResult::DescribeSceneBucketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSceneBucketResult::~DescribeSceneBucketResult()
{}

void DescribeSceneBucketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["num"].isNull())
		result_.num = std::stoi(resultNode["num"].asString());
	if(!resultNode["inUse"].isNull())
		result_.inUse = resultNode["inUse"].asString();
	if(!resultNode["detail"].isNull())
		result_.detail = resultNode["detail"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeSceneBucketResult::getRequestId()const
{
	return requestId_;
}

DescribeSceneBucketResult::Result DescribeSceneBucketResult::getResult()const
{
	return result_;
}

