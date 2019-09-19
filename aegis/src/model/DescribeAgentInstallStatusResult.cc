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

#include <alibabacloud/aegis/model/DescribeAgentInstallStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAgentInstallStatusResult::DescribeAgentInstallStatusResult() :
	ServiceResult()
{}

DescribeAgentInstallStatusResult::DescribeAgentInstallStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAgentInstallStatusResult::~DescribeAgentInstallStatusResult()
{}

void DescribeAgentInstallStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAegisClientInvokeStatusResponseListNode = value["AegisClientInvokeStatusResponseList"]["AegisClientInvokeStatusResponse"];
	for (auto valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse : allAegisClientInvokeStatusResponseListNode)
	{
		AegisClientInvokeStatusResponse aegisClientInvokeStatusResponseListObject;
		if(!valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["Uuid"].isNull())
			aegisClientInvokeStatusResponseListObject.uuid = valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["Uuid"].asString();
		if(!valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["Message"].isNull())
			aegisClientInvokeStatusResponseListObject.message = valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["Message"].asString();
		if(!valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["Result"].isNull())
			aegisClientInvokeStatusResponseListObject.result = std::stoi(valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["Result"].asString());
		if(!valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["ResuleCode"].isNull())
			aegisClientInvokeStatusResponseListObject.resuleCode = valueAegisClientInvokeStatusResponseListAegisClientInvokeStatusResponse["ResuleCode"].asString();
		aegisClientInvokeStatusResponseList_.push_back(aegisClientInvokeStatusResponseListObject);
	}

}

std::vector<DescribeAgentInstallStatusResult::AegisClientInvokeStatusResponse> DescribeAgentInstallStatusResult::getAegisClientInvokeStatusResponseList()const
{
	return aegisClientInvokeStatusResponseList_;
}

