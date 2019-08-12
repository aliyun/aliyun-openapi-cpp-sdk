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

#include <alibabacloud/ons/model/OnsGroupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsGroupListResult::OnsGroupListResult() :
	ServiceResult()
{}

OnsGroupListResult::OnsGroupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsGroupListResult::~OnsGroupListResult()
{}

void OnsGroupListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["SubscribeInfoDo"];
	for (auto value : allData)
	{
		SubscribeInfoDo dataObject;
		if(!value["Owner"].isNull())
			dataObject.owner = value["Owner"].asString();
		if(!value["GroupId"].isNull())
			dataObject.groupId = value["GroupId"].asString();
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["Remark"].isNull())
			dataObject.remark = value["Remark"].asString();
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		if(!value["IndependentNaming"].isNull())
			dataObject.independentNaming = value["IndependentNaming"].asString() == "true";
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsGroupListResult::SubscribeInfoDo> OnsGroupListResult::getData()const
{
	return data_;
}

std::string OnsGroupListResult::getHelpUrl()const
{
	return helpUrl_;
}

