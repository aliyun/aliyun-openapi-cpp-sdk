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

#include <alibabacloud/videoenhan/model/AddFaceVideoTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Videoenhan;
using namespace AlibabaCloud::Videoenhan::Model;

AddFaceVideoTemplateResult::AddFaceVideoTemplateResult() :
	ServiceResult()
{}

AddFaceVideoTemplateResult::AddFaceVideoTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddFaceVideoTemplateResult::~AddFaceVideoTemplateResult()
{}

void AddFaceVideoTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dateNode = value["Date"];
	if(!dateNode["TemplateId"].isNull())
		date_.templateId = dateNode["TemplateId"].asString();
	if(!dateNode["TransResult"].isNull())
		date_.transResult = dateNode["TransResult"].asString();
	auto allFaceInfosNode = dateNode["FaceInfos"]["faceInfosItem"];
	for (auto dateNodeFaceInfosfaceInfosItem : allFaceInfosNode)
	{
		Date::FaceInfosItem faceInfosItemObject;
		if(!dateNodeFaceInfosfaceInfosItem["TemplateFaceID"].isNull())
			faceInfosItemObject.templateFaceID = dateNodeFaceInfosfaceInfosItem["TemplateFaceID"].asString();
		if(!dateNodeFaceInfosfaceInfosItem["TemplateFaceURL"].isNull())
			faceInfosItemObject.templateFaceURL = dateNodeFaceInfosfaceInfosItem["TemplateFaceURL"].asString();
		date_.faceInfos.push_back(faceInfosItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddFaceVideoTemplateResult::getMessage()const
{
	return message_;
}

std::string AddFaceVideoTemplateResult::getCode()const
{
	return code_;
}

AddFaceVideoTemplateResult::Date AddFaceVideoTemplateResult::getDate()const
{
	return date_;
}

