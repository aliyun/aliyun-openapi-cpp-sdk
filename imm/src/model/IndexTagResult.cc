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

#include <alibabacloud/imm/model/IndexTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

IndexTagResult::IndexTagResult() :
	ServiceResult()
{}

IndexTagResult::IndexTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

IndexTagResult::~IndexTagResult()
{}

void IndexTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailDetailsNode = value["FailDetails"]["FailDetailsItem"];
	for (auto valueFailDetailsFailDetailsItem : allFailDetailsNode)
	{
		FailDetailsItem failDetailsObject;
		if(!valueFailDetailsFailDetailsItem["SrcUri"].isNull())
			failDetailsObject.srcUri = valueFailDetailsFailDetailsItem["SrcUri"].asString();
		if(!valueFailDetailsFailDetailsItem["Reason"].isNull())
			failDetailsObject.reason = valueFailDetailsFailDetailsItem["Reason"].asString();
		failDetails_.push_back(failDetailsObject);
	}
	auto allSuccessDetailsNode = value["SuccessDetails"]["SuccessDetailsItem"];
	for (auto valueSuccessDetailsSuccessDetailsItem : allSuccessDetailsNode)
	{
		SuccessDetailsItem successDetailsObject;
		if(!valueSuccessDetailsSuccessDetailsItem["SrcUri"].isNull())
			successDetailsObject.srcUri = valueSuccessDetailsSuccessDetailsItem["SrcUri"].asString();
		auto allTagsNode = allSuccessDetailsNode["Tags"]["TagsItem"];
		for (auto allSuccessDetailsNodeTagsTagsItem : allTagsNode)
		{
			SuccessDetailsItem::TagsItem tagsObject;
			if(!allSuccessDetailsNodeTagsTagsItem["TagId"].isNull())
				tagsObject.tagId = allSuccessDetailsNodeTagsTagsItem["TagId"].asString();
			if(!allSuccessDetailsNodeTagsTagsItem["TagLevel"].isNull())
				tagsObject.tagLevel = allSuccessDetailsNodeTagsTagsItem["TagLevel"].asString();
			if(!allSuccessDetailsNodeTagsTagsItem["TagName"].isNull())
				tagsObject.tagName = allSuccessDetailsNodeTagsTagsItem["TagName"].asString();
			if(!allSuccessDetailsNodeTagsTagsItem["ParentTagId"].isNull())
				tagsObject.parentTagId = allSuccessDetailsNodeTagsTagsItem["ParentTagId"].asString();
			if(!allSuccessDetailsNodeTagsTagsItem["ParentTagName"].isNull())
				tagsObject.parentTagName = allSuccessDetailsNodeTagsTagsItem["ParentTagName"].asString();
			if(!allSuccessDetailsNodeTagsTagsItem["TagScore"].isNull())
				tagsObject.tagScore = allSuccessDetailsNodeTagsTagsItem["TagScore"].asString();
			successDetailsObject.tags.push_back(tagsObject);
		}
		successDetails_.push_back(successDetailsObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["SuccessIndexNum"].isNull())
		successIndexNum_ = value["SuccessIndexNum"].asString();

}

std::vector<IndexTagResult::SuccessDetailsItem> IndexTagResult::getSuccessDetails()const
{
	return successDetails_;
}

std::string IndexTagResult::getSuccessIndexNum()const
{
	return successIndexNum_;
}

std::vector<IndexTagResult::FailDetailsItem> IndexTagResult::getFailDetails()const
{
	return failDetails_;
}

std::string IndexTagResult::getSetId()const
{
	return setId_;
}

