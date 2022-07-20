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

#include <alibabacloud/imm/model/GetBindingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetBindingResult::GetBindingResult() :
	ServiceResult()
{}

GetBindingResult::GetBindingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBindingResult::~GetBindingResult()
{}

void GetBindingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto bindingNode = value["Binding"];
	if(!bindingNode["ProjectName"].isNull())
		binding_.projectName = bindingNode["ProjectName"].asString();
	if(!bindingNode["DatasetName"].isNull())
		binding_.datasetName = bindingNode["DatasetName"].asString();
	if(!bindingNode["URI"].isNull())
		binding_.uRI = bindingNode["URI"].asString();
	if(!bindingNode["State"].isNull())
		binding_.state = bindingNode["State"].asString();
	if(!bindingNode["Phase"].isNull())
		binding_.phase = bindingNode["Phase"].asString();
	if(!bindingNode["Detail"].isNull())
		binding_.detail = bindingNode["Detail"].asString();
	if(!bindingNode["CreateTime"].isNull())
		binding_.createTime = bindingNode["CreateTime"].asString();
	if(!bindingNode["UpdateTime"].isNull())
		binding_.updateTime = bindingNode["UpdateTime"].asString();

}

GetBindingResult::Binding GetBindingResult::getBinding()const
{
	return binding_;
}

