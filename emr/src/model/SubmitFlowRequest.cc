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

#include <alibabacloud/emr/model/SubmitFlowRequest.h>

using AlibabaCloud::Emr::Model::SubmitFlowRequest;

SubmitFlowRequest::SubmitFlowRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SubmitFlow")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitFlowRequest::~SubmitFlowRequest()
{}

std::string SubmitFlowRequest::getConf()const
{
	return conf_;
}

void SubmitFlowRequest::setConf(const std::string& conf)
{
	conf_ = conf;
	setParameter("Conf", conf);
}

std::string SubmitFlowRequest::getRegionId()const
{
	return regionId_;
}

void SubmitFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SubmitFlowRequest::getProjectId()const
{
	return projectId_;
}

void SubmitFlowRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string SubmitFlowRequest::getFlowId()const
{
	return flowId_;
}

void SubmitFlowRequest::setFlowId(const std::string& flowId)
{
	flowId_ = flowId;
	setParameter("FlowId", flowId);
}

