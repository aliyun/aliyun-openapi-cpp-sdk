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
	auto allData = value["Data"]["PublishInfoDo"];
	for (auto value : allData)
	{
		PublishInfoDo dataObject;
		if(!value["Topic"].isNull())
			dataObject.topic = value["Topic"].asString();
		if(!value["Owner"].isNull())
			dataObject.owner = value["Owner"].asString();
		if(!value["Relation"].isNull())
			dataObject.relation = std::stoi(value["Relation"].asString());
		if(!value["RelationName"].isNull())
			dataObject.relationName = value["RelationName"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Remark"].isNull())
			dataObject.remark = value["Remark"].asString();
		if(!value["MessageType"].isNull())
			dataObject.messageType = std::stoi(value["MessageType"].asString());
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		if(!value["IndependentNaming"].isNull())
			dataObject.independentNaming = value["IndependentNaming"].asString() == "true";
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

