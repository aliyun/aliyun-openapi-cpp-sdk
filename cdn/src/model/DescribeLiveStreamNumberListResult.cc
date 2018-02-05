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

#include <alibabacloud/cdn/model/DescribeLiveStreamNumberListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamNumberListResult::DescribeLiveStreamNumberListResult() :
	ServiceResult()
{}

DescribeLiveStreamNumberListResult::DescribeLiveStreamNumberListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamNumberListResult::~DescribeLiveStreamNumberListResult()
{}

void DescribeLiveStreamNumberListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allStreamNumberInfos = value["StreamNumberInfos"]["StreamNumberInfo"];
	for (auto value : allStreamNumberInfos)
	{
		StreamNumberInfo streamNumberInfosObject;
		if(!value["Number"].isNull())
			streamNumberInfosObject.number = std::stoi(value["Number"].asString());
		if(!value["Time"].isNull())
			streamNumberInfosObject.time = value["Time"].asString();
		streamNumberInfos_.push_back(streamNumberInfosObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::string DescribeLiveStreamNumberListResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeLiveStreamNumberListResult::StreamNumberInfo> DescribeLiveStreamNumberListResult::getStreamNumberInfos()const
{
	return streamNumberInfos_;
}

