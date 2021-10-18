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

#include <alibabacloud/waf-openapi/model/DescribeAsyncTaskStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeAsyncTaskStatusResult::DescribeAsyncTaskStatusResult() :
	ServiceResult()
{}

DescribeAsyncTaskStatusResult::DescribeAsyncTaskStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAsyncTaskStatusResult::~DescribeAsyncTaskStatusResult()
{}

void DescribeAsyncTaskStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AsyncTaskStatus"].isNull())
		result_.asyncTaskStatus = resultNode["AsyncTaskStatus"].asString();
	if(!resultNode["Progress"].isNull())
		result_.progress = std::stoi(resultNode["Progress"].asString());
	if(!resultNode["ErrCode"].isNull())
		result_.errCode = resultNode["ErrCode"].asString();
	if(!resultNode["ErrMsg"].isNull())
		result_.errMsg = resultNode["ErrMsg"].asString();
	if(!resultNode["Data"].isNull())
		result_.data = resultNode["Data"].asString();

}

DescribeAsyncTaskStatusResult::Result DescribeAsyncTaskStatusResult::getResult()const
{
	return result_;
}

