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

#include <alibabacloud/retailcloud/model/BindNodeLabelRequest.h>

using AlibabaCloud::Retailcloud::Model::BindNodeLabelRequest;

BindNodeLabelRequest::BindNodeLabelRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "BindNodeLabel")
{
	setMethod(HttpRequest::Method::Post);
}

BindNodeLabelRequest::~BindNodeLabelRequest()
{}

std::string BindNodeLabelRequest::getInstanceId()const
{
	return instanceId_;
}

void BindNodeLabelRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string BindNodeLabelRequest::getLabelKey()const
{
	return labelKey_;
}

void BindNodeLabelRequest::setLabelKey(const std::string& labelKey)
{
	labelKey_ = labelKey;
	setParameter("LabelKey", labelKey);
}

std::string BindNodeLabelRequest::getLabelValue()const
{
	return labelValue_;
}

void BindNodeLabelRequest::setLabelValue(const std::string& labelValue)
{
	labelValue_ = labelValue;
	setParameter("LabelValue", labelValue);
}

std::string BindNodeLabelRequest::getClusterId()const
{
	return clusterId_;
}

void BindNodeLabelRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

