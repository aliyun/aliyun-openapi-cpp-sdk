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

#include <alibabacloud/devops-rdc/model/ListPipelineTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListPipelineTemplatesResult::ListPipelineTemplatesResult() :
	ServiceResult()
{}

ListPipelineTemplatesResult::ListPipelineTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPipelineTemplatesResult::~ListPipelineTemplatesResult()
{}

void ListPipelineTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stof(dataNode["Total"].asString());
	auto allDataListNode = dataNode["DataList"]["模板列表"];
	for (auto dataNodeDataList模板列表 : allDataListNode)
	{
		Data::模板列表 模板列表Object;
		if(!dataNodeDataList模板列表["TemplateName"].isNull())
			模板列表Object.templateName = dataNodeDataList模板列表["TemplateName"].asString();
		if(!dataNodeDataList模板列表["Id"].isNull())
			模板列表Object.id = std::stol(dataNodeDataList模板列表["Id"].asString());
		data_.dataList.push_back(模板列表Object);
	}

}

ListPipelineTemplatesResult::Data ListPipelineTemplatesResult::getData()const
{
	return data_;
}

