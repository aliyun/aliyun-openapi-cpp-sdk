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

#include <alibabacloud/dms-enterprise/model/GetClassificationTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetClassificationTemplateResult::GetClassificationTemplateResult() :
	ServiceResult()
{}

GetClassificationTemplateResult::GetClassificationTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClassificationTemplateResult::~GetClassificationTemplateResult()
{}

void GetClassificationTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto classificationResourceTemplateMapNode = value["ClassificationResourceTemplateMap"];
	if(!classificationResourceTemplateMapNode["TemplateId"].isNull())
		classificationResourceTemplateMap_.templateId = std::stol(classificationResourceTemplateMapNode["TemplateId"].asString());
	if(!classificationResourceTemplateMapNode["TemplateType"].isNull())
		classificationResourceTemplateMap_.templateType = classificationResourceTemplateMapNode["TemplateType"].asString();
	if(!classificationResourceTemplateMapNode["ResourceId"].isNull())
		classificationResourceTemplateMap_.resourceId = std::stol(classificationResourceTemplateMapNode["ResourceId"].asString());
	if(!classificationResourceTemplateMapNode["ResourceType"].isNull())
		classificationResourceTemplateMap_.resourceType = classificationResourceTemplateMapNode["ResourceType"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetClassificationTemplateResult::ClassificationResourceTemplateMap GetClassificationTemplateResult::getClassificationResourceTemplateMap()const
{
	return classificationResourceTemplateMap_;
}

std::string GetClassificationTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetClassificationTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetClassificationTemplateResult::getSuccess()const
{
	return success_;
}

