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

#include <alibabacloud/cs/model/ModifyClusterTagsRequest.h>

using AlibabaCloud::CS::Model::ModifyClusterTagsRequest;

ModifyClusterTagsRequest::ModifyClusterTagsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/tags");
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterTagsRequest::~ModifyClusterTagsRequest()
{}

std::string ModifyClusterTagsRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterTagsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyClusterTagsRequest::getValue()const
{
	return value_;
}

void ModifyClusterTagsRequest::setValue(const std::string& value)
{
	value_ = value;
	setBodyParameter("Value", value);
}

std::string ModifyClusterTagsRequest::getKey()const
{
	return key_;
}

void ModifyClusterTagsRequest::setKey(const std::string& key)
{
	key_ = key;
	setBodyParameter("Key", key);
}

