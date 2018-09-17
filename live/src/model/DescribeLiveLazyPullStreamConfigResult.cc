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

#include <alibabacloud/live/model/DescribeLiveLazyPullStreamConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveLazyPullStreamConfigResult::DescribeLiveLazyPullStreamConfigResult() :
	ServiceResult()
{}

DescribeLiveLazyPullStreamConfigResult::DescribeLiveLazyPullStreamConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveLazyPullStreamConfigResult::~DescribeLiveLazyPullStreamConfigResult()
{}

void DescribeLiveLazyPullStreamConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLiveLazyPullConfigList = value["LiveLazyPullConfigList"]["LiveLazyPullConfig"];
	for (auto value : allLiveLazyPullConfigList)
	{
		LiveLazyPullConfig liveLazyPullConfigListObject;
		if(!value["DomainName"].isNull())
			liveLazyPullConfigListObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveLazyPullConfigListObject.appName = value["AppName"].asString();
		if(!value["PullDomainName"].isNull())
			liveLazyPullConfigListObject.pullDomainName = value["PullDomainName"].asString();
		if(!value["PullAppName"].isNull())
			liveLazyPullConfigListObject.pullAppName = value["PullAppName"].asString();
		if(!value["PullProtocol"].isNull())
			liveLazyPullConfigListObject.pullProtocol = value["PullProtocol"].asString();
		if(!value["PullAuthType"].isNull())
			liveLazyPullConfigListObject.pullAuthType = value["PullAuthType"].asString();
		if(!value["PullAuthKey"].isNull())
			liveLazyPullConfigListObject.pullAuthKey = value["PullAuthKey"].asString();
		liveLazyPullConfigList_.push_back(liveLazyPullConfigListObject);
	}

}

std::vector<DescribeLiveLazyPullStreamConfigResult::LiveLazyPullConfig> DescribeLiveLazyPullStreamConfigResult::getLiveLazyPullConfigList()const
{
	return liveLazyPullConfigList_;
}

