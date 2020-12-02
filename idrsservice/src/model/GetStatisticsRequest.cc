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

#include <alibabacloud/idrsservice/model/GetStatisticsRequest.h>

using AlibabaCloud::Idrsservice::Model::GetStatisticsRequest;

GetStatisticsRequest::GetStatisticsRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "GetStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

GetStatisticsRequest::~GetStatisticsRequest()
{}

std::vector<std::string> GetStatisticsRequest::getDepartmentId()const
{
	return departmentId_;
}

void GetStatisticsRequest::setDepartmentId(const std::vector<std::string>& departmentId)
{
	departmentId_ = departmentId;
	for(int dep1 = 0; dep1!= departmentId.size(); dep1++) {
		setParameter("DepartmentId."+ std::to_string(dep1), departmentId.at(dep1));
	}
}

std::string GetStatisticsRequest::getDateTo()const
{
	return dateTo_;
}

void GetStatisticsRequest::setDateTo(const std::string& dateTo)
{
	dateTo_ = dateTo;
	setParameter("DateTo", dateTo);
}

std::string GetStatisticsRequest::getDateFrom()const
{
	return dateFrom_;
}

void GetStatisticsRequest::setDateFrom(const std::string& dateFrom)
{
	dateFrom_ = dateFrom;
	setParameter("DateFrom", dateFrom);
}

