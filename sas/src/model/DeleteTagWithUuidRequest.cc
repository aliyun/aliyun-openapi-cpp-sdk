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

#include <alibabacloud/sas/model/DeleteTagWithUuidRequest.h>

using AlibabaCloud::Sas::Model::DeleteTagWithUuidRequest;

DeleteTagWithUuidRequest::DeleteTagWithUuidRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DeleteTagWithUuid")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteTagWithUuidRequest::~DeleteTagWithUuidRequest()
{}

std::string DeleteTagWithUuidRequest::getTagName()const
{
	return tagName_;
}

void DeleteTagWithUuidRequest::setTagName(const std::string& tagName)
{
	tagName_ = tagName;
	setParameter("TagName", tagName);
}

std::string DeleteTagWithUuidRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteTagWithUuidRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteTagWithUuidRequest::getUuidList()const
{
	return uuidList_;
}

void DeleteTagWithUuidRequest::setUuidList(const std::string& uuidList)
{
	uuidList_ = uuidList;
	setParameter("UuidList", uuidList);
}

