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

#include <alibabacloud/ice/model/GetContentAnalyzeConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetContentAnalyzeConfigResult::GetContentAnalyzeConfigResult() :
	ServiceResult()
{}

GetContentAnalyzeConfigResult::GetContentAnalyzeConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetContentAnalyzeConfigResult::~GetContentAnalyzeConfigResult()
{}

void GetContentAnalyzeConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentAnalyzeConfigNode = value["ContentAnalyzeConfig"];
	if(!contentAnalyzeConfigNode["Auto"].isNull())
		contentAnalyzeConfig_._auto = contentAnalyzeConfigNode["Auto"].asString() == "true";
	if(!contentAnalyzeConfigNode["SaveType"].isNull())
		contentAnalyzeConfig_.saveType = contentAnalyzeConfigNode["SaveType"].asString();
	if(!contentAnalyzeConfigNode["TemplateId"].isNull())
		contentAnalyzeConfig_.templateId = contentAnalyzeConfigNode["TemplateId"].asString();

}

GetContentAnalyzeConfigResult::ContentAnalyzeConfig GetContentAnalyzeConfigResult::getContentAnalyzeConfig()const
{
	return contentAnalyzeConfig_;
}

