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

#include <alibabacloud/cr/model/DeleteNamespaceRequest.h>

using AlibabaCloud::Cr::Model::DeleteNamespaceRequest;

DeleteNamespaceRequest::DeleteNamespaceRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

DeleteNamespaceRequest::~DeleteNamespaceRequest()
{}

std::string DeleteNamespaceRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNamespaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteNamespaceRequest::get_Namespace()const
{
	return _namespace_;
}

void DeleteNamespaceRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

