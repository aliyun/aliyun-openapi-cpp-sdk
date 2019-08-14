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

#include <alibabacloud/live/model/DescribeLiveStreamOptimizedFeatureConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamOptimizedFeatureConfigResult::DescribeLiveStreamOptimizedFeatureConfigResult() :
	ServiceResult()
{}

DescribeLiveStreamOptimizedFeatureConfigResult::DescribeLiveStreamOptimizedFeatureConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamOptimizedFeatureConfigResult::~DescribeLiveStreamOptimizedFeatureConfigResult()
{}

void DescribeLiveStreamOptimizedFeatureConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allLiveStreamOptimizedFeatureConfigList = value["LiveStreamOptimizedFeatureConfigList"]["LiveStreamOptimizedFeatureConfig"];
	for (auto value : allLiveStreamOptimizedFeatureConfigList)
	{
		LiveStreamOptimizedFeatureConfig liveStreamOptimizedFeatureConfigListObject;
		if(!value["DomainName"].isNull())
			liveStreamOptimizedFeatureConfigListObject.domainName = value["DomainName"].asString();
		if(!value["ConfigName"].isNull())
			liveStreamOptimizedFeatureConfigListObject.configName = value["ConfigName"].asString();
		if(!value["ConfigStatus"].isNull())
			liveStreamOptimizedFeatureConfigListObject.configStatus = value["ConfigStatus"].asString();
		if(!value["ConfigValue"].isNull())
			liveStreamOptimizedFeatureConfigListObject.configValue = value["ConfigValue"].asString();
		liveStreamOptimizedFeatureConfigList_.push_back(liveStreamOptimizedFeatureConfigListObject);
	}

}

std::vector<DescribeLiveStreamOptimizedFeatureConfigResult::LiveStreamOptimizedFeatureConfig> DescribeLiveStreamOptimizedFeatureConfigResult::getLiveStreamOptimizedFeatureConfigList()const
{
	return liveStreamOptimizedFeatureConfigList_;
}

