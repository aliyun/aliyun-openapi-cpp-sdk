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

#include <alibabacloud/green/model/DescribeViewContentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeViewContentResult::DescribeViewContentResult() :
	ServiceResult()
{}

DescribeViewContentResult::DescribeViewContentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeViewContentResult::~DescribeViewContentResult()
{}

void DescribeViewContentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allViewContentListNode = value["ViewContentList"]["ViewContent"];
	for (auto valueViewContentListViewContent : allViewContentListNode)
	{
		ViewContent viewContentListObject;
		if(!valueViewContentListViewContent["TaskId"].isNull())
			viewContentListObject.taskId = valueViewContentListViewContent["TaskId"].asString();
		if(!valueViewContentListViewContent["DataId"].isNull())
			viewContentListObject.dataId = valueViewContentListViewContent["DataId"].asString();
		if(!valueViewContentListViewContent["BizType"].isNull())
			viewContentListObject.bizType = valueViewContentListViewContent["BizType"].asString();
		if(!valueViewContentListViewContent["Content"].isNull())
			viewContentListObject.content = valueViewContentListViewContent["Content"].asString();
		if(!valueViewContentListViewContent["Url"].isNull())
			viewContentListObject.url = valueViewContentListViewContent["Url"].asString();
		if(!valueViewContentListViewContent["NewUrl"].isNull())
			viewContentListObject.newUrl = valueViewContentListViewContent["NewUrl"].asString();
		if(!valueViewContentListViewContent["Thumbnail"].isNull())
			viewContentListObject.thumbnail = valueViewContentListViewContent["Thumbnail"].asString();
		if(!valueViewContentListViewContent["RequestTime"].isNull())
			viewContentListObject.requestTime = valueViewContentListViewContent["RequestTime"].asString();
		if(!valueViewContentListViewContent["ScanFinishedTime"].isNull())
			viewContentListObject.scanFinishedTime = valueViewContentListViewContent["ScanFinishedTime"].asString();
		if(!valueViewContentListViewContent["Suggestion"].isNull())
			viewContentListObject.suggestion = valueViewContentListViewContent["Suggestion"].asString();
		if(!valueViewContentListViewContent["Id"].isNull())
			viewContentListObject.id = std::stol(valueViewContentListViewContent["Id"].asString());
		if(!valueViewContentListViewContent["ScanResult"].isNull())
			viewContentListObject.scanResult = valueViewContentListViewContent["ScanResult"].asString();
		auto allResultsNode = valueViewContentListViewContent["Results"]["Result"];
		for (auto valueViewContentListViewContentResultsResult : allResultsNode)
		{
			ViewContent::Result resultsObject;
			if(!valueViewContentListViewContentResultsResult["Suggestion"].isNull())
				resultsObject.suggestion = valueViewContentListViewContentResultsResult["Suggestion"].asString();
			if(!valueViewContentListViewContentResultsResult["Label"].isNull())
				resultsObject.label = valueViewContentListViewContentResultsResult["Label"].asString();
			if(!valueViewContentListViewContentResultsResult["Scene"].isNull())
				resultsObject.scene = valueViewContentListViewContentResultsResult["Scene"].asString();
			viewContentListObject.results.push_back(resultsObject);
		}
		auto allFrameResultsNode = valueViewContentListViewContent["FrameResults"]["frameResult"];
		for (auto valueViewContentListViewContentFrameResultsframeResult : allFrameResultsNode)
		{
			ViewContent::FrameResult frameResultsObject;
			if(!valueViewContentListViewContentFrameResultsframeResult["Url"].isNull())
				frameResultsObject.url = valueViewContentListViewContentFrameResultsframeResult["Url"].asString();
			if(!valueViewContentListViewContentFrameResultsframeResult["Offset"].isNull())
				frameResultsObject.offset = std::stoi(valueViewContentListViewContentFrameResultsframeResult["Offset"].asString());
			if(!valueViewContentListViewContentFrameResultsframeResult["Label"].isNull())
				frameResultsObject.label = valueViewContentListViewContentFrameResultsframeResult["Label"].asString();
			viewContentListObject.frameResults.push_back(frameResultsObject);
		}
		auto allFaceResultsNode = valueViewContentListViewContent["FaceResults"]["faceResult"];
		for (auto valueViewContentListViewContentFaceResultsfaceResult : allFaceResultsNode)
		{
			ViewContent::FaceResult faceResultsObject;
			if(!valueViewContentListViewContentFaceResultsfaceResult["Bualified"].isNull())
				faceResultsObject.bualified = valueViewContentListViewContentFaceResultsfaceResult["Bualified"].asString() == "true";
			auto locationNode = value["Location"];
			if(!locationNode["X"].isNull())
				faceResultsObject.location.x = std::stoi(locationNode["X"].asString());
			if(!locationNode["Y"].isNull())
				faceResultsObject.location.y = std::stoi(locationNode["Y"].asString());
			if(!locationNode["W"].isNull())
				faceResultsObject.location.w = std::stoi(locationNode["W"].asString());
			if(!locationNode["H"].isNull())
				faceResultsObject.location.h = std::stoi(locationNode["H"].asString());
			auto genderNode = value["Gender"];
			if(!genderNode["Rate"].isNull())
				faceResultsObject.gender.rate = std::stof(genderNode["Rate"].asString());
			if(!genderNode["Value"].isNull())
				faceResultsObject.gender.value = genderNode["Value"].asString();
			auto glassesNode = value["Glasses"];
			if(!glassesNode["Rate"].isNull())
				faceResultsObject.glasses.rate = std::stof(glassesNode["Rate"].asString());
			if(!glassesNode["Value"].isNull())
				faceResultsObject.glasses.value = glassesNode["Value"].asString();
			auto ageNode = value["Age"];
			if(!ageNode["Rate"].isNull())
				faceResultsObject.age.rate = std::stof(ageNode["Rate"].asString());
			if(!ageNode["Value"].isNull())
				faceResultsObject.age.value = std::stoi(ageNode["Value"].asString());
			auto smileNode = value["Smile"];
			if(!smileNode["Rate"].isNull())
				faceResultsObject.smile.rate = std::stof(smileNode["Rate"].asString());
			if(!smileNode["Value"].isNull())
				faceResultsObject.smile.value = std::stof(smileNode["Value"].asString());
			auto qualityNode = value["Quality"];
			if(!qualityNode["Blur"].isNull())
				faceResultsObject.quality.blur = std::stof(qualityNode["Blur"].asString());
			if(!qualityNode["Pitch"].isNull())
				faceResultsObject.quality.pitch = std::stof(qualityNode["Pitch"].asString());
			if(!qualityNode["Yaw"].isNull())
				faceResultsObject.quality.yaw = std::stof(qualityNode["Yaw"].asString());
			if(!qualityNode["Roll"].isNull())
				faceResultsObject.quality.roll = std::stof(qualityNode["Roll"].asString());
			auto respiratorNode = value["Respirator"];
			if(!respiratorNode["Rate"].isNull())
				faceResultsObject.respirator.rate = std::stof(respiratorNode["Rate"].asString());
			if(!respiratorNode["Value"].isNull())
				faceResultsObject.respirator.value = respiratorNode["Value"].asString();
			auto hatNode = value["Hat"];
			if(!hatNode["Rate"].isNull())
				faceResultsObject.hat.rate = std::stof(hatNode["Rate"].asString());
			if(!hatNode["Value"].isNull())
				faceResultsObject.hat.value = hatNode["Value"].asString();
			auto mustacheNode = value["Mustache"];
			if(!mustacheNode["Rate"].isNull())
				faceResultsObject.mustache.rate = std::stof(mustacheNode["Rate"].asString());
			if(!mustacheNode["Value"].isNull())
				faceResultsObject.mustache.value = mustacheNode["Value"].asString();
			auto bangNode = value["Bang"];
			if(!bangNode["Rate"].isNull())
				faceResultsObject.bang.rate = std::stof(bangNode["Rate"].asString());
			if(!bangNode["Value"].isNull())
				faceResultsObject.bang.value = bangNode["Value"].asString();
			auto hairstyleNode = value["Hairstyle"];
			if(!hairstyleNode["Rate"].isNull())
				faceResultsObject.hairstyle.rate = std::stof(hairstyleNode["Rate"].asString());
			if(!hairstyleNode["Value"].isNull())
				faceResultsObject.hairstyle.value = hairstyleNode["Value"].asString();
			auto imageNode = value["Image"];
			if(!imageNode["Width"].isNull())
				faceResultsObject.image.width = std::stoi(imageNode["Width"].asString());
			if(!imageNode["Height"].isNull())
				faceResultsObject.image.height = std::stoi(imageNode["Height"].asString());
			viewContentListObject.faceResults.push_back(faceResultsObject);
		}
		viewContentList_.push_back(viewContentListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeViewContentResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeViewContentResult::ViewContent> DescribeViewContentResult::getViewContentList()const
{
	return viewContentList_;
}

int DescribeViewContentResult::getPageSize()const
{
	return pageSize_;
}

int DescribeViewContentResult::getCurrentPage()const
{
	return currentPage_;
}

