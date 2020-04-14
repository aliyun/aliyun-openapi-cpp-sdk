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

#include <alibabacloud/ivpd/model/CreateSegmentBodyJobRequest.h>

using AlibabaCloud::Ivpd::Model::CreateSegmentBodyJobRequest;

CreateSegmentBodyJobRequest::CreateSegmentBodyJobRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "CreateSegmentBodyJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSegmentBodyJobRequest::~CreateSegmentBodyJobRequest()
{}

std::vector<CreateSegmentBodyJobRequest::DataList> CreateSegmentBodyJobRequest::getDataList()const
{
	return dataList_;
}

void CreateSegmentBodyJobRequest::setDataList(const std::vector<DataList>& dataList)
{
	dataList_ = dataList;
	for(int dep1 = 0; dep1!= dataList.size(); dep1++) {
		auto dataListObj = dataList.at(dep1);
		std::string dataListObjStr = "DataList." + std::to_string(dep1 + 1);
		setParameter(dataListObjStr + ".DataId", dataListObj.dataId);
		setParameter(dataListObjStr + ".ImageUrl", dataListObj.imageUrl);
	}
}

bool CreateSegmentBodyJobRequest::getAsync()const
{
	return async_;
}

void CreateSegmentBodyJobRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

std::string CreateSegmentBodyJobRequest::getJobId()const
{
	return jobId_;
}

void CreateSegmentBodyJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

int CreateSegmentBodyJobRequest::getTimeToLive()const
{
	return timeToLive_;
}

void CreateSegmentBodyJobRequest::setTimeToLive(int timeToLive)
{
	timeToLive_ = timeToLive;
	setBodyParameter("TimeToLive", std::to_string(timeToLive));
}

