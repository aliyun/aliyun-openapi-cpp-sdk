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

#include <alibabacloud/devops/model/ListCheckRunsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListCheckRunsResult::ListCheckRunsResult() :
	ServiceResult()
{}

ListCheckRunsResult::ListCheckRunsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckRunsResult::~ListCheckRunsResult()
{}

void ListCheckRunsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		if(!valueresultresultItem["updatedAt"].isNull())
			resultObject.updatedAt = valueresultresultItem["updatedAt"].asString();
		if(!valueresultresultItem["startedAt"].isNull())
			resultObject.startedAt = valueresultresultItem["startedAt"].asString();
		if(!valueresultresultItem["completedAt"].isNull())
			resultObject.completedAt = valueresultresultItem["completedAt"].asString();
		if(!valueresultresultItem["externalId"].isNull())
			resultObject.externalId = valueresultresultItem["externalId"].asString();
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["headSha"].isNull())
			resultObject.headSha = valueresultresultItem["headSha"].asString();
		if(!valueresultresultItem["status"].isNull())
			resultObject.status = valueresultresultItem["status"].asString();
		if(!valueresultresultItem["conclusion"].isNull())
			resultObject.conclusion = valueresultresultItem["conclusion"].asString();
		if(!valueresultresultItem["detailsUrl"].isNull())
			resultObject.detailsUrl = valueresultresultItem["detailsUrl"].asString();
		auto allannotationsNode = valueresultresultItem["annotations"]["annotationsItem"];
		for (auto valueresultresultItemannotationsannotationsItem : allannotationsNode)
		{
			ResultItem::AnnotationsItem annotationsObject;
			if(!valueresultresultItemannotationsannotationsItem["id"].isNull())
				annotationsObject.id = std::stol(valueresultresultItemannotationsannotationsItem["id"].asString());
			if(!valueresultresultItemannotationsannotationsItem["path"].isNull())
				annotationsObject.path = valueresultresultItemannotationsannotationsItem["path"].asString();
			if(!valueresultresultItemannotationsannotationsItem["startLine"].isNull())
				annotationsObject.startLine = std::stol(valueresultresultItemannotationsannotationsItem["startLine"].asString());
			if(!valueresultresultItemannotationsannotationsItem["endLine"].isNull())
				annotationsObject.endLine = std::stol(valueresultresultItemannotationsannotationsItem["endLine"].asString());
			if(!valueresultresultItemannotationsannotationsItem["startColumn"].isNull())
				annotationsObject.startColumn = std::stol(valueresultresultItemannotationsannotationsItem["startColumn"].asString());
			if(!valueresultresultItemannotationsannotationsItem["endColumn"].isNull())
				annotationsObject.endColumn = std::stol(valueresultresultItemannotationsannotationsItem["endColumn"].asString());
			if(!valueresultresultItemannotationsannotationsItem["annotationLevel"].isNull())
				annotationsObject.annotationLevel = valueresultresultItemannotationsannotationsItem["annotationLevel"].asString();
			if(!valueresultresultItemannotationsannotationsItem["message"].isNull())
				annotationsObject.message = valueresultresultItemannotationsannotationsItem["message"].asString();
			if(!valueresultresultItemannotationsannotationsItem["title"].isNull())
				annotationsObject.title = valueresultresultItemannotationsannotationsItem["title"].asString();
			if(!valueresultresultItemannotationsannotationsItem["rawDetails"].isNull())
				annotationsObject.rawDetails = valueresultresultItemannotationsannotationsItem["rawDetails"].asString();
			resultObject.annotations.push_back(annotationsObject);
		}
		auto checkSuiteNode = value["checkSuite"];
		if(!checkSuiteNode["id"].isNull())
			resultObject.checkSuite.id = std::stol(checkSuiteNode["id"].asString());
		auto writerNode = value["writer"];
		if(!writerNode["id"].isNull())
			resultObject.writer.id = writerNode["id"].asString();
		if(!writerNode["type"].isNull())
			resultObject.writer.type = writerNode["type"].asString();
		if(!writerNode["name"].isNull())
			resultObject.writer.name = writerNode["name"].asString();
		if(!writerNode["slug"].isNull())
			resultObject.writer.slug = writerNode["slug"].asString();
		if(!writerNode["logoUrl"].isNull())
			resultObject.writer.logoUrl = writerNode["logoUrl"].asString();
		auto outputNode = value["output"];
		if(!outputNode["title"].isNull())
			resultObject.output.title = outputNode["title"].asString();
		if(!outputNode["summary"].isNull())
			resultObject.output.summary = outputNode["summary"].asString();
		if(!outputNode["text"].isNull())
			resultObject.output.text = outputNode["text"].asString();
		auto allimagesNode = outputNode["images"]["imagesItem"];
		for (auto outputNodeimagesimagesItem : allimagesNode)
		{
			ResultItem::Output::ImagesItem imagesItemObject;
			if(!outputNodeimagesimagesItem["alt"].isNull())
				imagesItemObject.alt = outputNodeimagesimagesItem["alt"].asString();
			if(!outputNodeimagesimagesItem["imageUrl"].isNull())
				imagesItemObject.imageUrl = outputNodeimagesimagesItem["imageUrl"].asString();
			if(!outputNodeimagesimagesItem["caption"].isNull())
				imagesItemObject.caption = outputNodeimagesimagesItem["caption"].asString();
			resultObject.output.images.push_back(imagesItemObject);
		}
		result_.push_back(resultObject);
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

std::vector<ListCheckRunsResult::ResultItem> ListCheckRunsResult::getresult()const
{
	return result_;
}

std::string ListCheckRunsResult::getRequestId()const
{
	return requestId_;
}

std::string ListCheckRunsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListCheckRunsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListCheckRunsResult::getSuccess()const
{
	return success_;
}

