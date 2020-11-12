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

#include <alibabacloud/actiontrail/model/DeleteTrailRequest.h>

using AlibabaCloud::Actiontrail::Model::DeleteTrailRequest;

DeleteTrailRequest::DeleteTrailRequest() :
	RpcServiceRequest("actiontrail", "2017-12-04", "DeleteTrail")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteTrailRequest::~DeleteTrailRequest()
{}

std::string DeleteTrailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTrailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteTrailRequest::getName()const
{
	return name_;
}

void DeleteTrailRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

