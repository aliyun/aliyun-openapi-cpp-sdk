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

#include <alibabacloud/outboundbot/model/QueryScriptWaveformsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

QueryScriptWaveformsResult::QueryScriptWaveformsResult() :
	ServiceResult()
{}

QueryScriptWaveformsResult::QueryScriptWaveformsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryScriptWaveformsResult::~QueryScriptWaveformsResult()
{}

void QueryScriptWaveformsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScriptWaveformsNode = value["ScriptWaveforms"]["ScriptWaveform"];
	for (auto valueScriptWaveformsScriptWaveform : allScriptWaveformsNode)
	{
		ScriptWaveform scriptWaveformsObject;
		if(!valueScriptWaveformsScriptWaveform["ScriptContent"].isNull())
			scriptWaveformsObject.scriptContent = valueScriptWaveformsScriptWaveform["ScriptContent"].asString();
		if(!valueScriptWaveformsScriptWaveform["ScriptWaveformId"].isNull())
			scriptWaveformsObject.scriptWaveformId = valueScriptWaveformsScriptWaveform["ScriptWaveformId"].asString();
		if(!valueScriptWaveformsScriptWaveform["FileName"].isNull())
			scriptWaveformsObject.fileName = valueScriptWaveformsScriptWaveform["FileName"].asString();
		if(!valueScriptWaveformsScriptWaveform["ScriptId"].isNull())
			scriptWaveformsObject.scriptId = valueScriptWaveformsScriptWaveform["ScriptId"].asString();
		if(!valueScriptWaveformsScriptWaveform["FileId"].isNull())
			scriptWaveformsObject.fileId = valueScriptWaveformsScriptWaveform["FileId"].asString();
		scriptWaveforms_.push_back(scriptWaveformsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryScriptWaveformsResult::getMessage()const
{
	return message_;
}

int QueryScriptWaveformsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QueryScriptWaveformsResult::ScriptWaveform> QueryScriptWaveformsResult::getScriptWaveforms()const
{
	return scriptWaveforms_;
}

std::string QueryScriptWaveformsResult::getCode()const
{
	return code_;
}

bool QueryScriptWaveformsResult::getSuccess()const
{
	return success_;
}

