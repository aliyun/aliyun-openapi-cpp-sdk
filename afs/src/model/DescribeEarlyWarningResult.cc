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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allEarlyWarnings = value["EarlyWarnings"]["EarlyWarning"];
	for (auto value : allEarlyWarnings)
	{
		EarlyWarning earlyWarningsObject;
		if(!value["WarnOpen"].isNull())
			earlyWarningsObject.warnOpen = value["WarnOpen"].asString() == "true";
		if(!value["Title"].isNull())
			earlyWarningsObject.title = value["Title"].asString();
		if(!value["Content"].isNull())
			earlyWarningsObject.content = value["Content"].asString();
		if(!value["Frequency"].isNull())
			earlyWarningsObject.frequency = value["Frequency"].asString();
		if(!value["TimeOpen"].isNull())
			earlyWarningsObject.timeOpen = value["TimeOpen"].asString() == "true";
		if(!value["TimeBegin"].isNull())
			earlyWarningsObject.timeBegin = value["TimeBegin"].asString();
		if(!value["TimeEnd"].isNull())
			earlyWarningsObject.timeEnd = value["TimeEnd"].asString();
		if(!value["Channel"].isNull())
			earlyWarningsObject.channel = value["Channel"].asString();
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

