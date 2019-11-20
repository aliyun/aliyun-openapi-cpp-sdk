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

#include <alibabacloud/ccc/model/ListConfigRequest.h>

using AlibabaCloud::CCC::Model::ListConfigRequest;

ListConfigRequest::ListConfigRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ListConfigRequest::~ListConfigRequest()
{}

std::string ListConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ListConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> ListConfigRequest::getConfigItem()const
{
	return configItem_;
}

void ListConfigRequest::setConfigItem(const std::vector<std::string>& configItem)
{
	configItem_ = configItem;
	for(int dep1 = 0; dep1!= configItem.size(); dep1++)
		setCoreParameter("ConfigItem."+ std::to_string(dep1), configItem.at(dep1));
}

std::string ListConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

