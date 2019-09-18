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

#include <alibabacloud/mts/model/SubmitSubtitleJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitSubtitleJobResult::SubmitSubtitleJobResult() :
	ServiceResult()
{}

SubmitSubtitleJobResult::SubmitSubtitleJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitSubtitleJobResult::~SubmitSubtitleJobResult()
{}

void SubmitSubtitleJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto subtitleJobNode = value["SubtitleJob"];
	if(!subtitleJobNode["JobId"].isNull())
		subtitleJob_.jobId = subtitleJobNode["JobId"].asString();
	if(!subtitleJobNode["InputConfig"].isNull())
		subtitleJob_.inputConfig = subtitleJobNode["InputConfig"].asString();
	if(!subtitleJobNode["InputConfig"].isNull())
		subtitleJob_.inputConfig1 = subtitleJobNode["InputConfig"].asString();
	if(!subtitleJobNode["UserData"].isNull())
		subtitleJob_.userData = subtitleJobNode["UserData"].asString();
	if(!subtitleJobNode["State"].isNull())
		subtitleJob_.state = subtitleJobNode["State"].asString();

}

SubmitSubtitleJobResult::SubtitleJob SubmitSubtitleJobResult::getSubtitleJob()const
{
	return subtitleJob_;
}

