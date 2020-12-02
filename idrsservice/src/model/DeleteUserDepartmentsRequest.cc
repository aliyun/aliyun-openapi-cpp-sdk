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

#include <alibabacloud/idrsservice/model/DeleteUserDepartmentsRequest.h>

using AlibabaCloud::Idrsservice::Model::DeleteUserDepartmentsRequest;

DeleteUserDepartmentsRequest::DeleteUserDepartmentsRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "DeleteUserDepartments")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUserDepartmentsRequest::~DeleteUserDepartmentsRequest()
{}

std::vector<std::string> DeleteUserDepartmentsRequest::getDepartmentId()const
{
	return departmentId_;
}

void DeleteUserDepartmentsRequest::setDepartmentId(const std::vector<std::string>& departmentId)
{
	departmentId_ = departmentId;
	for(int dep1 = 0; dep1!= departmentId.size(); dep1++) {
		setParameter("DepartmentId."+ std::to_string(dep1), departmentId.at(dep1));
	}
}

std::vector<std::string> DeleteUserDepartmentsRequest::getUserId()const
{
	return userId_;
}

void DeleteUserDepartmentsRequest::setUserId(const std::vector<std::string>& userId)
{
	userId_ = userId;
	for(int dep1 = 0; dep1!= userId.size(); dep1++) {
		setBodyParameter("UserId."+ std::to_string(dep1), userId.at(dep1));
	}
}

