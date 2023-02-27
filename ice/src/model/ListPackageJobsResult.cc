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

#include <alibabacloud/ice/model/ListPackageJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListPackageJobsResult::ListPackageJobsResult() :
	ServiceResult()
{}

ListPackageJobsResult::ListPackageJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPackageJobsResult::~ListPackageJobsResult()
{}

void ListPackageJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto packageJobListNode = value["PackageJobList"];
	if(!packageJobListNode["NextPageToken"].isNull())
		packageJobList_.nextPageToken = packageJobListNode["NextPageToken"].asString();
	auto allPackageJobsNode = packageJobListNode["PackageJobs"]["PackageJob"];
	for (auto packageJobListNodePackageJobsPackageJob : allPackageJobsNode)
	{
		PackageJobList::PackageJob packageJobObject;
		if(!packageJobListNodePackageJobsPackageJob["JobId"].isNull())
			packageJobObject.jobId = packageJobListNodePackageJobsPackageJob["JobId"].asString();
		if(!packageJobListNodePackageJobsPackageJob["TriggerSource"].isNull())
			packageJobObject.triggerSource = packageJobListNodePackageJobsPackageJob["TriggerSource"].asString();
		if(!packageJobListNodePackageJobsPackageJob["Name"].isNull())
			packageJobObject.name = packageJobListNodePackageJobsPackageJob["Name"].asString();
		if(!packageJobListNodePackageJobsPackageJob["TemplateId"].isNull())
			packageJobObject.templateId = packageJobListNodePackageJobsPackageJob["TemplateId"].asString();
		if(!packageJobListNodePackageJobsPackageJob["PipelineId"].isNull())
			packageJobObject.pipelineId = packageJobListNodePackageJobsPackageJob["PipelineId"].asString();
		if(!packageJobListNodePackageJobsPackageJob["Priority"].isNull())
			packageJobObject.priority = std::stoi(packageJobListNodePackageJobsPackageJob["Priority"].asString());
		if(!packageJobListNodePackageJobsPackageJob["Status"].isNull())
			packageJobObject.status = packageJobListNodePackageJobsPackageJob["Status"].asString();
		if(!packageJobListNodePackageJobsPackageJob["Code"].isNull())
			packageJobObject.code = packageJobListNodePackageJobsPackageJob["Code"].asString();
		if(!packageJobListNodePackageJobsPackageJob["Message"].isNull())
			packageJobObject.message = packageJobListNodePackageJobsPackageJob["Message"].asString();
		if(!packageJobListNodePackageJobsPackageJob["SubmitTime"].isNull())
			packageJobObject.submitTime = packageJobListNodePackageJobsPackageJob["SubmitTime"].asString();
		if(!packageJobListNodePackageJobsPackageJob["FinishTime"].isNull())
			packageJobObject.finishTime = packageJobListNodePackageJobsPackageJob["FinishTime"].asString();
		if(!packageJobListNodePackageJobsPackageJob["UserData"].isNull())
			packageJobObject.userData = packageJobListNodePackageJobsPackageJob["UserData"].asString();
		if(!packageJobListNodePackageJobsPackageJob["CreateTime"].isNull())
			packageJobObject.createTime = packageJobListNodePackageJobsPackageJob["CreateTime"].asString();
		if(!packageJobListNodePackageJobsPackageJob["ModifiedTime"].isNull())
			packageJobObject.modifiedTime = packageJobListNodePackageJobsPackageJob["ModifiedTime"].asString();
		auto allInputsNode = packageJobListNodePackageJobsPackageJob["Inputs"]["Input"];
		for (auto packageJobListNodePackageJobsPackageJobInputsInput : allInputsNode)
		{
			PackageJobList::PackageJob::Input inputsObject;
			auto allAudiosNode = packageJobListNodePackageJobsPackageJobInputsInput["Audios"]["Audio"];
			for (auto packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio : allAudiosNode)
			{
				PackageJobList::PackageJob::Input::Audio audiosObject;
				if(!packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Name"].isNull())
					audiosObject.name = packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Name"].asString();
				if(!packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Codec"].isNull())
					audiosObject.codec = packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Codec"].asString();
				if(!packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Bandwidth"].isNull())
					audiosObject.bandwidth = std::stol(packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Bandwidth"].asString());
				if(!packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Bitrate"].isNull())
					audiosObject.bitrate = std::stof(packageJobListNodePackageJobsPackageJobInputsInputAudiosAudio["Bitrate"].asString());
				auto input1Node = value["Input"];
				if(!input1Node["Type"].isNull())
					audiosObject.input1.type = input1Node["Type"].asString();
				if(!input1Node["Media"].isNull())
					audiosObject.input1.media = input1Node["Media"].asString();
				inputsObject.audios.push_back(audiosObject);
			}
			auto allSubtitlesNode = packageJobListNodePackageJobsPackageJobInputsInput["Subtitles"]["Subtitle"];
			for (auto packageJobListNodePackageJobsPackageJobInputsInputSubtitlesSubtitle : allSubtitlesNode)
			{
				PackageJobList::PackageJob::Input::Subtitle subtitlesObject;
				if(!packageJobListNodePackageJobsPackageJobInputsInputSubtitlesSubtitle["Name"].isNull())
					subtitlesObject.name = packageJobListNodePackageJobsPackageJobInputsInputSubtitlesSubtitle["Name"].asString();
				if(!packageJobListNodePackageJobsPackageJobInputsInputSubtitlesSubtitle["Language"].isNull())
					subtitlesObject.language = packageJobListNodePackageJobsPackageJobInputsInputSubtitlesSubtitle["Language"].asString();
				auto input2Node = value["Input"];
				if(!input2Node["Type"].isNull())
					subtitlesObject.input2.type = input2Node["Type"].asString();
				if(!input2Node["Media"].isNull())
					subtitlesObject.input2.media = input2Node["Media"].asString();
				inputsObject.subtitles.push_back(subtitlesObject);
			}
			auto input3Node = value["Input"];
			if(!input3Node["Type"].isNull())
				inputsObject.input3.type = input3Node["Type"].asString();
			if(!input3Node["Media"].isNull())
				inputsObject.input3.media = input3Node["Media"].asString();
			auto packageConfigNode = value["PackageConfig"];
			if(!packageConfigNode["Codec"].isNull())
				inputsObject.packageConfig.codec = packageConfigNode["Codec"].asString();
			if(!packageConfigNode["Bandwidth"].isNull())
				inputsObject.packageConfig.bandwidth = std::stol(packageConfigNode["Bandwidth"].asString());
			if(!packageConfigNode["Bitrate"].isNull())
				inputsObject.packageConfig.bitrate = std::stof(packageConfigNode["Bitrate"].asString());
			packageJobObject.inputs.push_back(inputsObject);
		}
		auto outputNode = value["Output"];
		if(!outputNode["Type"].isNull())
			packageJobObject.output.type = outputNode["Type"].asString();
		if(!outputNode["Media"].isNull())
			packageJobObject.output.media = outputNode["Media"].asString();
		packageJobList_.packageJobs.push_back(packageJobObject);
	}

}

ListPackageJobsResult::PackageJobList ListPackageJobsResult::getPackageJobList()const
{
	return packageJobList_;
}

