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

#include <alibabacloud/ddoscoo/model/DescribeDomainViewTopUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainViewTopUrlResult::DescribeDomainViewTopUrlResult() :
	ServiceResult()
{}

DescribeDomainViewTopUrlResult::DescribeDomainViewTopUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainViewTopUrlResult::~DescribeDomainViewTopUrlResult()
{}

void DescribeDomainViewTopUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUrlListNode = value["UrlList"]["Url"];
	for (auto valueUrlListUrl : allUrlListNode)
	{
		Url urlListObject;
		if(!valueUrlListUrl["Url"].isNull())
			urlListObject.url = valueUrlListUrl["Url"].asString();
		if(!valueUrlListUrl["Domain"].isNull())
			urlListObject.domain = valueUrlListUrl["Domain"].asString();
		if(!valueUrlListUrl["Count"].isNull())
			urlListObject.count = std::stol(valueUrlListUrl["Count"].asString());
		urlList_.push_back(urlListObject);
	}

}

std::vector<DescribeDomainViewTopUrlResult::Url> DescribeDomainViewTopUrlResult::getUrlList()const
{
	return urlList_;
}

