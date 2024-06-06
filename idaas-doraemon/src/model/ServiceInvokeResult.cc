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

#include <alibabacloud/idaas-doraemon/model/ServiceInvokeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

ServiceInvokeResult::ServiceInvokeResult() :
	ServiceResult()
{}

ServiceInvokeResult::ServiceInvokeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ServiceInvokeResult::~ServiceInvokeResult()
{}

void ServiceInvokeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["IdToken"].isNull())
		idToken_ = value["IdToken"].asString();
	if(!value["EventId"].isNull())
		eventId_ = value["EventId"].asString();

}

std::string ServiceInvokeResult::getIdToken()const
{
	return idToken_;
}

std::string ServiceInvokeResult::getMessage()const
{
	return message_;
}

std::string ServiceInvokeResult::getEventId()const
{
	return eventId_;
}

std::string ServiceInvokeResult::getData()const
{
	return data_;
}

std::string ServiceInvokeResult::getCode()const
{
	return code_;
}

bool ServiceInvokeResult::getSuccess()const
{
	return success_;
}

