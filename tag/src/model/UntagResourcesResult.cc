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

#include <alibabacloud/tag/model/UntagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

UntagResourcesResult::UntagResourcesResult() :
	ServiceResult()
{}

UntagResourcesResult::UntagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UntagResourcesResult::~UntagResourcesResult()
{}

void UntagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailedResourcesNode = value["FailedResources"]["FailedResource"];
	for (auto valueFailedResourcesFailedResource : allFailedResourcesNode)
	{
		FailedResource failedResourcesObject;
		if(!valueFailedResourcesFailedResource["ResourceARN"].isNull())
			failedResourcesObject.resourceARN = valueFailedResourcesFailedResource["ResourceARN"].asString();
		auto resultNode = value["Result"];
		if(!resultNode["Code"].isNull())
			failedResourcesObject.result.code = resultNode["Code"].asString();
		if(!resultNode["Message"].isNull())
			failedResourcesObject.result.message = resultNode["Message"].asString();
		failedResources_.push_back(failedResourcesObject);
	}

}

std::vector<UntagResourcesResult::FailedResource> UntagResourcesResult::getFailedResources()const
{
	return failedResources_;
}

