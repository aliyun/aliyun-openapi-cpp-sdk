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

#include <alibabacloud/mts/model/QueryMcuJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMcuJobResult::QueryMcuJobResult() :
	ServiceResult()
{}

QueryMcuJobResult::QueryMcuJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMcuJobResult::~QueryMcuJobResult()
{}

void QueryMcuJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobResultNode = value["JobResult"]["Job"];
	for (auto valueJobResultJob : allJobResultNode)
	{
		Job jobResultObject;
		if(!valueJobResultJob["JobId"].isNull())
			jobResultObject.jobId = valueJobResultJob["JobId"].asString();
		if(!valueJobResultJob["Template"].isNull())
			jobResultObject._template = valueJobResultJob["Template"].asString();
		if(!valueJobResultJob["UserData"].isNull())
			jobResultObject.userData = valueJobResultJob["UserData"].asString();
		if(!valueJobResultJob["TemplateId"].isNull())
			jobResultObject.templateId = valueJobResultJob["TemplateId"].asString();
		auto allTagResultNode = valueJobResultJob["TagResult"]["Tag"];
		for (auto valueJobResultJobTagResultTag : allTagResultNode)
		{
			Job::Tag tagResultObject;
			if(!valueJobResultJobTagResultTag["Time"].isNull())
				tagResultObject.time = valueJobResultJobTagResultTag["Time"].asString();
			if(!valueJobResultJobTagResultTag["ImageUrl"].isNull())
				tagResultObject.imageUrl = valueJobResultJobTagResultTag["ImageUrl"].asString();
			if(!valueJobResultJobTagResultTag["ImageId"].isNull())
				tagResultObject.imageId = valueJobResultJobTagResultTag["ImageId"].asString();
			auto allFrameTagInfosNode = valueJobResultJobTagResultTag["FrameTagInfos"]["FrameTagInfo"];
			for (auto valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo : allFrameTagInfosNode)
			{
				Job::Tag::FrameTagInfo frameTagInfosObject;
				if(!valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo["Score"].isNull())
					frameTagInfosObject.score = valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo["Score"].asString();
				if(!valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo["Category"].isNull())
					frameTagInfosObject.category = valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo["Category"].asString();
				if(!valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo["Tag"].isNull())
					frameTagInfosObject.tag = valueJobResultJobTagResultTagFrameTagInfosFrameTagInfo["Tag"].asString();
				tagResultObject.frameTagInfos.push_back(frameTagInfosObject);
			}
			jobResultObject.tagResult.push_back(tagResultObject);
		}
		auto allOcrResultNode = valueJobResultJob["OcrResult"]["Ocr"];
		for (auto valueJobResultJobOcrResultOcr : allOcrResultNode)
		{
			Job::Ocr ocrResultObject;
			if(!valueJobResultJobOcrResultOcr["Time"].isNull())
				ocrResultObject.time = valueJobResultJobOcrResultOcr["Time"].asString();
			if(!valueJobResultJobOcrResultOcr["ImageUrl"].isNull())
				ocrResultObject.imageUrl = valueJobResultJobOcrResultOcr["ImageUrl"].asString();
			if(!valueJobResultJobOcrResultOcr["OcrText"].isNull())
				ocrResultObject.ocrText = valueJobResultJobOcrResultOcr["OcrText"].asString();
			if(!valueJobResultJobOcrResultOcr["ImageId"].isNull())
				ocrResultObject.imageId = valueJobResultJobOcrResultOcr["ImageId"].asString();
			jobResultObject.ocrResult.push_back(ocrResultObject);
		}
		auto allSubTaskInfoNode = valueJobResultJob["SubTaskInfo"]["SubTask"];
		for (auto valueJobResultJobSubTaskInfoSubTask : allSubTaskInfoNode)
		{
			Job::SubTask subTaskInfoObject;
			if(!valueJobResultJobSubTaskInfoSubTask["Type"].isNull())
				subTaskInfoObject.type = valueJobResultJobSubTaskInfoSubTask["Type"].asString();
			if(!valueJobResultJobSubTaskInfoSubTask["Code"].isNull())
				subTaskInfoObject.code = valueJobResultJobSubTaskInfoSubTask["Code"].asString();
			if(!valueJobResultJobSubTaskInfoSubTask["Message"].isNull())
				subTaskInfoObject.message = valueJobResultJobSubTaskInfoSubTask["Message"].asString();
			jobResultObject.subTaskInfo.push_back(subTaskInfoObject);
		}
		auto allFaceResultNode = valueJobResultJob["FaceResult"]["Face"];
		for (auto valueJobResultJobFaceResultFace : allFaceResultNode)
		{
			Job::Face faceResultObject;
			if(!valueJobResultJobFaceResultFace["Time"].isNull())
				faceResultObject.time = valueJobResultJobFaceResultFace["Time"].asString();
			if(!valueJobResultJobFaceResultFace["ImageUrl"].isNull())
				faceResultObject.imageUrl = valueJobResultJobFaceResultFace["ImageUrl"].asString();
			if(!valueJobResultJobFaceResultFace["ImageId"].isNull())
				faceResultObject.imageId = valueJobResultJobFaceResultFace["ImageId"].asString();
			auto allCelebritiesNode = valueJobResultJobFaceResultFace["Celebrities"]["Celebrity"];
			for (auto valueJobResultJobFaceResultFaceCelebritiesCelebrity : allCelebritiesNode)
			{
				Job::Face::Celebrity celebritiesObject;
				if(!valueJobResultJobFaceResultFaceCelebritiesCelebrity["Score"].isNull())
					celebritiesObject.score = valueJobResultJobFaceResultFaceCelebritiesCelebrity["Score"].asString();
				if(!valueJobResultJobFaceResultFaceCelebritiesCelebrity["Name"].isNull())
					celebritiesObject.name = valueJobResultJobFaceResultFaceCelebritiesCelebrity["Name"].asString();
				if(!valueJobResultJobFaceResultFaceCelebritiesCelebrity["Target"].isNull())
					celebritiesObject.target = valueJobResultJobFaceResultFaceCelebritiesCelebrity["Target"].asString();
				faceResultObject.celebrities.push_back(celebritiesObject);
			}
			jobResultObject.faceResult.push_back(faceResultObject);
		}
		auto categoryResultNode = value["CategoryResult"];
		if(!categoryResultNode["Details"].isNull())
			jobResultObject.categoryResult.details = categoryResultNode["Details"].asString();
		auto allCategoriesNode = categoryResultNode["Categories"]["Category"];
		for (auto categoryResultNodeCategoriesCategory : allCategoriesNode)
		{
			Job::CategoryResult::Category categoryObject;
			if(!categoryResultNodeCategoriesCategory["Score"].isNull())
				categoryObject.score = categoryResultNodeCategoriesCategory["Score"].asString();
			if(!categoryResultNodeCategoriesCategory["Label"].isNull())
				categoryObject.label = categoryResultNodeCategoriesCategory["Label"].asString();
			jobResultObject.categoryResult.categories.push_back(categoryObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			jobResultObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			jobResultObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			jobResultObject.input.bucket = inputNode["Bucket"].asString();
		auto asrResultNode = value["AsrResult"];
		if(!asrResultNode["Duration"].isNull())
			jobResultObject.asrResult.duration = asrResultNode["Duration"].asString();
		auto allAsrTextListNode = asrResultNode["AsrTextList"]["AsrText"];
		for (auto asrResultNodeAsrTextListAsrText : allAsrTextListNode)
		{
			Job::AsrResult::AsrText asrTextObject;
			if(!asrResultNodeAsrTextListAsrText["EndTime"].isNull())
				asrTextObject.endTime = asrResultNodeAsrTextListAsrText["EndTime"].asString();
			if(!asrResultNodeAsrTextListAsrText["StartTime"].isNull())
				asrTextObject.startTime = std::stoi(asrResultNodeAsrTextListAsrText["StartTime"].asString());
			if(!asrResultNodeAsrTextListAsrText["ChannelId"].isNull())
				asrTextObject.channelId = asrResultNodeAsrTextListAsrText["ChannelId"].asString();
			if(!asrResultNodeAsrTextListAsrText["Text"].isNull())
				asrTextObject.text = asrResultNodeAsrTextListAsrText["Text"].asString();
			if(!asrResultNodeAsrTextListAsrText["SpeechRate"].isNull())
				asrTextObject.speechRate = asrResultNodeAsrTextListAsrText["SpeechRate"].asString();
			jobResultObject.asrResult.asrTextList.push_back(asrTextObject);
		}
		jobResult_.push_back(jobResultObject);
	}
	auto allNonExistJobIds = value["NonExistJobIds"]["String"];
	for (const auto &item : allNonExistJobIds)
		nonExistJobIds_.push_back(item.asString());

}

std::vector<std::string> QueryMcuJobResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<QueryMcuJobResult::Job> QueryMcuJobResult::getJobResult()const
{
	return jobResult_;
}

