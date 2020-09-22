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

#include <alibabacloud/vs/model/BatchBindTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

BatchBindTemplateResult::BatchBindTemplateResult() :
	ServiceResult()
{}

BatchBindTemplateResult::BatchBindTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchBindTemplateResult::~BatchBindTemplateResult()
{}

void BatchBindTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBindingsNode = value["Bindings"]["Binding"];
	for (auto valueBindingsBinding : allBindingsNode)
	{
		Binding bindingsObject;
		if(!valueBindingsBinding["TemplateId"].isNull())
			bindingsObject.templateId = valueBindingsBinding["TemplateId"].asString();
		if(!valueBindingsBinding["InstanceId"].isNull())
			bindingsObject.instanceId = valueBindingsBinding["InstanceId"].asString();
		if(!valueBindingsBinding["InstanceType"].isNull())
			bindingsObject.instanceType = valueBindingsBinding["InstanceType"].asString();
		if(!valueBindingsBinding["Error"].isNull())
			bindingsObject.error = valueBindingsBinding["Error"].asString();
		bindings_.push_back(bindingsObject);
	}

}

std::vector<BatchBindTemplateResult::Binding> BatchBindTemplateResult::getBindings()const
{
	return bindings_;
}

