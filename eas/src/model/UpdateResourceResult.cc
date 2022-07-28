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

#include <alibabacloud/eas/model/UpdateResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

UpdateResourceResult::UpdateResourceResult() :
	ServiceResult()
{}

UpdateResourceResult::UpdateResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateResourceResult::~UpdateResourceResult()
{}

void UpdateResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResourceId"].isNull())
		resourceId_ = value["ResourceId"].asString();
	if(!value["ResourceName"].isNull())
		resourceName_ = value["ResourceName"].asString();

}

std::string UpdateResourceResult::getResourceId()const
{
	return resourceId_;
}

std::string UpdateResourceResult::getResourceName()const
{
	return resourceName_;
}

