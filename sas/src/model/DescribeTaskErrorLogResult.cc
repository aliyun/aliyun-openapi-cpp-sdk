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

#include <alibabacloud/sas/model/DescribeTaskErrorLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeTaskErrorLogResult::DescribeTaskErrorLogResult() :
	ServiceResult()
{}

DescribeTaskErrorLogResult::DescribeTaskErrorLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTaskErrorLogResult::~DescribeTaskErrorLogResult()
{}

void DescribeTaskErrorLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["Log"];
	for (auto valueLogsLog : allLogsNode)
	{
		Log logsObject;
		if(!valueLogsLog["Text"].isNull())
			logsObject.text = valueLogsLog["Text"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeTaskErrorLogResult::Log> DescribeTaskErrorLogResult::getLogs()const
{
	return logs_;
}

int DescribeTaskErrorLogResult::getCount()const
{
	return count_;
}

