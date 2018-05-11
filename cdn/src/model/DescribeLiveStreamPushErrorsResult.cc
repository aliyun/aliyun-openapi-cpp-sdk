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

#include <alibabacloud/cdn/model/DescribeLiveStreamPushErrorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamPushErrorsResult::DescribeLiveStreamPushErrorsResult() :
	ServiceResult()
{}

DescribeLiveStreamPushErrorsResult::DescribeLiveStreamPushErrorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamPushErrorsResult::~DescribeLiveStreamPushErrorsResult()
{}

void DescribeLiveStreamPushErrorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPushErrorsModelList = value["PushErrorsModelList"]["PushErrorsModel"];
	for (auto value : allPushErrorsModelList)
	{
		PushErrorsModel pushErrorsModelListObject;
		if(!value["ErrorCode"].isNull())
			pushErrorsModelListObject.errorCode = value["ErrorCode"].asString();
		pushErrorsModelList_.push_back(pushErrorsModelListObject);
	}

}

std::vector<DescribeLiveStreamPushErrorsResult::PushErrorsModel> DescribeLiveStreamPushErrorsResult::getPushErrorsModelList()const
{
	return pushErrorsModelList_;
}

