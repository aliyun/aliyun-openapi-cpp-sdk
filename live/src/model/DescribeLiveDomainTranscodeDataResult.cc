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

#include <alibabacloud/live/model/DescribeLiveDomainTranscodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainTranscodeDataResult::DescribeLiveDomainTranscodeDataResult() :
	ServiceResult()
{}

DescribeLiveDomainTranscodeDataResult::DescribeLiveDomainTranscodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainTranscodeDataResult::~DescribeLiveDomainTranscodeDataResult()
{}

void DescribeLiveDomainTranscodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTranscodeDataInfos = value["TranscodeDataInfos"]["TranscodeDataInfo"];
	for (auto value : allTranscodeDataInfos)
	{
		TranscodeDataInfo transcodeDataInfosObject;
		if(!value["Date"].isNull())
			transcodeDataInfosObject.date = value["Date"].asString();
		if(!value["Total"].isNull())
			transcodeDataInfosObject.total = std::stoi(value["Total"].asString());
		if(!value["Detail"].isNull())
			transcodeDataInfosObject.detail = value["Detail"].asString();
		transcodeDataInfos_.push_back(transcodeDataInfosObject);
	}

}

std::vector<DescribeLiveDomainTranscodeDataResult::TranscodeDataInfo> DescribeLiveDomainTranscodeDataResult::getTranscodeDataInfos()const
{
	return transcodeDataInfos_;
}

