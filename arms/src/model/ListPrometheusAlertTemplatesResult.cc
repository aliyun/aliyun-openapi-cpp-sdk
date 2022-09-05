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

#include <alibabacloud/arms/model/ListPrometheusAlertTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListPrometheusAlertTemplatesResult::ListPrometheusAlertTemplatesResult() :
	ServiceResult()
{}

ListPrometheusAlertTemplatesResult::ListPrometheusAlertTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrometheusAlertTemplatesResult::~ListPrometheusAlertTemplatesResult()
{}

void ListPrometheusAlertTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrometheusAlertTemplatesNode = value["PrometheusAlertTemplates"]["PrometheusAlertTemplate"];
	for (auto valuePrometheusAlertTemplatesPrometheusAlertTemplate : allPrometheusAlertTemplatesNode)
	{
		PrometheusAlertTemplate prometheusAlertTemplatesObject;
		if(!valuePrometheusAlertTemplatesPrometheusAlertTemplate["Type"].isNull())
			prometheusAlertTemplatesObject.type = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Type"].asString();
		if(!valuePrometheusAlertTemplatesPrometheusAlertTemplate["Description"].isNull())
			prometheusAlertTemplatesObject.description = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Description"].asString();
		if(!valuePrometheusAlertTemplatesPrometheusAlertTemplate["Expression"].isNull())
			prometheusAlertTemplatesObject.expression = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Expression"].asString();
		if(!valuePrometheusAlertTemplatesPrometheusAlertTemplate["Version"].isNull())
			prometheusAlertTemplatesObject.version = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Version"].asString();
		if(!valuePrometheusAlertTemplatesPrometheusAlertTemplate["Duration"].isNull())
			prometheusAlertTemplatesObject.duration = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Duration"].asString();
		if(!valuePrometheusAlertTemplatesPrometheusAlertTemplate["AlertName"].isNull())
			prometheusAlertTemplatesObject.alertName = valuePrometheusAlertTemplatesPrometheusAlertTemplate["AlertName"].asString();
		auto allLabelsNode = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Labels"]["Label"];
		for (auto valuePrometheusAlertTemplatesPrometheusAlertTemplateLabelsLabel : allLabelsNode)
		{
			PrometheusAlertTemplate::Label labelsObject;
			if(!valuePrometheusAlertTemplatesPrometheusAlertTemplateLabelsLabel["Name"].isNull())
				labelsObject.name = valuePrometheusAlertTemplatesPrometheusAlertTemplateLabelsLabel["Name"].asString();
			if(!valuePrometheusAlertTemplatesPrometheusAlertTemplateLabelsLabel["Value"].isNull())
				labelsObject.value = valuePrometheusAlertTemplatesPrometheusAlertTemplateLabelsLabel["Value"].asString();
			prometheusAlertTemplatesObject.labels.push_back(labelsObject);
		}
		auto allAnnotationsNode = valuePrometheusAlertTemplatesPrometheusAlertTemplate["Annotations"]["Annotation"];
		for (auto valuePrometheusAlertTemplatesPrometheusAlertTemplateAnnotationsAnnotation : allAnnotationsNode)
		{
			PrometheusAlertTemplate::Annotation annotationsObject;
			if(!valuePrometheusAlertTemplatesPrometheusAlertTemplateAnnotationsAnnotation["Name"].isNull())
				annotationsObject.name = valuePrometheusAlertTemplatesPrometheusAlertTemplateAnnotationsAnnotation["Name"].asString();
			if(!valuePrometheusAlertTemplatesPrometheusAlertTemplateAnnotationsAnnotation["Value"].isNull())
				annotationsObject.value = valuePrometheusAlertTemplatesPrometheusAlertTemplateAnnotationsAnnotation["Value"].asString();
			prometheusAlertTemplatesObject.annotations.push_back(annotationsObject);
		}
		prometheusAlertTemplates_.push_back(prometheusAlertTemplatesObject);
	}

}

std::vector<ListPrometheusAlertTemplatesResult::PrometheusAlertTemplate> ListPrometheusAlertTemplatesResult::getPrometheusAlertTemplates()const
{
	return prometheusAlertTemplates_;
}

