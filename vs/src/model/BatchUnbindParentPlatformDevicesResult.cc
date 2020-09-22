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

#include <alibabacloud/vs/model/BatchUnbindParentPlatformDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

BatchUnbindParentPlatformDevicesResult::BatchUnbindParentPlatformDevicesResult() :
	ServiceResult()
{}

BatchUnbindParentPlatformDevicesResult::BatchUnbindParentPlatformDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchUnbindParentPlatformDevicesResult::~BatchUnbindParentPlatformDevicesResult()
{}

void BatchUnbindParentPlatformDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["ParentPlatformId"].isNull())
			resultsObject.parentPlatformId = valueResultsResult["ParentPlatformId"].asString();
		if(!valueResultsResult["DeviceId"].isNull())
			resultsObject.deviceId = valueResultsResult["DeviceId"].asString();
		if(!valueResultsResult["Error"].isNull())
			resultsObject.error = valueResultsResult["Error"].asString();
		results_.push_back(resultsObject);
	}

}

std::vector<BatchUnbindParentPlatformDevicesResult::Result> BatchUnbindParentPlatformDevicesResult::getResults()const
{
	return results_;
}

