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

#include <alibabacloud/cdn/model/DescribeLiveStreamDomainAppInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamDomainAppInfoResult::DescribeLiveStreamDomainAppInfoResult() :
	ServiceResult()
{}

DescribeLiveStreamDomainAppInfoResult::DescribeLiveStreamDomainAppInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamDomainAppInfoResult::~DescribeLiveStreamDomainAppInfoResult()
{}

void DescribeLiveStreamDomainAppInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomainAppList = value["DomainAppList"]["DomainAppInfo"];
	for (auto value : allDomainAppList)
	{
		DomainAppInfo domainAppListObject;
		if(!value["AppDomain"].isNull())
			domainAppListObject.appDomain = value["AppDomain"].asString();
		if(!value["AppId"].isNull())
			domainAppListObject.appId = value["AppId"].asString();
		if(!value["AppKey"].isNull())
			domainAppListObject.appKey = value["AppKey"].asString();
		if(!value["AppOssBucket"].isNull())
			domainAppListObject.appOssBucket = value["AppOssBucket"].asString();
		if(!value["AppOssHost"].isNull())
			domainAppListObject.appOssHost = value["AppOssHost"].asString();
		if(!value["AppOwnerId"].isNull())
			domainAppListObject.appOwnerId = value["AppOwnerId"].asString();
		if(!value["AppSecret"].isNull())
			domainAppListObject.appSecret = value["AppSecret"].asString();
		if(!value["UpdateTime"].isNull())
			domainAppListObject.updateTime = value["UpdateTime"].asString();
		domainAppList_.push_back(domainAppListObject);
	}

}

std::vector<DescribeLiveStreamDomainAppInfoResult::DomainAppInfo> DescribeLiveStreamDomainAppInfoResult::getDomainAppList()const
{
	return domainAppList_;
}

