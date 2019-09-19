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

#include <alibabacloud/cdn/model/StartMixStreamsServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

StartMixStreamsServiceResult::StartMixStreamsServiceResult() :
	ServiceResult()
{}

StartMixStreamsServiceResult::StartMixStreamsServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartMixStreamsServiceResult::~StartMixStreamsServiceResult()
{}

void StartMixStreamsServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMixStreamsInfoListNode = value["MixStreamsInfoList"]["MixStreamsInfo"];
	for (auto valueMixStreamsInfoListMixStreamsInfo : allMixStreamsInfoListNode)
	{
		MixStreamsInfo mixStreamsInfoListObject;
		if(!valueMixStreamsInfoListMixStreamsInfo["DomainName"].isNull())
			mixStreamsInfoListObject.domainName = valueMixStreamsInfoListMixStreamsInfo["DomainName"].asString();
		if(!valueMixStreamsInfoListMixStreamsInfo["AppName"].isNull())
			mixStreamsInfoListObject.appName = valueMixStreamsInfoListMixStreamsInfo["AppName"].asString();
		if(!valueMixStreamsInfoListMixStreamsInfo["StreamName"].isNull())
			mixStreamsInfoListObject.streamName = valueMixStreamsInfoListMixStreamsInfo["StreamName"].asString();
		mixStreamsInfoList_.push_back(mixStreamsInfoListObject);
	}

}

std::vector<StartMixStreamsServiceResult::MixStreamsInfo> StartMixStreamsServiceResult::getMixStreamsInfoList()const
{
	return mixStreamsInfoList_;
}

