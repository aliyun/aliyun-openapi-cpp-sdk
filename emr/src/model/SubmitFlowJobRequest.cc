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

#include <alibabacloud/emr/model/SubmitFlowJobRequest.h>

using AlibabaCloud::Emr::Model::SubmitFlowJobRequest;

SubmitFlowJobRequest::SubmitFlowJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SubmitFlowJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitFlowJobRequest::~SubmitFlowJobRequest()
{}

std::string SubmitFlowJobRequest::getConf()const
{
	return conf_;
}

void SubmitFlowJobRequest::setConf(const std::string& conf)
{
	conf_ = conf;
	setParameter("Conf", conf);
}

std::string SubmitFlowJobRequest::getClusterId()const
{
	return clusterId_;
}

void SubmitFlowJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string SubmitFlowJobRequest::getJobId()const
{
	return jobId_;
}

void SubmitFlowJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string SubmitFlowJobRequest::getHostName()const
{
	return hostName_;
}

void SubmitFlowJobRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string SubmitFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void SubmitFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SubmitFlowJobRequest::get_Namespace()const
{
	return _namespace_;
}

void SubmitFlowJobRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string SubmitFlowJobRequest::getJobInstanceId()const
{
	return jobInstanceId_;
}

void SubmitFlowJobRequest::setJobInstanceId(const std::string& jobInstanceId)
{
	jobInstanceId_ = jobInstanceId;
	setParameter("JobInstanceId", jobInstanceId);
}

std::string SubmitFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void SubmitFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

