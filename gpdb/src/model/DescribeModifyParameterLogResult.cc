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

#include <alibabacloud/gpdb/model/DescribeModifyParameterLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeModifyParameterLogResult::DescribeModifyParameterLogResult() :
	ServiceResult()
{}

DescribeModifyParameterLogResult::DescribeModifyParameterLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeModifyParameterLogResult::~DescribeModifyParameterLogResult()
{}

void DescribeModifyParameterLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChangelogsNode = value["Changelogs"]["ChangelogsItem"];
	for (auto valueChangelogsChangelogsItem : allChangelogsNode)
	{
		ChangelogsItem changelogsObject;
		if(!valueChangelogsChangelogsItem["ParameterValueAfter"].isNull())
			changelogsObject.parameterValueAfter = valueChangelogsChangelogsItem["ParameterValueAfter"].asString();
		if(!valueChangelogsChangelogsItem["ParameterName"].isNull())
			changelogsObject.parameterName = valueChangelogsChangelogsItem["ParameterName"].asString();
		if(!valueChangelogsChangelogsItem["EffectTime"].isNull())
			changelogsObject.effectTime = valueChangelogsChangelogsItem["EffectTime"].asString();
		if(!valueChangelogsChangelogsItem["ParameterValueBefore"].isNull())
			changelogsObject.parameterValueBefore = valueChangelogsChangelogsItem["ParameterValueBefore"].asString();
		if(!valueChangelogsChangelogsItem["ParameterValid"].isNull())
			changelogsObject.parameterValid = valueChangelogsChangelogsItem["ParameterValid"].asString();
		changelogs_.push_back(changelogsObject);
	}

}

std::vector<DescribeModifyParameterLogResult::ChangelogsItem> DescribeModifyParameterLogResult::getChangelogs()const
{
	return changelogs_;
}

