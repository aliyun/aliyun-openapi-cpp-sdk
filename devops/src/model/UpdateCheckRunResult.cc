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

#include <alibabacloud/devops/model/UpdateCheckRunResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateCheckRunResult::UpdateCheckRunResult() :
	ServiceResult()
{}

UpdateCheckRunResult::UpdateCheckRunResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateCheckRunResult::~UpdateCheckRunResult()
{}

void UpdateCheckRunResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["startedAt"].isNull())
		result_.startedAt = resultNode["startedAt"].asString();
	if(!resultNode["completedAt"].isNull())
		result_.completedAt = resultNode["completedAt"].asString();
	if(!resultNode["externalId"].isNull())
		result_.externalId = resultNode["externalId"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["headSha"].isNull())
		result_.headSha = resultNode["headSha"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["conclusion"].isNull())
		result_.conclusion = resultNode["conclusion"].asString();
	if(!resultNode["detailsUrl"].isNull())
		result_.detailsUrl = resultNode["detailsUrl"].asString();
	auto allannotationsNode = resultNode["annotations"]["check_run_annotations"];
	for (auto resultNodeannotationscheck_run_annotations : allannotationsNode)
	{
		Result::Check_run_annotations check_run_annotationsObject;
		if(!resultNodeannotationscheck_run_annotations["id"].isNull())
			check_run_annotationsObject.id = std::stol(resultNodeannotationscheck_run_annotations["id"].asString());
		if(!resultNodeannotationscheck_run_annotations["path"].isNull())
			check_run_annotationsObject.path = resultNodeannotationscheck_run_annotations["path"].asString();
		if(!resultNodeannotationscheck_run_annotations["startLine"].isNull())
			check_run_annotationsObject.startLine = std::stol(resultNodeannotationscheck_run_annotations["startLine"].asString());
		if(!resultNodeannotationscheck_run_annotations["endLine"].isNull())
			check_run_annotationsObject.endLine = std::stol(resultNodeannotationscheck_run_annotations["endLine"].asString());
		if(!resultNodeannotationscheck_run_annotations["startColumn"].isNull())
			check_run_annotationsObject.startColumn = std::stol(resultNodeannotationscheck_run_annotations["startColumn"].asString());
		if(!resultNodeannotationscheck_run_annotations["endColumn"].isNull())
			check_run_annotationsObject.endColumn = std::stol(resultNodeannotationscheck_run_annotations["endColumn"].asString());
		if(!resultNodeannotationscheck_run_annotations["annotationLevel"].isNull())
			check_run_annotationsObject.annotationLevel = resultNodeannotationscheck_run_annotations["annotationLevel"].asString();
		if(!resultNodeannotationscheck_run_annotations["message"].isNull())
			check_run_annotationsObject.message = resultNodeannotationscheck_run_annotations["message"].asString();
		if(!resultNodeannotationscheck_run_annotations["title"].isNull())
			check_run_annotationsObject.title = resultNodeannotationscheck_run_annotations["title"].asString();
		if(!resultNodeannotationscheck_run_annotations["rawDetails"].isNull())
			check_run_annotationsObject.rawDetails = resultNodeannotationscheck_run_annotations["rawDetails"].asString();
		result_.annotations.push_back(check_run_annotationsObject);
	}
	auto checkSuiteNode = resultNode["checkSuite"];
	if(!checkSuiteNode["id"].isNull())
		result_.checkSuite.id = std::stol(checkSuiteNode["id"].asString());
	auto writerNode = resultNode["writer"];
	if(!writerNode["id"].isNull())
		result_.writer.id = writerNode["id"].asString();
	if(!writerNode["type"].isNull())
		result_.writer.type = writerNode["type"].asString();
	if(!writerNode["name"].isNull())
		result_.writer.name = writerNode["name"].asString();
	if(!writerNode["slug"].isNull())
		result_.writer.slug = writerNode["slug"].asString();
	if(!writerNode["logoUrl"].isNull())
		result_.writer.logoUrl = writerNode["logoUrl"].asString();
	auto outputNode = resultNode["output"];
	if(!outputNode["title"].isNull())
		result_.output.title = outputNode["title"].asString();
	if(!outputNode["summary"].isNull())
		result_.output.summary = outputNode["summary"].asString();
	if(!outputNode["text"].isNull())
		result_.output.text = outputNode["text"].asString();
	auto allimagesNode = outputNode["images"]["output_images"];
	for (auto outputNodeimagesoutput_images : allimagesNode)
	{
		Result::Output::Output_images output_imagesObject;
		if(!outputNodeimagesoutput_images["alt"].isNull())
			output_imagesObject.alt = outputNodeimagesoutput_images["alt"].asString();
		if(!outputNodeimagesoutput_images["imageUrl"].isNull())
			output_imagesObject.imageUrl = outputNodeimagesoutput_images["imageUrl"].asString();
		if(!outputNodeimagesoutput_images["caption"].isNull())
			output_imagesObject.caption = outputNodeimagesoutput_images["caption"].asString();
		result_.output.images.push_back(output_imagesObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::string UpdateCheckRunResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateCheckRunResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateCheckRunResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateCheckRunResult::getSuccess()const
{
	return success_;
}

UpdateCheckRunResult::Result UpdateCheckRunResult::getResult()const
{
	return result_;
}

