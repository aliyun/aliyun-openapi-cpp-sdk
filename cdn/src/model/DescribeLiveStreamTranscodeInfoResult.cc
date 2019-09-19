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
	auto allDomainTranscodeListNode = value["DomainTranscodeList"]["DomainTranscodeInfo"];
	for (auto valueDomainTranscodeListDomainTranscodeInfo : allDomainTranscodeListNode)
	{
		DomainTranscodeInfo domainTranscodeListObject;
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeApp"].isNull())
			domainTranscodeListObject.transcodeApp = valueDomainTranscodeListDomainTranscodeInfo["TranscodeApp"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeId"].isNull())
			domainTranscodeListObject.transcodeId = valueDomainTranscodeListDomainTranscodeInfo["TranscodeId"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeName"].isNull())
			domainTranscodeListObject.transcodeName = valueDomainTranscodeListDomainTranscodeInfo["TranscodeName"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeRecord"].isNull())
			domainTranscodeListObject.transcodeRecord = valueDomainTranscodeListDomainTranscodeInfo["TranscodeRecord"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeSnapshot"].isNull())
			domainTranscodeListObject.transcodeSnapshot = valueDomainTranscodeListDomainTranscodeInfo["TranscodeSnapshot"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeTemplate"].isNull())
			domainTranscodeListObject.transcodeTemplate = valueDomainTranscodeListDomainTranscodeInfo["TranscodeTemplate"].asString();
		domainTranscodeList_.push_back(domainTranscodeListObject);
	}

}

std::vector<DescribeLiveStreamTranscodeInfoResult::DomainTranscodeInfo> DescribeLiveStreamTranscodeInfoResult::getDomainTranscodeList()const
{
	return domainTranscodeList_;
}

