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

#include <alibabacloud/vs/model/BatchStartDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

BatchStartDevicesResult::BatchStartDevicesResult() :
	ServiceResult()
{}

BatchStartDevicesResult::BatchStartDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchStartDevicesResult::~BatchStartDevicesResult()
{}

void BatchStartDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["Id"].isNull())
			resultsObject.id = valueResultsResult["Id"].asString();
		auto allStreamsNode = allResultsNode["Streams"]["Stream"];
		for (auto allResultsNodeStreamsStream : allStreamsNode)
		{
			Result::Stream streamsObject;
			if(!allResultsNodeStreamsStream["Id"].isNull())
				streamsObject.id = allResultsNodeStreamsStream["Id"].asString();
			if(!allResultsNodeStreamsStream["Name"].isNull())
				streamsObject.name = allResultsNodeStreamsStream["Name"].asString();
			if(!allResultsNodeStreamsStream["Error"].isNull())
				streamsObject.error = allResultsNodeStreamsStream["Error"].asString();
			resultsObject.streams.push_back(streamsObject);
		}
		results_.push_back(resultsObject);
	}

}

std::vector<BatchStartDevicesResult::Result> BatchStartDevicesResult::getResults()const
{
	return results_;
}

