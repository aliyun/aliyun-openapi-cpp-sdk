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

#include <alibabacloud/live/model/DescribeLiveDomainStreamTranscodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainStreamTranscodeDataResult::DescribeLiveDomainStreamTranscodeDataResult() :
	ServiceResult()
{}

DescribeLiveDomainStreamTranscodeDataResult::DescribeLiveDomainStreamTranscodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainStreamTranscodeDataResult::~DescribeLiveDomainStreamTranscodeDataResult()
{}

void DescribeLiveDomainStreamTranscodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTranscodeDataListNode = value["TranscodeDataList"]["TranscodeData"];
	for (auto valueTranscodeDataListTranscodeData : allTranscodeDataListNode)
	{
		TranscodeData transcodeDataListObject;
		if(!valueTranscodeDataListTranscodeData["TanscodeType"].isNull())
			transcodeDataListObject.tanscodeType = valueTranscodeDataListTranscodeData["TanscodeType"].asString();
		if(!valueTranscodeDataListTranscodeData["Domain"].isNull())
			transcodeDataListObject.domain = valueTranscodeDataListTranscodeData["Domain"].asString();
		if(!valueTranscodeDataListTranscodeData["Region"].isNull())
			transcodeDataListObject.region = valueTranscodeDataListTranscodeData["Region"].asString();
		if(!valueTranscodeDataListTranscodeData["Duration"].isNull())
			transcodeDataListObject.duration = std::stoi(valueTranscodeDataListTranscodeData["Duration"].asString());
		if(!valueTranscodeDataListTranscodeData["TimeStamp"].isNull())
			transcodeDataListObject.timeStamp = valueTranscodeDataListTranscodeData["TimeStamp"].asString();
		if(!valueTranscodeDataListTranscodeData["Fps"].isNull())
			transcodeDataListObject.fps = valueTranscodeDataListTranscodeData["Fps"].asString();
		if(!valueTranscodeDataListTranscodeData["Resolution"].isNull())
			transcodeDataListObject.resolution = valueTranscodeDataListTranscodeData["Resolution"].asString();
		transcodeDataList_.push_back(transcodeDataListObject);
	}

}

std::vector<DescribeLiveDomainStreamTranscodeDataResult::TranscodeData> DescribeLiveDomainStreamTranscodeDataResult::getTranscodeDataList()const
{
	return transcodeDataList_;
}

