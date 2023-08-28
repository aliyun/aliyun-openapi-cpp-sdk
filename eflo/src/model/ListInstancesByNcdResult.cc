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

#include <alibabacloud/eflo/model/ListInstancesByNcdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListInstancesByNcdResult::ListInstancesByNcdResult() :
	ServiceResult()
{}

ListInstancesByNcdResult::ListInstancesByNcdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesByNcdResult::~ListInstancesByNcdResult()
{}

void ListInstancesByNcdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["MaxNcd"].isNull())
		content_.maxNcd = std::stoi(contentNode["MaxNcd"].asString());
	if(!contentNode["InstanceType"].isNull())
		content_.instanceType = contentNode["InstanceType"].asString();
	if(!contentNode["SourceInstanceId"].isNull())
		content_.sourceInstanceId = contentNode["SourceInstanceId"].asString();
	auto allInstanceInfosNode = contentNode["InstanceInfos"]["InstanceInfo"];
	for (auto contentNodeInstanceInfosInstanceInfo : allInstanceInfosNode)
	{
		Content::InstanceInfo instanceInfoObject;
		if(!contentNodeInstanceInfosInstanceInfo["InstanceId"].isNull())
			instanceInfoObject.instanceId = contentNodeInstanceInfosInstanceInfo["InstanceId"].asString();
		if(!contentNodeInstanceInfosInstanceInfo["Ncd"].isNull())
			instanceInfoObject.ncd = std::stoi(contentNodeInstanceInfosInstanceInfo["Ncd"].asString());
		content_.instanceInfos.push_back(instanceInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListInstancesByNcdResult::getMessage()const
{
	return message_;
}

ListInstancesByNcdResult::Content ListInstancesByNcdResult::getContent()const
{
	return content_;
}

int ListInstancesByNcdResult::getCode()const
{
	return code_;
}

