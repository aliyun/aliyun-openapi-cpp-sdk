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

#include <alibabacloud/mts/model/QueryInnerJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryInnerJobResult::QueryInnerJobResult() :
	ServiceResult()
{}

QueryInnerJobResult::QueryInnerJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInnerJobResult::~QueryInnerJobResult()
{}

void QueryInnerJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageNode = value["Image"]["Result"];
	for (auto valueImageResult : allImageNode)
	{
		Result imageObject;
		if(!valueImageResult["Index"].isNull())
			imageObject.index = std::stoi(valueImageResult["Index"].asString());
		if(!valueImageResult["Result"].isNull())
			imageObject.result = std::stoi(valueImageResult["Result"].asString());
		if(!valueImageResult["Code"].isNull())
			imageObject.code = valueImageResult["Code"].asString();
		image_.push_back(imageObject);
	}
	auto videoNode = value["Video"];
	if(!videoNode["Index"].isNull())
		video_.index = std::stoi(videoNode["Index"].asString());
	if(!videoNode["Result"].isNull())
		video_.result = std::stoi(videoNode["Result"].asString());
	if(!videoNode["Code"].isNull())
		video_.code = videoNode["Code"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Suggestion"].isNull())
		suggestion_ = value["Suggestion"].asString();

}

std::string QueryInnerJobResult::getStatus()const
{
	return status_;
}

std::string QueryInnerJobResult::getSuggestion()const
{
	return suggestion_;
}

QueryInnerJobResult::Video QueryInnerJobResult::getVideo()const
{
	return video_;
}

std::vector<QueryInnerJobResult::Result> QueryInnerJobResult::getImage()const
{
	return image_;
}

