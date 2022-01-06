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

#include <alibabacloud/live/model/DescribeLiveShiftConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveShiftConfigsResult::DescribeLiveShiftConfigsResult() :
	ServiceResult()
{}

DescribeLiveShiftConfigsResult::DescribeLiveShiftConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveShiftConfigsResult::~DescribeLiveShiftConfigsResult()
{}

void DescribeLiveShiftConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["Config"];
	for (auto valueContentConfig : allContentNode)
	{
		Config contentObject;
		if(!valueContentConfig["AppName"].isNull())
			contentObject.appName = valueContentConfig["AppName"].asString();
		if(!valueContentConfig["Vision"].isNull())
			contentObject.vision = std::stoi(valueContentConfig["Vision"].asString());
		if(!valueContentConfig["DomainName"].isNull())
			contentObject.domainName = valueContentConfig["DomainName"].asString();
		if(!valueContentConfig["StreamName"].isNull())
			contentObject.streamName = valueContentConfig["StreamName"].asString();
		if(!valueContentConfig["IgnoreTranscode"].isNull())
			contentObject.ignoreTranscode = valueContentConfig["IgnoreTranscode"].asString() == "true";
		content_.push_back(contentObject);
	}

}

std::vector<DescribeLiveShiftConfigsResult::Config> DescribeLiveShiftConfigsResult::getContent()const
{
	return content_;
}

