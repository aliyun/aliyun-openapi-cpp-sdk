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

#include <alibabacloud/cms/model/PutContactGroupRequest.h>

using AlibabaCloud::Cms::Model::PutContactGroupRequest;

PutContactGroupRequest::PutContactGroupRequest() :
	RpcServiceRequest("cms", "2019-01-01", "PutContactGroup")
{
	setMethod(HttpRequest::Method::Post);
}

PutContactGroupRequest::~PutContactGroupRequest()
{}

std::string PutContactGroupRequest::getContactGroupName()const
{
	return contactGroupName_;
}

void PutContactGroupRequest::setContactGroupName(const std::string& contactGroupName)
{
	contactGroupName_ = contactGroupName;
	setParameter("ContactGroupName", contactGroupName);
}

std::string PutContactGroupRequest::getDescribe()const
{
	return describe_;
}

void PutContactGroupRequest::setDescribe(const std::string& describe)
{
	describe_ = describe;
	setParameter("Describe", describe);
}

std::vector<std::string> PutContactGroupRequest::getContactNames()const
{
	return contactNames_;
}

void PutContactGroupRequest::setContactNames(const std::vector<std::string>& contactNames)
{
	contactNames_ = contactNames;
	for(int dep1 = 0; dep1!= contactNames.size(); dep1++) {
		setParameter("ContactNames."+ std::to_string(dep1), contactNames.at(dep1));
	}
}

