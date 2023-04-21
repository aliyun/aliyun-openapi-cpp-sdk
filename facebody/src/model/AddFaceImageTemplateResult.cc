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

#include <alibabacloud/facebody/model/AddFaceImageTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

AddFaceImageTemplateResult::AddFaceImageTemplateResult() :
	ServiceResult()
{}

AddFaceImageTemplateResult::AddFaceImageTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddFaceImageTemplateResult::~AddFaceImageTemplateResult()
{}

void AddFaceImageTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TemplateId"].isNull())
		data_.templateId = dataNode["TemplateId"].asString();
	auto allFaceInfosNode = dataNode["FaceInfos"]["FaceInfosItem"];
	for (auto dataNodeFaceInfosFaceInfosItem : allFaceInfosNode)
	{
		Data::FaceInfosItem faceInfosItemObject;
		if(!dataNodeFaceInfosFaceInfosItem["TemplateFaceID"].isNull())
			faceInfosItemObject.templateFaceID = dataNodeFaceInfosFaceInfosItem["TemplateFaceID"].asString();
		auto faceRectNode = value["FaceRect"];
		if(!faceRectNode["X"].isNull())
			faceInfosItemObject.faceRect.x = faceRectNode["X"].asString();
		if(!faceRectNode["Y"].isNull())
			faceInfosItemObject.faceRect.y = faceRectNode["Y"].asString();
		if(!faceRectNode["Height"].isNull())
			faceInfosItemObject.faceRect.height = faceRectNode["Height"].asString();
		if(!faceRectNode["Width"].isNull())
			faceInfosItemObject.faceRect.width = faceRectNode["Width"].asString();
		data_.faceInfos.push_back(faceInfosItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddFaceImageTemplateResult::getMessage()const
{
	return message_;
}

AddFaceImageTemplateResult::Data AddFaceImageTemplateResult::getData()const
{
	return data_;
}

std::string AddFaceImageTemplateResult::getCode()const
{
	return code_;
}

