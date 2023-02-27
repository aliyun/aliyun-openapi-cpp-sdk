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

#include <alibabacloud/ice/model/GetPackageJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetPackageJobResult::GetPackageJobResult() :
	ServiceResult()
{}

GetPackageJobResult::GetPackageJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPackageJobResult::~GetPackageJobResult()
{}

void GetPackageJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto packageJobNode = value["PackageJob"];
	if(!packageJobNode["JobId"].isNull())
		packageJob_.jobId = packageJobNode["JobId"].asString();
	if(!packageJobNode["TriggerSource"].isNull())
		packageJob_.triggerSource = packageJobNode["TriggerSource"].asString();
	if(!packageJobNode["Name"].isNull())
		packageJob_.name = packageJobNode["Name"].asString();
	if(!packageJobNode["OutputUrl"].isNull())
		packageJob_.outputUrl = packageJobNode["OutputUrl"].asString();
	if(!packageJobNode["TemplateConfig"].isNull())
		packageJob_.templateConfig = packageJobNode["TemplateConfig"].asString();
	if(!packageJobNode["TemplateId"].isNull())
		packageJob_.templateId = packageJobNode["TemplateId"].asString();
	if(!packageJobNode["PipelineId"].isNull())
		packageJob_.pipelineId = packageJobNode["PipelineId"].asString();
	if(!packageJobNode["Priority"].isNull())
		packageJob_.priority = std::stoi(packageJobNode["Priority"].asString());
	if(!packageJobNode["Status"].isNull())
		packageJob_.status = packageJobNode["Status"].asString();
	if(!packageJobNode["Code"].isNull())
		packageJob_.code = packageJobNode["Code"].asString();
	if(!packageJobNode["Message"].isNull())
		packageJob_.message = packageJobNode["Message"].asString();
	if(!packageJobNode["SubmitTime"].isNull())
		packageJob_.submitTime = packageJobNode["SubmitTime"].asString();
	if(!packageJobNode["FinishTime"].isNull())
		packageJob_.finishTime = packageJobNode["FinishTime"].asString();
	if(!packageJobNode["UserData"].isNull())
		packageJob_.userData = packageJobNode["UserData"].asString();
	if(!packageJobNode["CreateTime"].isNull())
		packageJob_.createTime = packageJobNode["CreateTime"].asString();
	if(!packageJobNode["ModifiedTime"].isNull())
		packageJob_.modifiedTime = packageJobNode["ModifiedTime"].asString();
	auto allInputsNode = packageJobNode["Inputs"]["Input"];
	for (auto packageJobNodeInputsInput : allInputsNode)
	{
		PackageJob::Input inputObject;
		auto allAudiosNode = packageJobNodeInputsInput["Audios"]["Audio"];
		for (auto packageJobNodeInputsInputAudiosAudio : allAudiosNode)
		{
			PackageJob::Input::Audio audiosObject;
			if(!packageJobNodeInputsInputAudiosAudio["Name"].isNull())
				audiosObject.name = packageJobNodeInputsInputAudiosAudio["Name"].asString();
			if(!packageJobNodeInputsInputAudiosAudio["Codec"].isNull())
				audiosObject.codec = packageJobNodeInputsInputAudiosAudio["Codec"].asString();
			if(!packageJobNodeInputsInputAudiosAudio["Bandwidth"].isNull())
				audiosObject.bandwidth = std::stol(packageJobNodeInputsInputAudiosAudio["Bandwidth"].asString());
			if(!packageJobNodeInputsInputAudiosAudio["Bitrate"].isNull())
				audiosObject.bitrate = std::stof(packageJobNodeInputsInputAudiosAudio["Bitrate"].asString());
			auto input1Node = value["Input"];
			if(!input1Node["Type"].isNull())
				audiosObject.input1.type = input1Node["Type"].asString();
			if(!input1Node["Media"].isNull())
				audiosObject.input1.media = input1Node["Media"].asString();
			inputObject.audios.push_back(audiosObject);
		}
		auto allSubtitlesNode = packageJobNodeInputsInput["Subtitles"]["Subtitle"];
		for (auto packageJobNodeInputsInputSubtitlesSubtitle : allSubtitlesNode)
		{
			PackageJob::Input::Subtitle subtitlesObject;
			if(!packageJobNodeInputsInputSubtitlesSubtitle["Name"].isNull())
				subtitlesObject.name = packageJobNodeInputsInputSubtitlesSubtitle["Name"].asString();
			if(!packageJobNodeInputsInputSubtitlesSubtitle["Language"].isNull())
				subtitlesObject.language = packageJobNodeInputsInputSubtitlesSubtitle["Language"].asString();
			auto input2Node = value["Input"];
			if(!input2Node["Type"].isNull())
				subtitlesObject.input2.type = input2Node["Type"].asString();
			if(!input2Node["Media"].isNull())
				subtitlesObject.input2.media = input2Node["Media"].asString();
			inputObject.subtitles.push_back(subtitlesObject);
		}
		auto input3Node = value["Input"];
		if(!input3Node["Type"].isNull())
			inputObject.input3.type = input3Node["Type"].asString();
		if(!input3Node["Media"].isNull())
			inputObject.input3.media = input3Node["Media"].asString();
		auto packageConfigNode = value["PackageConfig"];
		if(!packageConfigNode["Codec"].isNull())
			inputObject.packageConfig.codec = packageConfigNode["Codec"].asString();
		if(!packageConfigNode["Bandwidth"].isNull())
			inputObject.packageConfig.bandwidth = std::stol(packageConfigNode["Bandwidth"].asString());
		if(!packageConfigNode["Bitrate"].isNull())
			inputObject.packageConfig.bitrate = std::stof(packageConfigNode["Bitrate"].asString());
		packageJob_.inputs.push_back(inputObject);
	}
	auto outputNode = packageJobNode["Output"];
	if(!outputNode["Type"].isNull())
		packageJob_.output.type = outputNode["Type"].asString();
	if(!outputNode["Media"].isNull())
		packageJob_.output.media = outputNode["Media"].asString();

}

GetPackageJobResult::PackageJob GetPackageJobResult::getPackageJob()const
{
	return packageJob_;
}

