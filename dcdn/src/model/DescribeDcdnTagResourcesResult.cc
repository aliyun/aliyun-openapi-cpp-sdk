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

#include <alibabacloud/dcdn/model/DescribeDcdnTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnTagResourcesResult::DescribeDcdnTagResourcesResult() :
	ServiceResult()
{}

DescribeDcdnTagResourcesResult::DescribeDcdnTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnTagResourcesResult::~DescribeDcdnTagResourcesResult()
{}

void DescribeDcdnTagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagResourcesNode = value["TagResources"]["TagResource"];
	for (auto valueTagResourcesTagResource : allTagResourcesNode)
	{
		TagResource tagResourcesObject;
		if(!valueTagResourcesTagResource["ResourceId"].isNull())
			tagResourcesObject.resourceId = valueTagResourcesTagResource["ResourceId"].asString();
		auto allTagNode = valueTagResourcesTagResource["Tag"]["TagItem"];
		for (auto valueTagResourcesTagResourceTagTagItem : allTagNode)
		{
			TagResource::TagItem tagObject;
			if(!valueTagResourcesTagResourceTagTagItem["Key"].isNull())
				tagObject.key = valueTagResourcesTagResourceTagTagItem["Key"].asString();
			if(!valueTagResourcesTagResourceTagTagItem["Value"].isNull())
				tagObject.value = valueTagResourcesTagResourceTagTagItem["Value"].asString();
			tagResourcesObject.tag.push_back(tagObject);
		}
		tagResources_.push_back(tagResourcesObject);
	}

}

std::vector<DescribeDcdnTagResourcesResult::TagResource> DescribeDcdnTagResourcesResult::getTagResources()const
{
	return tagResources_;
}

