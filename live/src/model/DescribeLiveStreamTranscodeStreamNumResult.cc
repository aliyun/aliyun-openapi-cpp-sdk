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

#include <alibabacloud/live/model/DescribeLiveStreamTranscodeStreamNumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamTranscodeStreamNumResult::DescribeLiveStreamTranscodeStreamNumResult() :
	ServiceResult()
{}

DescribeLiveStreamTranscodeStreamNumResult::DescribeLiveStreamTranscodeStreamNumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamTranscodeStreamNumResult::~DescribeLiveStreamTranscodeStreamNumResult()
{}

void DescribeLiveStreamTranscodeStreamNumResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTranscodeStreamCountDetailsNode = value["TranscodeStreamCountDetails"]["transcode_details"];
	for (auto valueTranscodeStreamCountDetailstranscode_details : allTranscodeStreamCountDetailsNode)
	{
		Transcode_details transcodeStreamCountDetailsObject;
		if(!valueTranscodeStreamCountDetailstranscode_details["Template"].isNull())
			transcodeStreamCountDetailsObject._template = valueTranscodeStreamCountDetailstranscode_details["Template"].asString();
		if(!valueTranscodeStreamCountDetailstranscode_details["Count"].isNull())
			transcodeStreamCountDetailsObject.count = std::stoi(valueTranscodeStreamCountDetailstranscode_details["Count"].asString());
		transcodeStreamCountDetails_.push_back(transcodeStreamCountDetailsObject);
	}
	if(!value["UntranscodeNumber"].isNull())
		untranscodeNumber_ = std::stol(value["UntranscodeNumber"].asString());
	if(!value["LazyTranscodedNumber"].isNull())
		lazyTranscodedNumber_ = std::stol(value["LazyTranscodedNumber"].asString());
	if(!value["TranscodedNumber"].isNull())
		transcodedNumber_ = std::stol(value["TranscodedNumber"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeLiveStreamTranscodeStreamNumResult::getUntranscodeNumber()const
{
	return untranscodeNumber_;
}

long DescribeLiveStreamTranscodeStreamNumResult::getLazyTranscodedNumber()const
{
	return lazyTranscodedNumber_;
}

long DescribeLiveStreamTranscodeStreamNumResult::getTranscodedNumber()const
{
	return transcodedNumber_;
}

long DescribeLiveStreamTranscodeStreamNumResult::getTotal()const
{
	return total_;
}

std::vector<DescribeLiveStreamTranscodeStreamNumResult::Transcode_details> DescribeLiveStreamTranscodeStreamNumResult::getTranscodeStreamCountDetails()const
{
	return transcodeStreamCountDetails_;
}

