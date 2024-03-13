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

#include <alibabacloud/videoenhan/model/QueryFaceVideoTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Videoenhan;
using namespace AlibabaCloud::Videoenhan::Model;

QueryFaceVideoTemplateResult::QueryFaceVideoTemplateResult() :
	ServiceResult()
{}

QueryFaceVideoTemplateResult::QueryFaceVideoTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceVideoTemplateResult::~QueryFaceVideoTemplateResult()
{}

void QueryFaceVideoTemplateResult::parse(const std::string &payload)
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
		auto allFaceInfosNode = dataNodeElementsElementsItem["FaceInfos"]["faceInfosItem"];
		for (auto dataNodeElementsElementsItemFaceInfosfaceInfosItem : allFaceInfosNode)
		{
			Data::ElementsItem::FaceInfosItem faceInfosObject;
			if(!dataNodeElementsElementsItemFaceInfosfaceInfosItem["TemplateFaceID"].isNull())
				faceInfosObject.templateFaceID = dataNodeElementsElementsItemFaceInfosfaceInfosItem["TemplateFaceID"].asString();
			if(!dataNodeElementsElementsItemFaceInfosfaceInfosItem["TemplateFaceURL"].isNull())
				faceInfosObject.templateFaceURL = dataNodeElementsElementsItemFaceInfosfaceInfosItem["TemplateFaceURL"].asString();
			elementsItemObject.faceInfos.push_back(faceInfosObject);
		}
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryFaceVideoTemplateResult::getMessage()const
{
	return message_;
}

QueryFaceVideoTemplateResult::Data QueryFaceVideoTemplateResult::getData()const
{
	return data_;
}

std::string QueryFaceVideoTemplateResult::getCode()const
{
	return code_;
}

