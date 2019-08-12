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

#include <alibabacloud/emr/model/ContextQueryLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ContextQueryLogResult::ContextQueryLogResult() :
	ServiceResult()
{}

ContextQueryLogResult::ContextQueryLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ContextQueryLogResult::~ContextQueryLogResult()
{}

void ContextQueryLogResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allLogs = value["Logs"]["Item"];
	for (auto value : allLogs)
	{
		Item logsObject;
		if(!value["Index"].isNull())
			logsObject.index = std::stoi(value["Index"].asString());
		if(!value["Content"].isNull())
			logsObject.content = value["Content"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["PackId"].isNull())
		packId_ = value["PackId"].asString();
	if(!value["PackMeta"].isNull())
		packMeta_ = value["PackMeta"].asString();
	if(!value["Time"].isNull())
		time_ = value["Time"].asString();

}

std::string ContextQueryLogResult::getTime()const
{
	return time_;
}

std::vector<ContextQueryLogResult::Item> ContextQueryLogResult::getLogs()const
{
	return logs_;
}

std::string ContextQueryLogResult::getPackMeta()const
{
	return packMeta_;
}

std::string ContextQueryLogResult::getPackId()const
{
	return packId_;
}

