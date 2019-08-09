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

#include <alibabacloud/imm/model/UpdateProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

UpdateProjectResult::UpdateProjectResult() :
	ServiceResult()
{}

UpdateProjectResult::UpdateProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateProjectResult::~UpdateProjectResult()
{}

void UpdateProjectResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["Project"].isNull())
		project_ = value["Project"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["ServiceRole"].isNull())
		serviceRole_ = value["ServiceRole"].asString();
	if(!value["CU"].isNull())
		cU_ = std::stoi(value["CU"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();

}

std::string UpdateProjectResult::getProject()const
{
	return project_;
}

std::string UpdateProjectResult::getModifyTime()const
{
	return modifyTime_;
}

int UpdateProjectResult::getCU()const
{
	return cU_;
}

std::string UpdateProjectResult::getType()const
{
	return type_;
}

std::string UpdateProjectResult::getServiceRole()const
{
	return serviceRole_;
}

std::string UpdateProjectResult::getCreateTime()const
{
	return createTime_;
}

