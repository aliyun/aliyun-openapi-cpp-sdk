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
	auto allJobResult = value["JobResult"]["Job"];
	for (auto value : allJobResult)
	{
		Job jobResultObject;
		if(!value["JobId"].isNull())
			jobResultObject.jobId = value["JobId"].asString();
		if(!value["UserData"].isNull())
			jobResultObject.userData = value["UserData"].asString();
		if(!value["TemplateId"].isNull())
			jobResultObject.templateId = value["TemplateId"].asString();
		if(!value["Template"].isNull())
			jobResultObject._template = value["Template"].asString();
		auto allOcrResult = value["OcrResult"]["Ocr"];
		for (auto value : allOcrResult)
		{
			Job::Ocr ocrResultObject;
			if(!value["Time"].isNull())
				ocrResultObject.time = value["Time"].asString();
			if(!value["OcrText"].isNull())
				ocrResultObject.ocrText = value["OcrText"].asString();
			if(!value["ImageUrl"].isNull())
				ocrResultObject.imageUrl = value["ImageUrl"].asString();
			if(!value["ImageId"].isNull())
				ocrResultObject.imageId = value["ImageId"].asString();
			jobResultObject.ocrResult.push_back(ocrResultObject);
		}
		auto allTagResult = value["TagResult"]["Tag"];
		for (auto value : allTagResult)
		{
			Job::Tag tagResultObject;
			if(!value["Time"].isNull())
				tagResultObject.time = value["Time"].asString();
			if(!value["ImageUrl"].isNull())
				tagResultObject.imageUrl = value["ImageUrl"].asString();
			if(!value["ImageId"].isNull())
				tagResultObject.imageId = value["ImageId"].asString();
			auto allFrameTagInfos = value["FrameTagInfos"]["FrameTagInfo"];
			for (auto value : allFrameTagInfos)
			{
				Job::Tag::FrameTagInfo frameTagInfosObject;
				if(!value["Tag"].isNull())
					frameTagInfosObject.tag = value["Tag"].asString();
				if(!value["Score"].isNull())
					frameTagInfosObject.score = value["Score"].asString();
				if(!value["Category"].isNull())
					frameTagInfosObject.category = value["Category"].asString();
				tagResultObject.frameTagInfos.push_back(frameTagInfosObject);
			}
			jobResultObject.tagResult.push_back(tagResultObject);
		}
		auto allFaceResult = value["FaceResult"]["Face"];
		for (auto value : allFaceResult)
		{
			Job::Face faceResultObject;
			if(!value["Time"].isNull())
				faceResultObject.time = value["Time"].asString();
			if(!value["ImageUrl"].isNull())
				faceResultObject.imageUrl = value["ImageUrl"].asString();
			if(!value["ImageId"].isNull())
				faceResultObject.imageId = value["ImageId"].asString();
			auto allCelebrities = value["Celebrities"]["Celebrity"];
			for (auto value : allCelebrities)
			{
				Job::Face::Celebrity celebritiesObject;
				if(!value["Name"].isNull())
					celebritiesObject.name = value["Name"].asString();
				if(!value["Score"].isNull())
					celebritiesObject.score = value["Score"].asString();
				if(!value["Target"].isNull())
					celebritiesObject.target = value["Target"].asString();
				faceResultObject.celebrities.push_back(celebritiesObject);
			}
			jobResultObject.faceResult.push_back(faceResultObject);
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
		auto allAsrTextList = value["AsrTextList"]["AsrText"];
		for (auto value : allAsrTextList)
		{
			Job::AsrResult::AsrText asrTextObject;
			if(!value["StartTime"].isNull())
				asrTextObject.startTime = std::stoi(value["StartTime"].asString());
			if(!value["EndTime"].isNull())
				asrTextObject.endTime = value["EndTime"].asString();
			if(!value["ChannelId"].isNull())
				asrTextObject.channelId = value["ChannelId"].asString();
			if(!value["SpeechRate"].isNull())
				asrTextObject.speechRate = value["SpeechRate"].asString();
			if(!value["Text"].isNull())
				asrTextObject.text = value["Text"].asString();
			jobResultObject.asrResult.asrTextList.push_back(asrTextObject);
		}
		auto categoryResultNode = value["CategoryResult"];
		if(!categoryResultNode["Details"].isNull())
			jobResultObject.categoryResult.details = categoryResultNode["Details"].asString();
		auto allCategories = value["Categories"]["Category"];
		for (auto value : allCategories)
		{
			Job::CategoryResult::Category categoryObject;
			if(!value["Label"].isNull())
				categoryObject.label = value["Label"].asString();
			if(!value["Score"].isNull())
				categoryObject.score = value["Score"].asString();
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

