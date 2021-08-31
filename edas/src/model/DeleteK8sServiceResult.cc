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

#include <alibabacloud/edas/model/DeleteK8sServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

DeleteK8sServiceResult::DeleteK8sServiceResult() :
	ServiceResult()
{}

DeleteK8sServiceResult::DeleteK8sServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteK8sServiceResult::~DeleteK8sServiceResult()
{}

void DeleteK8sServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ChangeOrderId"].isNull())
		changeOrderId_ = value["ChangeOrderId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DeleteK8sServiceResult::getMessage()const
{
	return message_;
}

std::string DeleteK8sServiceResult::getChangeOrderId()const
{
	return changeOrderId_;
}

int DeleteK8sServiceResult::getCode()const
{
	return code_;
}

