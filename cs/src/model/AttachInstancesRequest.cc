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

#include <alibabacloud/cs/model/AttachInstancesRequest.h>

using AlibabaCloud::CS::Model::AttachInstancesRequest;

AttachInstancesRequest::AttachInstancesRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/attach");
	setMethod(HttpRequest::Method::Post);
}

AttachInstancesRequest::~AttachInstancesRequest()
{}

std::string AttachInstancesRequest::getPassword()const
{
	return password_;
}

void AttachInstancesRequest::setPassword(const std::string& password)
{
	password_ = password;
	setBodyParameter("Password", password);
}

bool AttachInstancesRequest::getKeep_instance_name()const
{
	return keep_instance_name_;
}

void AttachInstancesRequest::setKeep_instance_name(bool keep_instance_name)
{
	keep_instance_name_ = keep_instance_name;
	setBodyParameter("Keep_instance_name", keep_instance_name ? "true" : "false");
}

std::string AttachInstancesRequest::getKey_pair()const
{
	return key_pair_;
}

void AttachInstancesRequest::setKey_pair(const std::string& key_pair)
{
	key_pair_ = key_pair;
	setBodyParameter("Key_pair", key_pair);
}

std::string AttachInstancesRequest::getCpu_policy()const
{
	return cpu_policy_;
}

void AttachInstancesRequest::setCpu_policy(const std::string& cpu_policy)
{
	cpu_policy_ = cpu_policy;
	setBodyParameter("Cpu_policy", cpu_policy);
}

std::string AttachInstancesRequest::getClusterId()const
{
	return clusterId_;
}

void AttachInstancesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool AttachInstancesRequest::getFormat_disk()const
{
	return format_disk_;
}

void AttachInstancesRequest::setFormat_disk(bool format_disk)
{
	format_disk_ = format_disk;
	setBodyParameter("Format_disk", format_disk ? "true" : "false");
}

