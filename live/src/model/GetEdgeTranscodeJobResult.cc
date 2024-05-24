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

#include <alibabacloud/live/model/GetEdgeTranscodeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

GetEdgeTranscodeJobResult::GetEdgeTranscodeJobResult() :
	ServiceResult()
{}

GetEdgeTranscodeJobResult::GetEdgeTranscodeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEdgeTranscodeJobResult::~GetEdgeTranscodeJobResult()
{}

void GetEdgeTranscodeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["CreateTime"].isNull())
		job_.createTime = jobNode["CreateTime"].asString();
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["LastStartAt"].isNull())
		job_.lastStartAt = jobNode["LastStartAt"].asString();
	if(!jobNode["LastStopAt"].isNull())
		job_.lastStopAt = jobNode["LastStopAt"].asString();
	if(!jobNode["Name"].isNull())
		job_.name = jobNode["Name"].asString();
	if(!jobNode["Status"].isNull())
		job_.status = jobNode["Status"].asString();
	if(!jobNode["StreamInput"].isNull())
		job_.streamInput = jobNode["StreamInput"].asString();
	if(!jobNode["StreamOutput"].isNull())
		job_.streamOutput = jobNode["StreamOutput"].asString();
	if(!jobNode["TemplateId"].isNull())
		job_.templateId = jobNode["TemplateId"].asString();
	if(!jobNode["TemplateName"].isNull())
		job_.templateName = jobNode["TemplateName"].asString();
	if(!jobNode["Type"].isNull())
		job_.type = jobNode["Type"].asString();

}

GetEdgeTranscodeJobResult::Job GetEdgeTranscodeJobResult::getJob()const
{
	return job_;
}

