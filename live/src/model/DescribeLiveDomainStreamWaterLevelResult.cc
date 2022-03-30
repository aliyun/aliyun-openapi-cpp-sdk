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

#include <alibabacloud/live/model/DescribeLiveDomainStreamWaterLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainStreamWaterLevelResult::DescribeLiveDomainStreamWaterLevelResult() :
	ServiceResult()
{}

DescribeLiveDomainStreamWaterLevelResult::DescribeLiveDomainStreamWaterLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainStreamWaterLevelResult::~DescribeLiveDomainStreamWaterLevelResult()
{}

void DescribeLiveDomainStreamWaterLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveDomainWaterLevelListNode = value["LiveDomainWaterLevelList"]["LiveDomainWaterLevel"];
	for (auto valueLiveDomainWaterLevelListLiveDomainWaterLevel : allLiveDomainWaterLevelListNode)
	{
		LiveDomainWaterLevel liveDomainWaterLevelListObject;
		if(!valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainRawLimit"].isNull())
			liveDomainWaterLevelListObject.domainRawLimit = std::stoi(valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainRawLimit"].asString());
		if(!valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainRawCount"].isNull())
			liveDomainWaterLevelListObject.domainRawCount = std::stoi(valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainRawCount"].asString());
		if(!valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainTranscodeCount"].isNull())
			liveDomainWaterLevelListObject.domainTranscodeCount = std::stoi(valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainTranscodeCount"].asString());
		if(!valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainName"].isNull())
			liveDomainWaterLevelListObject.domainName = valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainName"].asString();
		if(!valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainTranscodeLimit"].isNull())
			liveDomainWaterLevelListObject.domainTranscodeLimit = std::stoi(valueLiveDomainWaterLevelListLiveDomainWaterLevel["DomainTranscodeLimit"].asString());
		liveDomainWaterLevelList_.push_back(liveDomainWaterLevelListObject);
	}
	auto liveUidWaterLevelNode = value["LiveUidWaterLevel"];
	if(!liveUidWaterLevelNode["UidTranscodeLimit"].isNull())
		liveUidWaterLevel_.uidTranscodeLimit = std::stoi(liveUidWaterLevelNode["UidTranscodeLimit"].asString());
	if(!liveUidWaterLevelNode["AliUid"].isNull())
		liveUidWaterLevel_.aliUid = liveUidWaterLevelNode["AliUid"].asString();
	if(!liveUidWaterLevelNode["UidTranscodeCount"].isNull())
		liveUidWaterLevel_.uidTranscodeCount = std::stoi(liveUidWaterLevelNode["UidTranscodeCount"].asString());
	if(!liveUidWaterLevelNode["UidRawLimit"].isNull())
		liveUidWaterLevel_.uidRawLimit = std::stoi(liveUidWaterLevelNode["UidRawLimit"].asString());
	if(!liveUidWaterLevelNode["UidRawCount"].isNull())
		liveUidWaterLevel_.uidRawCount = std::stoi(liveUidWaterLevelNode["UidRawCount"].asString());

}

DescribeLiveDomainStreamWaterLevelResult::LiveUidWaterLevel DescribeLiveDomainStreamWaterLevelResult::getLiveUidWaterLevel()const
{
	return liveUidWaterLevel_;
}

std::vector<DescribeLiveDomainStreamWaterLevelResult::LiveDomainWaterLevel> DescribeLiveDomainStreamWaterLevelResult::getLiveDomainWaterLevelList()const
{
	return liveDomainWaterLevelList_;
}

