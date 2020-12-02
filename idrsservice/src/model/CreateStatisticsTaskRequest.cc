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

#include <alibabacloud/idrsservice/model/CreateStatisticsTaskRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateStatisticsTaskRequest;

CreateStatisticsTaskRequest::CreateStatisticsTaskRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateStatisticsTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStatisticsTaskRequest::~CreateStatisticsTaskRequest()
{}

std::string CreateStatisticsTaskRequest::getClientToken()const
{
	return clientToken_;
}

void CreateStatisticsTaskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::vector<std::string> CreateStatisticsTaskRequest::getDepartmentId()const
{
	return departmentId_;
}

void CreateStatisticsTaskRequest::setDepartmentId(const std::vector<std::string>& departmentId)
{
	departmentId_ = departmentId;
	for(int dep1 = 0; dep1!= departmentId.size(); dep1++) {
		setParameter("DepartmentId."+ std::to_string(dep1), departmentId.at(dep1));
	}
}

std::string CreateStatisticsTaskRequest::getDateTo()const
{
	return dateTo_;
}

void CreateStatisticsTaskRequest::setDateTo(const std::string& dateTo)
{
	dateTo_ = dateTo;
	setParameter("DateTo", dateTo);
}

std::string CreateStatisticsTaskRequest::getDateFrom()const
{
	return dateFrom_;
}

void CreateStatisticsTaskRequest::setDateFrom(const std::string& dateFrom)
{
	dateFrom_ = dateFrom;
	setParameter("DateFrom", dateFrom);
}

