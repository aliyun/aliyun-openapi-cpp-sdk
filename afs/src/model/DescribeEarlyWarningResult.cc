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

#include <alibabacloud/afs/model/DescribeEarlyWarningResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeEarlyWarningResult::DescribeEarlyWarningResult() :
	ServiceResult()
{}

DescribeEarlyWarningResult::DescribeEarlyWarningResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEarlyWarningResult::~DescribeEarlyWarningResult()
{}

void DescribeEarlyWarningResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEarlyWarningsNode = value["EarlyWarnings"]["EarlyWarning"];
	for (auto valueEarlyWarningsEarlyWarning : allEarlyWarningsNode)
	{
		EarlyWarning earlyWarningsObject;
		if(!valueEarlyWarningsEarlyWarning["WarnOpen"].isNull())
			earlyWarningsObject.warnOpen = valueEarlyWarningsEarlyWarning["WarnOpen"].asString() == "true";
		if(!valueEarlyWarningsEarlyWarning["Title"].isNull())
			earlyWarningsObject.title = valueEarlyWarningsEarlyWarning["Title"].asString();
		if(!valueEarlyWarningsEarlyWarning["Content"].isNull())
			earlyWarningsObject.content = valueEarlyWarningsEarlyWarning["Content"].asString();
		if(!valueEarlyWarningsEarlyWarning["Frequency"].isNull())
			earlyWarningsObject.frequency = valueEarlyWarningsEarlyWarning["Frequency"].asString();
		if(!valueEarlyWarningsEarlyWarning["TimeOpen"].isNull())
			earlyWarningsObject.timeOpen = valueEarlyWarningsEarlyWarning["TimeOpen"].asString() == "true";
		if(!valueEarlyWarningsEarlyWarning["TimeBegin"].isNull())
			earlyWarningsObject.timeBegin = valueEarlyWarningsEarlyWarning["TimeBegin"].asString();
		if(!valueEarlyWarningsEarlyWarning["TimeEnd"].isNull())
			earlyWarningsObject.timeEnd = valueEarlyWarningsEarlyWarning["TimeEnd"].asString();
		if(!valueEarlyWarningsEarlyWarning["Channel"].isNull())
			earlyWarningsObject.channel = valueEarlyWarningsEarlyWarning["Channel"].asString();
		earlyWarnings_.push_back(earlyWarningsObject);
	}
	if(!value["HasWarning"].isNull())
		hasWarning_ = value["HasWarning"].asString() == "true";
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();

}

bool DescribeEarlyWarningResult::getHasWarning()const
{
	return hasWarning_;
}

std::vector<DescribeEarlyWarningResult::EarlyWarning> DescribeEarlyWarningResult::getEarlyWarnings()const
{
	return earlyWarnings_;
}

std::string DescribeEarlyWarningResult::getBizCode()const
{
	return bizCode_;
}

