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

#include <alibabacloud/cdn/model/DescribeLiveStreamLimitInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamLimitInfoResult::DescribeLiveStreamLimitInfoResult() :
	ServiceResult()
{}

DescribeLiveStreamLimitInfoResult::DescribeLiveStreamLimitInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamLimitInfoResult::~DescribeLiveStreamLimitInfoResult()
{}

void DescribeLiveStreamLimitInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUserLimitLists = value["UserLimitLists"]["UserLimitMode"];
	for (auto value : allUserLimitLists)
	{
		UserLimitMode userLimitListsObject;
		if(!value["LimitDomain"].isNull())
			userLimitListsObject.limitDomain = value["LimitDomain"].asString();
		if(!value["LimitNum"].isNull())
			userLimitListsObject.limitNum = value["LimitNum"].asString();
		if(!value["LimitTranscodeNum"].isNull())
			userLimitListsObject.limitTranscodeNum = value["LimitTranscodeNum"].asString();
		userLimitLists_.push_back(userLimitListsObject);
	}

}

std::vector<DescribeLiveStreamLimitInfoResult::UserLimitMode> DescribeLiveStreamLimitInfoResult::getUserLimitLists()const
{
	return userLimitLists_;
}

