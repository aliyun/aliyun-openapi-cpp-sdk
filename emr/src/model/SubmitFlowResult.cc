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

#include <alibabacloud/emr/model/SubmitFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

SubmitFlowResult::SubmitFlowResult() :
	ServiceResult()
{}

SubmitFlowResult::SubmitFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitFlowResult::~SubmitFlowResult()
{}

void SubmitFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string SubmitFlowResult::getInstanceId()const
{
	return instanceId_;
}

std::string SubmitFlowResult::getData()const
{
	return data_;
}

std::string SubmitFlowResult::getId()const
{
	return id_;
}

