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

#include <alibabacloud/vod/model/CreateDetectionTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

CreateDetectionTemplateResult::CreateDetectionTemplateResult() :
	ServiceResult()
{}

CreateDetectionTemplateResult::CreateDetectionTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDetectionTemplateResult::~CreateDetectionTemplateResult()
{}

void CreateDetectionTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto detectionTemplateNode = value["DetectionTemplate"];
	if(!detectionTemplateNode["CreateTime"].isNull())
		detectionTemplate_.createTime = detectionTemplateNode["CreateTime"].asString();
	if(!detectionTemplateNode["UserId"].isNull())
		detectionTemplate_.userId = std::stol(detectionTemplateNode["UserId"].asString());
	if(!detectionTemplateNode["TemplateName"].isNull())
		detectionTemplate_.templateName = detectionTemplateNode["TemplateName"].asString();
	if(!detectionTemplateNode["Period"].isNull())
		detectionTemplate_.period = detectionTemplateNode["Period"].asString();
	if(!detectionTemplateNode["Platform"].isNull())
		detectionTemplate_.platform = detectionTemplateNode["Platform"].asString();
	if(!detectionTemplateNode["TemplateId"].isNull())
		detectionTemplate_.templateId = detectionTemplateNode["TemplateId"].asString();
	if(!detectionTemplateNode["ModifyTime"].isNull())
		detectionTemplate_.modifyTime = detectionTemplateNode["ModifyTime"].asString();

}

CreateDetectionTemplateResult::DetectionTemplate CreateDetectionTemplateResult::getDetectionTemplate()const
{
	return detectionTemplate_;
}

