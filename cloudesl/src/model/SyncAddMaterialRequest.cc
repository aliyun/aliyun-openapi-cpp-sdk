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

#include <alibabacloud/cloudesl/model/SyncAddMaterialRequest.h>

using AlibabaCloud::Cloudesl::Model::SyncAddMaterialRequest;

SyncAddMaterialRequest::SyncAddMaterialRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "SyncAddMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

SyncAddMaterialRequest::~SyncAddMaterialRequest()
{}

std::string SyncAddMaterialRequest::getContent()const
{
	return content_;
}

void SyncAddMaterialRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string SyncAddMaterialRequest::getName()const
{
	return name_;
}

void SyncAddMaterialRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

