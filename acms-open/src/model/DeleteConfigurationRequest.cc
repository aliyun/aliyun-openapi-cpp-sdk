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

#include <alibabacloud/acms-open/model/DeleteConfigurationRequest.h>

using AlibabaCloud::Acms_open::Model::DeleteConfigurationRequest;

DeleteConfigurationRequest::DeleteConfigurationRequest() :
	RoaServiceRequest("acms-open", "2020-02-06")
{
	setResourcePath("/diamond-ops/pop/configuration");
	setMethod(HttpRequest::Method::Delete);
}

DeleteConfigurationRequest::~DeleteConfigurationRequest()
{}

std::string DeleteConfigurationRequest::getDataId()const
{
	return dataId_;
}

void DeleteConfigurationRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setParameter("DataId", dataId);
}

std::string DeleteConfigurationRequest::getNamespaceId()const
{
	return namespaceId_;
}

void DeleteConfigurationRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string DeleteConfigurationRequest::getGroup()const
{
	return group_;
}

void DeleteConfigurationRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

