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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SubscribeInfoDo"];
	for (auto valueDataSubscribeInfoDo : allDataNode)
	{
		SubscribeInfoDo dataObject;
		if(!valueDataSubscribeInfoDo["Owner"].isNull())
			dataObject.owner = valueDataSubscribeInfoDo["Owner"].asString();
		if(!valueDataSubscribeInfoDo["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataSubscribeInfoDo["UpdateTime"].asString());
		if(!valueDataSubscribeInfoDo["IndependentNaming"].isNull())
			dataObject.independentNaming = valueDataSubscribeInfoDo["IndependentNaming"].asString() == "true";
		if(!valueDataSubscribeInfoDo["GroupId"].isNull())
			dataObject.groupId = valueDataSubscribeInfoDo["GroupId"].asString();
		if(!valueDataSubscribeInfoDo["Remark"].isNull())
			dataObject.remark = valueDataSubscribeInfoDo["Remark"].asString();
		if(!valueDataSubscribeInfoDo["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataSubscribeInfoDo["CreateTime"].asString());
		if(!valueDataSubscribeInfoDo["InstanceId"].isNull())
			dataObject.instanceId = valueDataSubscribeInfoDo["InstanceId"].asString();
		if(!valueDataSubscribeInfoDo["GroupType"].isNull())
			dataObject.groupType = valueDataSubscribeInfoDo["GroupType"].asString();
		auto allTagsNode = valueDataSubscribeInfoDo["Tags"]["Tag"];
		for (auto valueDataSubscribeInfoDoTagsTag : allTagsNode)
		{
			SubscribeInfoDo::Tag tagsObject;
			if(!valueDataSubscribeInfoDoTagsTag["Key"].isNull())
				tagsObject.key = valueDataSubscribeInfoDoTagsTag["Key"].asString();
			if(!valueDataSubscribeInfoDoTagsTag["Value"].isNull())
				tagsObject.value = valueDataSubscribeInfoDoTagsTag["Value"].asString();
			dataObject.tags.push_back(tagsObject);
		}
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

