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

#include <alibabacloud/cdn/model/DescribeLiveStreamTranscodeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamTranscodeInfoResult::DescribeLiveStreamTranscodeInfoResult() :
	ServiceResult()
{}

DescribeLiveStreamTranscodeInfoResult::DescribeLiveStreamTranscodeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamTranscodeInfoResult::~DescribeLiveStreamTranscodeInfoResult()
{}

void DescribeLiveStreamTranscodeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainTranscodeList = value["DomainTranscodeList"]["DomainTranscodeInfo"];
	for (auto value : allDomainTranscodeList)
	{
		DomainTranscodeInfo domainTranscodeListObject;
		if(!value["TranscodeApp"].isNull())
			domainTranscodeListObject.transcodeApp = value["TranscodeApp"].asString();
		if(!value["TranscodeId"].isNull())
			domainTranscodeListObject.transcodeId = value["TranscodeId"].asString();
		if(!value["TranscodeName"].isNull())
			domainTranscodeListObject.transcodeName = value["TranscodeName"].asString();
		if(!value["TranscodeRecord"].isNull())
			domainTranscodeListObject.transcodeRecord = value["TranscodeRecord"].asString();
		if(!value["TranscodeSnapshot"].isNull())
			domainTranscodeListObject.transcodeSnapshot = value["TranscodeSnapshot"].asString();
		if(!value["TranscodeTemplate"].isNull())
			domainTranscodeListObject.transcodeTemplate = value["TranscodeTemplate"].asString();
		domainTranscodeList_.push_back(domainTranscodeListObject);
	}

}

std::vector<DescribeLiveStreamTranscodeInfoResult::DomainTranscodeInfo> DescribeLiveStreamTranscodeInfoResult::getDomainTranscodeList()const
{
	return domainTranscodeList_;
}

