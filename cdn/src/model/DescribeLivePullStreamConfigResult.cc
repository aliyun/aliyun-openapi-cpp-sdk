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

#include <alibabacloud/cdn/model/DescribeLivePullStreamConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLivePullStreamConfigResult::DescribeLivePullStreamConfigResult() :
	ServiceResult()
{}

DescribeLivePullStreamConfigResult::DescribeLivePullStreamConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePullStreamConfigResult::~DescribeLivePullStreamConfigResult()
{}

void DescribeLivePullStreamConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLiveAppRecordList = value["LiveAppRecordList"]["LiveAppRecord"];
	for (auto value : allLiveAppRecordList)
	{
		LiveAppRecord liveAppRecordObject;
		liveAppRecordObject.domainName = value["DomainName"].asString();
		liveAppRecordObject.streamName = value["StreamName"].asString();
		liveAppRecordObject.sourceUrl = value["SourceUrl"].asString();
		liveAppRecordObject.startTime = value["StartTime"].asString();
		liveAppRecordObject.endTime = value["EndTime"].asString();
		liveAppRecordList_.push_back(liveAppRecordObject);
	}

}

