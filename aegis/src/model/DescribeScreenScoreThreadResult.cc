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

#include <alibabacloud/aegis/model/DescribeScreenScoreThreadResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenScoreThreadResult::DescribeScreenScoreThreadResult() :
	ServiceResult()
{}

DescribeScreenScoreThreadResult::DescribeScreenScoreThreadResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenScoreThreadResult::~DescribeScreenScoreThreadResult()
{}

void DescribeScreenScoreThreadResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
		auto allSocreThreadDate = dataNode["SocreThreadDate"]["StringItem"];
		for (auto value : allSocreThreadDate)
			data_.socreThreadDate.push_back(value.asString());
		auto allSocreThread = dataNode["SocreThread"]["IntegerItem"];
		for (auto value : allSocreThread)
			data_.socreThread.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeScreenScoreThreadResult::Data DescribeScreenScoreThreadResult::getData()const
{
	return data_;
}

bool DescribeScreenScoreThreadResult::getSuccess()const
{
	return success_;
}

