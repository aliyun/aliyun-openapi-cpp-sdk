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

#include <alibabacloud/ververica/model/UpdateDeploymentDesiredStateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ververica;
using namespace AlibabaCloud::Ververica::Model;

UpdateDeploymentDesiredStateResult::UpdateDeploymentDesiredStateResult() :
	ServiceResult()
{}

UpdateDeploymentDesiredStateResult::UpdateDeploymentDesiredStateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateDeploymentDesiredStateResult::~UpdateDeploymentDesiredStateResult()
{}

void UpdateDeploymentDesiredStateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["data"].isNull())
		data_ = value["data"].asString();

}

std::string UpdateDeploymentDesiredStateResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateDeploymentDesiredStateResult::getData()const
{
	return data_;
}

bool UpdateDeploymentDesiredStateResult::getSuccess()const
{
	return success_;
}

