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

#include <alibabacloud/outboundbot/model/GetAnnotationMissionSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetAnnotationMissionSummaryResult::GetAnnotationMissionSummaryResult() :
	ServiceResult()
{}

GetAnnotationMissionSummaryResult::GetAnnotationMissionSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAnnotationMissionSummaryResult::~GetAnnotationMissionSummaryResult()
{}

void GetAnnotationMissionSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AnnotationMissionId"].isNull())
		data_.annotationMissionId = dataNode["AnnotationMissionId"].asString();
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto intentSummaryInfoNode = dataNode["IntentSummaryInfo"];
	if(!intentSummaryInfoNode["IntentUserSayCount"].isNull())
		data_.intentSummaryInfo.intentUserSayCount = std::stoi(intentSummaryInfoNode["IntentUserSayCount"].asString());
	if(!intentSummaryInfoNode["AnnotationCorrectCount"].isNull())
		data_.intentSummaryInfo.annotationCorrectCount = std::stoi(intentSummaryInfoNode["AnnotationCorrectCount"].asString());
	if(!intentSummaryInfoNode["MatchErrorCount"].isNull())
		data_.intentSummaryInfo.matchErrorCount = std::stoi(intentSummaryInfoNode["MatchErrorCount"].asString());
	if(!intentSummaryInfoNode["AnnotationInvalid"].isNull())
		data_.intentSummaryInfo.annotationInvalid = std::stoi(intentSummaryInfoNode["AnnotationInvalid"].asString());
	if(!intentSummaryInfoNode["NoAnnotation"].isNull())
		data_.intentSummaryInfo.noAnnotation = std::stoi(intentSummaryInfoNode["NoAnnotation"].asString());
	if(!intentSummaryInfoNode["ChatTotalCount"].isNull())
		data_.intentSummaryInfo.chatTotalCount = std::stoi(intentSummaryInfoNode["ChatTotalCount"].asString());
	if(!intentSummaryInfoNode["TranslationUnrecognizedCount"].isNull())
		data_.intentSummaryInfo.translationUnrecognizedCount = std::stoi(intentSummaryInfoNode["TranslationUnrecognizedCount"].asString());
	if(!intentSummaryInfoNode["IntentionNotCoveredCount"].isNull())
		data_.intentSummaryInfo.intentionNotCoveredCount = std::stoi(intentSummaryInfoNode["IntentionNotCoveredCount"].asString());
	auto asrSummaryInfoNode = dataNode["AsrSummaryInfo"];
	if(!asrSummaryInfoNode["WordErrorRate"].isNull())
		data_.asrSummaryInfo.wordErrorRate = std::stoi(asrSummaryInfoNode["WordErrorRate"].asString());
	if(!asrSummaryInfoNode["CharacterErrorRate"].isNull())
		data_.asrSummaryInfo.characterErrorRate = std::stoi(asrSummaryInfoNode["CharacterErrorRate"].asString());
	if(!asrSummaryInfoNode["SentenceErrorRate"].isNull())
		data_.asrSummaryInfo.sentenceErrorRate = std::stoi(asrSummaryInfoNode["SentenceErrorRate"].asString());
	if(!asrSummaryInfoNode["AnnotationInvalid"].isNull())
		data_.asrSummaryInfo.annotationInvalid = std::stoi(asrSummaryInfoNode["AnnotationInvalid"].asString());
	if(!asrSummaryInfoNode["NoAnnotation"].isNull())
		data_.asrSummaryInfo.noAnnotation = std::stoi(asrSummaryInfoNode["NoAnnotation"].asString());
	if(!asrSummaryInfoNode["ChatTotalCount"].isNull())
		data_.asrSummaryInfo.chatTotalCount = std::stoi(asrSummaryInfoNode["ChatTotalCount"].asString());
	if(!asrSummaryInfoNode["AddVocabularyDataCount"].isNull())
		data_.asrSummaryInfo.addVocabularyDataCount = std::stoi(asrSummaryInfoNode["AddVocabularyDataCount"].asString());
	if(!asrSummaryInfoNode["AddCustomizationDataCount"].isNull())
		data_.asrSummaryInfo.addCustomizationDataCount = std::stoi(asrSummaryInfoNode["AddCustomizationDataCount"].asString());
	if(!asrSummaryInfoNode["CharacterCorrectRate"].isNull())
		data_.asrSummaryInfo.characterCorrectRate = std::stoi(asrSummaryInfoNode["CharacterCorrectRate"].asString());
	auto tagSummaryInfoNode = dataNode["TagSummaryInfo"];
	auto allTagSummaryInfoDetailListNode = tagSummaryInfoNode["TagSummaryInfoDetailList"]["TagSummaryInfoDetailListItem"];
	for (auto tagSummaryInfoNodeTagSummaryInfoDetailListTagSummaryInfoDetailListItem : allTagSummaryInfoDetailListNode)
	{
		Data::TagSummaryInfo::TagSummaryInfoDetailListItem tagSummaryInfoDetailListItemObject;
		if(!tagSummaryInfoNodeTagSummaryInfoDetailListTagSummaryInfoDetailListItem["Name"].isNull())
			tagSummaryInfoDetailListItemObject.name = tagSummaryInfoNodeTagSummaryInfoDetailListTagSummaryInfoDetailListItem["Name"].asString();
		if(!tagSummaryInfoNodeTagSummaryInfoDetailListTagSummaryInfoDetailListItem["Count"].isNull())
			tagSummaryInfoDetailListItemObject.count = std::stoi(tagSummaryInfoNodeTagSummaryInfoDetailListTagSummaryInfoDetailListItem["Count"].asString());
		data_.tagSummaryInfo.tagSummaryInfoDetailList.push_back(tagSummaryInfoDetailListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetAnnotationMissionSummaryResult::getMessage()const
{
	return message_;
}

int GetAnnotationMissionSummaryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetAnnotationMissionSummaryResult::Data GetAnnotationMissionSummaryResult::getData()const
{
	return data_;
}

std::string GetAnnotationMissionSummaryResult::getCode()const
{
	return code_;
}

bool GetAnnotationMissionSummaryResult::getSuccess()const
{
	return success_;
}

