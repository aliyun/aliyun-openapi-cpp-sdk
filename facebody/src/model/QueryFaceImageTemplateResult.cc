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

#include <alibabacloud/facebody/model/QueryFaceImageTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

QueryFaceImageTemplateResult::QueryFaceImageTemplateResult() :
	ServiceResult()
{}

QueryFaceImageTemplateResult::QueryFaceImageTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceImageTemplateResult::~QueryFaceImageTemplateResult()
{}

void QueryFaceImageTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allElementsNode = dataNode["Elements"]["ElementsItem"];
	for (auto dataNodeElementsElementsItem : allElementsNode)
	{
		Data::ElementsItem elementsItemObject;
		if(!dataNodeElementsElementsItem["CreateTime"].isNull())
			elementsItemObject.createTime = dataNodeElementsElementsItem["CreateTime"].asString();
		if(!dataNodeElementsElementsItem["UpdateTime"].isNull())
			elementsItemObject.updateTime = dataNodeElementsElementsItem["UpdateTime"].asString();
		if(!dataNodeElementsElementsItem["UserId"].isNull())
			elementsItemObject.userId = dataNodeElementsElementsItem["UserId"].asString();
		if(!dataNodeElementsElementsItem["TemplateId"].isNull())
			elementsItemObject.templateId = dataNodeElementsElementsItem["TemplateId"].asString();
		if(!dataNodeElementsElementsItem["TemplateURL"].isNull())
			elementsItemObject.templateURL = dataNodeElementsElementsItem["TemplateURL"].asString();
		auto allFaceInfosNode = dataNodeElementsElementsItem["FaceInfos"]["FaceInfosItem"];
		for (auto dataNodeElementsElementsItemFaceInfosFaceInfosItem : allFaceInfosNode)
		{
			Data::ElementsItem::FaceInfosItem faceInfosObject;
			if(!dataNodeElementsElementsItemFaceInfosFaceInfosItem["TemplateFaceID"].isNull())
				faceInfosObject.templateFaceID = dataNodeElementsElementsItemFaceInfosFaceInfosItem["TemplateFaceID"].asString();
			auto faceRectNode = value["FaceRect"];
			if(!faceRectNode["X"].isNull())
				faceInfosObject.faceRect.x = faceRectNode["X"].asString();
			if(!faceRectNode["Y"].isNull())
				faceInfosObject.faceRect.y = faceRectNode["Y"].asString();
			if(!faceRectNode["Height"].isNull())
				faceInfosObject.faceRect.height = faceRectNode["Height"].asString();
			if(!faceRectNode["Width"].isNull())
				faceInfosObject.faceRect.width = faceRectNode["Width"].asString();
			elementsItemObject.faceInfos.push_back(faceInfosObject);
		}
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryFaceImageTemplateResult::getMessage()const
{
	return message_;
}

QueryFaceImageTemplateResult::Data QueryFaceImageTemplateResult::getData()const
{
	return data_;
}

std::string QueryFaceImageTemplateResult::getCode()const
{
	return code_;
}

