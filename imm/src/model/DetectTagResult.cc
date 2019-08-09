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

#include <alibabacloud/imm/model/DetectTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectTagResult::DetectTagResult() :
	ServiceResult()
{}

DetectTagResult::DetectTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectTagResult::~DetectTagResult()
{}

void DetectTagResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSuccessDetails = value["SuccessDetails"]["SuccessDetailsItem"];
	for (auto value : allSuccessDetails)
	{
		SuccessDetailsItem successDetailsObject;
		if(!value["SrcUri"].isNull())
			successDetailsObject.srcUri = value["SrcUri"].asString();
		auto allTags = value["Tags"]["TagsItem"];
		for (auto value : allTags)
		{
			SuccessDetailsItem::TagsItem tagsObject;
			if(!value["TagId"].isNull())
				tagsObject.tagId = value["TagId"].asString();
			if(!value["TagLevel"].isNull())
				tagsObject.tagLevel = value["TagLevel"].asString();
			if(!value["TagName"].isNull())
				tagsObject.tagName = value["TagName"].asString();
			if(!value["ParentTagId"].isNull())
				tagsObject.parentTagId = value["ParentTagId"].asString();
			if(!value["ParentTagName"].isNull())
				tagsObject.parentTagName = value["ParentTagName"].asString();
			if(!value["TagScore"].isNull())
				tagsObject.tagScore = value["TagScore"].asString();
			successDetailsObject.tags.push_back(tagsObject);
		}
		successDetails_.push_back(successDetailsObject);
	}
	auto allFailDetails = value["FailDetails"]["FailDetailsItem"];
	for (auto value : allFailDetails)
	{
		FailDetailsItem failDetailsObject;
		if(!value["SrcUri"].isNull())
			failDetailsObject.srcUri = value["SrcUri"].asString();
		if(!value["Reason"].isNull())
			failDetailsObject.reason = value["Reason"].asString();
		failDetails_.push_back(failDetailsObject);
	}
	if(!value["SuccessNum"].isNull())
		successNum_ = value["SuccessNum"].asString();

}

std::vector<DetectTagResult::SuccessDetailsItem> DetectTagResult::getSuccessDetails()const
{
	return successDetails_;
}

std::string DetectTagResult::getSuccessNum()const
{
	return successNum_;
}

std::vector<DetectTagResult::FailDetailsItem> DetectTagResult::getFailDetails()const
{
	return failDetails_;
}

