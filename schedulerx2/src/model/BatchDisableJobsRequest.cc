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

#include <alibabacloud/schedulerx2/model/BatchDisableJobsRequest.h>

using AlibabaCloud::Schedulerx2::Model::BatchDisableJobsRequest;

BatchDisableJobsRequest::BatchDisableJobsRequest() :
	RpcServiceRequest("schedulerx2", "2019-04-30", "BatchDisableJobs")
{
	setMethod(HttpRequest::Method::Post);
}

BatchDisableJobsRequest::~BatchDisableJobsRequest()
{}

std::string BatchDisableJobsRequest::getNamespaceSource()const
{
	return namespaceSource_;
}

void BatchDisableJobsRequest::setNamespaceSource(const std::string& namespaceSource)
{
	namespaceSource_ = namespaceSource;
	setParameter("NamespaceSource", namespaceSource);
}

std::string BatchDisableJobsRequest::getRegionId()const
{
	return regionId_;
}

void BatchDisableJobsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string BatchDisableJobsRequest::getGroupId()const
{
	return groupId_;
}

void BatchDisableJobsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string BatchDisableJobsRequest::get_Namespace()const
{
	return _namespace_;
}

void BatchDisableJobsRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::vector<long> BatchDisableJobsRequest::getJobIdList()const
{
	return jobIdList_;
}

void BatchDisableJobsRequest::setJobIdList(const std::vector<long>& jobIdList)
{
	jobIdList_ = jobIdList;
	for(int dep1 = 0; dep1!= jobIdList.size(); dep1++) {
		setBodyParameter("JobIdList."+ std::to_string(dep1), std::to_string(jobIdList.at(dep1)));
	}
}

