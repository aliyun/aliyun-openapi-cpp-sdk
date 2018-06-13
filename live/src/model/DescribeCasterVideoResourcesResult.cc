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

#include <alibabacloud/live/model/DescribeCasterVideoResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterVideoResourcesResult::DescribeCasterVideoResourcesResult() :
	ServiceResult()
{}

DescribeCasterVideoResourcesResult::DescribeCasterVideoResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterVideoResourcesResult::~DescribeCasterVideoResourcesResult()
{}

void DescribeCasterVideoResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVideoResources = value["VideoResources"]["VideoResource"];
	for (auto value : allVideoResources)
	{
		VideoResource videoResourcesObject;
		if(!value["MaterialId"].isNull())
			videoResourcesObject.materialId = value["MaterialId"].asString();
		if(!value["ResourceId"].isNull())
			videoResourcesObject.resourceId = value["ResourceId"].asString();
		if(!value["ResourceName"].isNull())
			videoResourcesObject.resourceName = value["ResourceName"].asString();
		if(!value["LocationId"].isNull())
			videoResourcesObject.locationId = value["LocationId"].asString();
		if(!value["LiveStreamUrl"].isNull())
			videoResourcesObject.liveStreamUrl = value["LiveStreamUrl"].asString();
		if(!value["RepeatNum"].isNull())
			videoResourcesObject.repeatNum = std::stoi(value["RepeatNum"].asString());
		if(!value["VodUrl"].isNull())
			videoResourcesObject.vodUrl = value["VodUrl"].asString();
		if(!value["BeginOffset"].isNull())
			videoResourcesObject.beginOffset = std::stoi(value["BeginOffset"].asString());
		if(!value["EndOffset"].isNull())
			videoResourcesObject.endOffset = std::stoi(value["EndOffset"].asString());
		videoResources_.push_back(videoResourcesObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeCasterVideoResourcesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeCasterVideoResourcesResult::VideoResource> DescribeCasterVideoResourcesResult::getVideoResources()const
{
	return videoResources_;
}

