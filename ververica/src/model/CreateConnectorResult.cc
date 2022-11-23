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

#include <alibabacloud/ververica/model/CreateConnectorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ververica;
using namespace AlibabaCloud::Ververica::Model;

CreateConnectorResult::CreateConnectorResult() :
	ServiceResult()
{}

CreateConnectorResult::CreateConnectorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateConnectorResult::~CreateConnectorResult()
{}

void CreateConnectorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["data"].isNull())
		data_ = value["data"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string CreateConnectorResult::getRequestId()const
{
	return requestId_;
}

std::string CreateConnectorResult::getData()const
{
	return data_;
}

bool CreateConnectorResult::getSuccess()const
{
	return success_;
}

