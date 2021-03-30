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

#include <alibabacloud/airec/model/DescribeExperimentEnvProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeExperimentEnvProgressResult::DescribeExperimentEnvProgressResult() :
	ServiceResult()
{}

DescribeExperimentEnvProgressResult::DescribeExperimentEnvProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExperimentEnvProgressResult::~DescribeExperimentEnvProgressResult()
{}

void DescribeExperimentEnvProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["progress"].isNull())
		result_.progress = std::stoi(resultNode["progress"].asString());
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeExperimentEnvProgressResult::getRequestId()const
{
	return requestId_;
}

DescribeExperimentEnvProgressResult::Result DescribeExperimentEnvProgressResult::getResult()const
{
	return result_;
}

