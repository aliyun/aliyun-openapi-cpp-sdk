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

#include <alibabacloud/live/model/DescribeLiveDelayConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDelayConfigResult::DescribeLiveDelayConfigResult() :
	ServiceResult()
{}

DescribeLiveDelayConfigResult::DescribeLiveDelayConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDelayConfigResult::~DescribeLiveDelayConfigResult()
{}

void DescribeLiveDelayConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["App"].isNull())
		app_ = value["App"].asString();
	if(!value["DelayTime"].isNull())
		delayTime_ = value["DelayTime"].asString();
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["Stream"].isNull())
		stream_ = value["Stream"].asString();
	if(!value["TaskTriggerMode"].isNull())
		taskTriggerMode_ = value["TaskTriggerMode"].asString();

}

std::string DescribeLiveDelayConfigResult::getApp()const
{
	return app_;
}

std::string DescribeLiveDelayConfigResult::getTaskTriggerMode()const
{
	return taskTriggerMode_;
}

std::string DescribeLiveDelayConfigResult::getStream()const
{
	return stream_;
}

std::string DescribeLiveDelayConfigResult::getDelayTime()const
{
	return delayTime_;
}

std::string DescribeLiveDelayConfigResult::getDomain()const
{
	return domain_;
}

