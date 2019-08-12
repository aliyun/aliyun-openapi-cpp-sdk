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

#include <alibabacloud/emr/model/DescribeFlowNodeInstanceContainerLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowNodeInstanceContainerLogResult::DescribeFlowNodeInstanceContainerLogResult() :
	ServiceResult()
{}

DescribeFlowNodeInstanceContainerLogResult::DescribeFlowNodeInstanceContainerLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowNodeInstanceContainerLogResult::~DescribeFlowNodeInstanceContainerLogResult()
{}

void DescribeFlowNodeInstanceContainerLogResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allLogEntrys = value["LogEntrys"]["LogEntry"];
	for (auto value : allLogEntrys)
	{
		LogEntry logEntrysObject;
		if(!value["Content"].isNull())
			logEntrysObject.content = value["Content"].asString();
		logEntrys_.push_back(logEntrysObject);
	}
	if(!value["LogEnd"].isNull())
		logEnd_ = value["LogEnd"].asString() == "true";

}

bool DescribeFlowNodeInstanceContainerLogResult::getLogEnd()const
{
	return logEnd_;
}

std::vector<DescribeFlowNodeInstanceContainerLogResult::LogEntry> DescribeFlowNodeInstanceContainerLogResult::getLogEntrys()const
{
	return logEntrys_;
}

