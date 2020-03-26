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
		if(!valueJobResultJob["UserData"].isNull())
			jobResultObject.userData = valueJobResultJob["UserData"].asString();
		if(!valueJobResultJob["TemplateId"].isNull())
			jobResultObject.templateId = valueJobResultJob["TemplateId"].asString();
		if(!valueJobResultJob["Template"].isNull())
			jobResultObject._template = valueJobResultJob["Template"].asString();
		auto allOcrResultNode = allJobResultNode["OcrResult"]["Ocr"];
		for (auto allJobResultNodeOcrResultOcr : allOcrResultNode)
		{
			Job::Ocr ocrResultObject;
			if(!allJobResultNodeOcrResultOcr["Time"].isNull())
				ocrResultObject.time = allJobResultNodeOcrResultOcr["Time"].asString();
			if(!allJobResultNodeOcrResultOcr["OcrText"].isNull())
				ocrResultObject.ocrText = allJobResultNodeOcrResultOcr["OcrText"].asString();
			if(!allJobResultNodeOcrResultOcr["ImageUrl"].isNull())
				ocrResultObject.imageUrl = allJobResultNodeOcrResultOcr["ImageUrl"].asString();
			if(!allJobResultNodeOcrResultOcr["ImageId"].isNull())
				ocrResultObject.imageId = allJobResultNodeOcrResultOcr["ImageId"].asString();
			jobResultObject.ocrResult.push_back(ocrResultObject);
		}
		auto allTagResultNode = allJobResultNode["TagResult"]["Tag"];
		for (auto allJobResultNodeTagResultTag : allTagResultNode)
		{
			Job::Tag tagResultObject;
			if(!allJobResultNodeTagResultTag["Time"].isNull())
				tagResultObject.time = allJobResultNodeTagResultTag["Time"].asString();
			if(!allJobResultNodeTagResultTag["ImageUrl"].isNull())
				tagResultObject.imageUrl = allJobResultNodeTagResultTag["ImageUrl"].asString();
			if(!allJobResultNodeTagResultTag["ImageId"].isNull())
				tagResultObject.imageId = allJobResultNodeTagResultTag["ImageId"].asString();
			auto allFrameTagInfosNode = allTagResultNode["FrameTagInfos"]["FrameTagInfo"];
			for (auto allTagResultNodeFrameTagInfosFrameTagInfo : allFrameTagInfosNode)
			{
				Job::Tag::FrameTagInfo frameTagInfosObject;
				if(!allTagResultNodeFrameTagInfosFrameTagInfo["Tag"].isNull())
					frameTagInfosObject.tag = allTagResultNodeFrameTagInfosFrameTagInfo["Tag"].asString();
				if(!allTagResultNodeFrameTagInfosFrameTagInfo["Score"].isNull())
					frameTagInfosObject.score = allTagResultNodeFrameTagInfosFrameTagInfo["Score"].asString();
				if(!allTagResultNodeFrameTagInfosFrameTagInfo["Category"].isNull())
					frameTagInfosObject.category = allTagResultNodeFrameTagInfosFrameTagInfo["Category"].asString();
				tagResultObject.frameTagInfos.push_back(frameTagInfosObject);
			}
			jobResultObject.tagResult.push_back(tagResultObject);
		}
		auto allFaceResultNode = allJobResultNode["FaceResult"]["Face"];
		for (auto allJobResultNodeFaceResultFace : allFaceResultNode)
		{
			Job::Face faceResultObject;
			if(!allJobResultNodeFaceResultFace["Time"].isNull())
				faceResultObject.time = allJobResultNodeFaceResultFace["Time"].asString();
			if(!allJobResultNodeFaceResultFace["ImageUrl"].isNull())
				faceResultObject.imageUrl = allJobResultNodeFaceResultFace["ImageUrl"].asString();
			if(!allJobResultNodeFaceResultFace["ImageId"].isNull())
				faceResultObject.imageId = allJobResultNodeFaceResultFace["ImageId"].asString();
			auto allCelebritiesNode = allFaceResultNode["Celebrities"]["Celebrity"];
			for (auto allFaceResultNodeCelebritiesCelebrity : allCelebritiesNode)
			{
				Job::Face::Celebrity celebritiesObject;
				if(!allFaceResultNodeCelebritiesCelebrity["Name"].isNull())
					celebritiesObject.name = allFaceResultNodeCelebritiesCelebrity["Name"].asString();
				if(!allFaceResultNodeCelebritiesCelebrity["Score"].isNull())
					celebritiesObject.score = allFaceResultNodeCelebritiesCelebrity["Score"].asString();
				if(!allFaceResultNodeCelebritiesCelebrity["Target"].isNull())
					celebritiesObject.target = allFaceResultNodeCelebritiesCelebrity["Target"].asString();
				faceResultObject.celebrities.push_back(celebritiesObject);
			}
			jobResultObject.faceResult.push_back(faceResultObject);
		}
		auto allSubTaskInfoNode = allJobResultNode["SubTaskInfo"]["SubTask"];
		for (auto allJobResultNodeSubTaskInfoSubTask : allSubTaskInfoNode)
		{
			Job::SubTask subTaskInfoObject;
			if(!allJobResultNodeSubTaskInfoSubTask["Type"].isNull())
				subTaskInfoObject.type = allJobResultNodeSubTaskInfoSubTask["Type"].asString();
			if(!allJobResultNodeSubTaskInfoSubTask["Code"].isNull())
				subTaskInfoObject.code = allJobResultNodeSubTaskInfoSubTask["Code"].asString();
			if(!allJobResultNodeSubTaskInfoSubTask["Message"].isNull())
				subTaskInfoObject.message = allJobResultNodeSubTaskInfoSubTask["Message"].asString();
			jobResultObject.subTaskInfo.push_back(subTaskInfoObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			jobResultObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			jobResultObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			jobResultObject.input.object = inputNode["Object"].asString();
		auto asrResultNode = value["AsrResult"];
		if(!asrResultNode["Duration"].isNull())
			jobResultObject.asrResult.duration = asrResultNode["Duration"].asString();
		auto allAsrTextListNode = asrResultNode["AsrTextList"]["AsrText"];
		for (auto asrResultNodeAsrTextListAsrText : allAsrTextListNode)
		{
			Job::AsrResult::AsrText asrTextObject;
			if(!asrResultNodeAsrTextListAsrText["StartTime"].isNull())
				asrTextObject.startTime = std::stoi(asrResultNodeAsrTextListAsrText["StartTime"].asString());
			if(!asrResultNodeAsrTextListAsrText["EndTime"].isNull())
				asrTextObject.endTime = asrResultNodeAsrTextListAsrText["EndTime"].asString();
			if(!asrResultNodeAsrTextListAsrText["ChannelId"].isNull())
				asrTextObject.channelId = asrResultNodeAsrTextListAsrText["ChannelId"].asString();
			if(!asrResultNodeAsrTextListAsrText["SpeechRate"].isNull())
				asrTextObject.speechRate = asrResultNodeAsrTextListAsrText["SpeechRate"].asString();
			if(!asrResultNodeAsrTextListAsrText["Text"].isNull())
				asrTextObject.text = asrResultNodeAsrTextListAsrText["Text"].asString();
			jobResultObject.asrResult.asrTextList.push_back(asrTextObject);
		}
		auto categoryResultNode = value["CategoryResult"];
		if(!categoryResultNode["Details"].isNull())
			jobResultObject.categoryResult.details = categoryResultNode["Details"].asString();
		auto allCategoriesNode = categoryResultNode["Categories"]["Category"];
		for (auto categoryResultNodeCategoriesCategory : allCategoriesNode)
		{
			Job::CategoryResult::Category categoryObject;
			if(!categoryResultNodeCategoriesCategory["Label"].isNull())
				categoryObject.label = categoryResultNodeCategoriesCategory["Label"].asString();
			if(!categoryResultNodeCategoriesCategory["Score"].isNull())
				categoryObject.score = categoryResultNodeCategoriesCategory["Score"].asString();
			jobResultObject.categoryResult.categories.push_back(categoryObject);
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

