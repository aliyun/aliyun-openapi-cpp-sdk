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

#include <alibabacloud/ons/model/OnsTopicListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsTopicListResult::OnsTopicListResult() :
	ServiceResult()
{}

OnsTopicListResult::OnsTopicListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsTopicListResult::~OnsTopicListResult()
{}

void OnsTopicListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PublishInfoDo"];
	for (auto valueDataPublishInfoDo : allDataNode)
	{
		PublishInfoDo dataObject;
		if(!valueDataPublishInfoDo["MessageType"].isNull())
			dataObject.messageType = std::stoi(valueDataPublishInfoDo["MessageType"].asString());
		if(!valueDataPublishInfoDo["RelationName"].isNull())
			dataObject.relationName = valueDataPublishInfoDo["RelationName"].asString();
		if(!valueDataPublishInfoDo["Owner"].isNull())
			dataObject.owner = valueDataPublishInfoDo["Owner"].asString();
		if(!valueDataPublishInfoDo["IndependentNaming"].isNull())
			dataObject.independentNaming = valueDataPublishInfoDo["IndependentNaming"].asString() == "true";
		if(!valueDataPublishInfoDo["Remark"].isNull())
			dataObject.remark = valueDataPublishInfoDo["Remark"].asString();
		if(!valueDataPublishInfoDo["Relation"].isNull())
			dataObject.relation = std::stoi(valueDataPublishInfoDo["Relation"].asString());
		if(!valueDataPublishInfoDo["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataPublishInfoDo["CreateTime"].asString());
		if(!valueDataPublishInfoDo["Topic"].isNull())
			dataObject.topic = valueDataPublishInfoDo["Topic"].asString();
		if(!valueDataPublishInfoDo["InstanceId"].isNull())
			dataObject.instanceId = valueDataPublishInfoDo["InstanceId"].asString();
		if(!valueDataPublishInfoDo["ServiceStatus"].isNull())
			dataObject.serviceStatus = std::stoi(valueDataPublishInfoDo["ServiceStatus"].asString());
		auto allTagsNode = valueDataPublishInfoDo["Tags"]["Tag"];
		for (auto valueDataPublishInfoDoTagsTag : allTagsNode)
		{
			PublishInfoDo::Tag tagsObject;
			if(!valueDataPublishInfoDoTagsTag["Key"].isNull())
				tagsObject.key = valueDataPublishInfoDoTagsTag["Key"].asString();
			if(!valueDataPublishInfoDoTagsTag["Value"].isNull())
				tagsObject.value = valueDataPublishInfoDoTagsTag["Value"].asString();
			dataObject.tags.push_back(tagsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsTopicListResult::PublishInfoDo> OnsTopicListResult::getData()const
{
	return data_;
}

std::string OnsTopicListResult::getHelpUrl()const
{
	return helpUrl_;
}

