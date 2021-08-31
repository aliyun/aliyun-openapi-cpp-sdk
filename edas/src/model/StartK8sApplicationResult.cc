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

#include <alibabacloud/edas/model/StartK8sApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

StartK8sApplicationResult::StartK8sApplicationResult() :
	ServiceResult()
{}

StartK8sApplicationResult::StartK8sApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartK8sApplicationResult::~StartK8sApplicationResult()
{}

void StartK8sApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ChangeOrderId"].isNull())
		changeOrderId_ = value["ChangeOrderId"].asString();

}

std::string StartK8sApplicationResult::getMessage()const
{
	return message_;
}

std::string StartK8sApplicationResult::getChangeOrderId()const
{
	return changeOrderId_;
}

int StartK8sApplicationResult::getCode()const
{
	return code_;
}

