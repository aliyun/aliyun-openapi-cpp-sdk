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

#include <alibabacloud/ice/model/GetLiveTranscodeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveTranscodeJobResult::GetLiveTranscodeJobResult() :
	ServiceResult()
{}

GetLiveTranscodeJobResult::GetLiveTranscodeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveTranscodeJobResult::~GetLiveTranscodeJobResult()
{}

void GetLiveTranscodeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["Name"].isNull())
		job_.name = jobNode["Name"].asString();
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["TemplateType"].isNull())
		job_.templateType = jobNode["TemplateType"].asString();
	if(!jobNode["TemplateId"].isNull())
		job_.templateId = jobNode["TemplateId"].asString();
	if(!jobNode["TemplateName"].isNull())
		job_.templateName = jobNode["TemplateName"].asString();
	if(!jobNode["StartMode"].isNull())
		job_.startMode = std::stoi(jobNode["StartMode"].asString());
	if(!jobNode["Status"].isNull())
		job_.status = std::stoi(jobNode["Status"].asString());
	if(!jobNode["CreateTime"].isNull())
		job_.createTime = jobNode["CreateTime"].asString();
	auto streamInputNode = jobNode["StreamInput"];
	if(!streamInputNode["Type"].isNull())
		job_.streamInput.type = streamInputNode["Type"].asString();
	if(!streamInputNode["InputUrl"].isNull())
		job_.streamInput.inputUrl = streamInputNode["InputUrl"].asString();
	auto outputStreamNode = jobNode["OutputStream"];
	auto allStreamInfosNode = outputStreamNode["StreamInfos"]["streamInfo"];
	for (auto outputStreamNodeStreamInfosstreamInfo : allStreamInfosNode)
	{
		Job::OutputStream::StreamInfo streamInfoObject;
		if(!outputStreamNodeStreamInfosstreamInfo["Type"].isNull())
			streamInfoObject.type = outputStreamNodeStreamInfosstreamInfo["Type"].asString();
		if(!outputStreamNodeStreamInfosstreamInfo["OutputUrl"].isNull())
			streamInfoObject.outputUrl = outputStreamNodeStreamInfosstreamInfo["OutputUrl"].asString();
		job_.outputStream.streamInfos.push_back(streamInfoObject);
	}

}

GetLiveTranscodeJobResult::Job GetLiveTranscodeJobResult::getJob()const
{
	return job_;
}

