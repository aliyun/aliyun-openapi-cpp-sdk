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

#include <alibabacloud/retailcloud/model/DescribeJobLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeJobLogResult::DescribeJobLogResult() :
	ServiceResult()
{}

DescribeJobLogResult::DescribeJobLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobLogResult::~DescribeJobLogResult()
{}

void DescribeJobLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AppId"].isNull())
		result_.appId = std::stol(resultNode["AppId"].asString());
	if(!resultNode["EnvId"].isNull())
		result_.envId = std::stol(resultNode["EnvId"].asString());
	if(!resultNode["PodName"].isNull())
		result_.podName = resultNode["PodName"].asString();
	if(!resultNode["JobLog"].isNull())
		result_.jobLog = resultNode["JobLog"].asString();
	auto allEventsNode = resultNode["Events"]["Event"];
	for (auto resultNodeEventsEvent : allEventsNode)
	{
		Result::Event eventObject;
		if(!resultNodeEventsEvent["Action"].isNull())
			eventObject.action = resultNodeEventsEvent["Action"].asString();
		if(!resultNodeEventsEvent["Count"].isNull())
			eventObject.count = std::stoi(resultNodeEventsEvent["Count"].asString());
		if(!resultNodeEventsEvent["EventTime"].isNull())
			eventObject.eventTime = resultNodeEventsEvent["EventTime"].asString();
		if(!resultNodeEventsEvent["FirstTimestamp"].isNull())
			eventObject.firstTimestamp = resultNodeEventsEvent["FirstTimestamp"].asString();
		if(!resultNodeEventsEvent["LastTimestamp"].isNull())
			eventObject.lastTimestamp = resultNodeEventsEvent["LastTimestamp"].asString();
		if(!resultNodeEventsEvent["Mesage"].isNull())
			eventObject.mesage = resultNodeEventsEvent["Mesage"].asString();
		if(!resultNodeEventsEvent["Reason"].isNull())
			eventObject.reason = resultNodeEventsEvent["Reason"].asString();
		if(!resultNodeEventsEvent["Type"].isNull())
			eventObject.type = resultNodeEventsEvent["Type"].asString();
		result_.events.push_back(eventObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string DescribeJobLogResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeJobLogResult::getCode()const
{
	return code_;
}

DescribeJobLogResult::Result DescribeJobLogResult::getResult()const
{
	return result_;
}

