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

#include <alibabacloud/facebody/model/AddBodyTraceRequest.h>

using AlibabaCloud::Facebody::Model::AddBodyTraceRequest;

AddBodyTraceRequest::AddBodyTraceRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "AddBodyTrace")
{
	setMethod(HttpRequest::Method::Post);
}

AddBodyTraceRequest::~AddBodyTraceRequest()
{}

std::string AddBodyTraceRequest::getExtraData()const
{
	return extraData_;
}

void AddBodyTraceRequest::setExtraData(const std::string& extraData)
{
	extraData_ = extraData;
	setBodyParameter("ExtraData", extraData);
}

long AddBodyTraceRequest::getPersonId()const
{
	return personId_;
}

void AddBodyTraceRequest::setPersonId(long personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", std::to_string(personId));
}

Array AddBodyTraceRequest::getImages()const
{
	return images_;
}

void AddBodyTraceRequest::setImages(const Array& images)
{
	images_ = images;
	setBodyParameter("Images", std::to_string(images));
}

long AddBodyTraceRequest::getDbId()const
{
	return dbId_;
}

void AddBodyTraceRequest::setDbId(long dbId)
{
	dbId_ = dbId;
	setBodyParameter("DbId", std::to_string(dbId));
}

