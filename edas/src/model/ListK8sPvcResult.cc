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

#include <alibabacloud/edas/model/ListK8sPvcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListK8sPvcResult::ListK8sPvcResult() :
	ServiceResult()
{}

ListK8sPvcResult::ListK8sPvcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListK8sPvcResult::~ListK8sPvcResult()
{}

void ListK8sPvcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allK8sPvcListNode = value["K8sPvcList"]["K8sPvcListItem"];
	for (auto valueK8sPvcListK8sPvcListItem : allK8sPvcListNode)
	{
		K8sPvcListItem k8sPvcListObject;
		if(!valueK8sPvcListK8sPvcListItem["Name"].isNull())
			k8sPvcListObject.name = valueK8sPvcListK8sPvcListItem["Name"].asString();
		if(!valueK8sPvcListK8sPvcListItem["Namespace"].isNull())
			k8sPvcListObject._namespace = valueK8sPvcListK8sPvcListItem["Namespace"].asString();
		if(!valueK8sPvcListK8sPvcListItem["CreationTime"].isNull())
			k8sPvcListObject.creationTime = valueK8sPvcListK8sPvcListItem["CreationTime"].asString();
		if(!valueK8sPvcListK8sPvcListItem["VolumeName"].isNull())
			k8sPvcListObject.volumeName = valueK8sPvcListK8sPvcListItem["VolumeName"].asString();
		if(!valueK8sPvcListK8sPvcListItem["VolumeMode"].isNull())
			k8sPvcListObject.volumeMode = valueK8sPvcListK8sPvcListItem["VolumeMode"].asString();
		k8sPvcList_.push_back(k8sPvcListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListK8sPvcResult::getMessage()const
{
	return message_;
}

std::vector<ListK8sPvcResult::K8sPvcListItem> ListK8sPvcResult::getK8sPvcList()const
{
	return k8sPvcList_;
}

int ListK8sPvcResult::getCode()const
{
	return code_;
}

