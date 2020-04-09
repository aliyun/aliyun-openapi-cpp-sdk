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

#include <alibabacloud/retailcloud/model/DescribePodEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribePodEventsResult::DescribePodEventsResult() :
	ServiceResult()
{}

DescribePodEventsResult::DescribePodEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePodEventsResult::~DescribePodEventsResult()
{}

void DescribePodEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["DeployOrderName"].isNull())
		result_.deployOrderName = resultNode["DeployOrderName"].asString();
	auto allPodEventsNode = resultNode["PodEvents"]["PodEvent"];
	for (auto resultNodePodEventsPodEvent : allPodEventsNode)
	{
		Result::PodEvent podEventObject;
		if(!resultNodePodEventsPodEvent["Action"].isNull())
			podEventObject.action = resultNodePodEventsPodEvent["Action"].asString();
		if(!resultNodePodEventsPodEvent["Count"].isNull())
			podEventObject.count = std::stoi(resultNodePodEventsPodEvent["Count"].asString());
		if(!resultNodePodEventsPodEvent["EventTime"].isNull())
			podEventObject.eventTime = resultNodePodEventsPodEvent["EventTime"].asString();
		if(!resultNodePodEventsPodEvent["FirstTimestamp"].isNull())
			podEventObject.firstTimestamp = resultNodePodEventsPodEvent["FirstTimestamp"].asString();
		if(!resultNodePodEventsPodEvent["LastTimestamp"].isNull())
			podEventObject.lastTimestamp = resultNodePodEventsPodEvent["LastTimestamp"].asString();
		if(!resultNodePodEventsPodEvent["Message"].isNull())
			podEventObject.message = resultNodePodEventsPodEvent["Message"].asString();
		if(!resultNodePodEventsPodEvent["Reason"].isNull())
			podEventObject.reason = resultNodePodEventsPodEvent["Reason"].asString();
		if(!resultNodePodEventsPodEvent["Type"].isNull())
			podEventObject.type = resultNodePodEventsPodEvent["Type"].asString();
		result_.podEvents.push_back(podEventObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribePodEventsResult::getErrMsg()const
{
	return errMsg_;
}

int DescribePodEventsResult::getCode()const
{
	return code_;
}

bool DescribePodEventsResult::getSuccess()const
{
	return success_;
}

DescribePodEventsResult::Result DescribePodEventsResult::getResult()const
{
	return result_;
}

