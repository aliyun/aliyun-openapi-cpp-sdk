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

#include <alibabacloud/mts/model/QuerySmarttagTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QuerySmarttagTemplateListResult::QuerySmarttagTemplateListResult() :
	ServiceResult()
{}

QuerySmarttagTemplateListResult::QuerySmarttagTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmarttagTemplateListResult::~QuerySmarttagTemplateListResult()
{}

void QuerySmarttagTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Template"];
	for (auto valueTemplatesTemplate : allTemplatesNode)
	{
		_Template templatesObject;
		if(!valueTemplatesTemplate["AnalyseTypes"].isNull())
			templatesObject.analyseTypes = valueTemplatesTemplate["AnalyseTypes"].asString();
		if(!valueTemplatesTemplate["Industry"].isNull())
			templatesObject.industry = valueTemplatesTemplate["Industry"].asString();
		if(!valueTemplatesTemplate["IsDefault"].isNull())
			templatesObject.isDefault = valueTemplatesTemplate["IsDefault"].asString() == "true";
		if(!valueTemplatesTemplate["TemplateName"].isNull())
			templatesObject.templateName = valueTemplatesTemplate["TemplateName"].asString();
		if(!valueTemplatesTemplate["TemplateId"].isNull())
			templatesObject.templateId = valueTemplatesTemplate["TemplateId"].asString();
		if(!valueTemplatesTemplate["FaceCategoryIds"].isNull())
			templatesObject.faceCategoryIds = valueTemplatesTemplate["FaceCategoryIds"].asString();
		if(!valueTemplatesTemplate["FaceCustomParamsConfig"].isNull())
			templatesObject.faceCustomParamsConfig = valueTemplatesTemplate["FaceCustomParamsConfig"].asString();
		if(!valueTemplatesTemplate["ObjectGroupIds"].isNull())
			templatesObject.objectGroupIds = valueTemplatesTemplate["ObjectGroupIds"].asString();
		if(!valueTemplatesTemplate["LandmarkGroupIds"].isNull())
			templatesObject.landmarkGroupIds = valueTemplatesTemplate["LandmarkGroupIds"].asString();
		if(!valueTemplatesTemplate["Scene"].isNull())
			templatesObject.scene = valueTemplatesTemplate["Scene"].asString();
		if(!valueTemplatesTemplate["LabelType"].isNull())
			templatesObject.labelType = valueTemplatesTemplate["LabelType"].asString();
		if(!valueTemplatesTemplate["LabelVersion"].isNull())
			templatesObject.labelVersion = valueTemplatesTemplate["LabelVersion"].asString();
		if(!valueTemplatesTemplate["KnowledgeConfig"].isNull())
			templatesObject.knowledgeConfig = valueTemplatesTemplate["KnowledgeConfig"].asString();
		if(!valueTemplatesTemplate["KeywordConfig"].isNull())
			templatesObject.keywordConfig = valueTemplatesTemplate["KeywordConfig"].asString();
		templates_.push_back(templatesObject);
	}

}

std::vector<QuerySmarttagTemplateListResult::_Template> QuerySmarttagTemplateListResult::getTemplates()const
{
	return templates_;
}

