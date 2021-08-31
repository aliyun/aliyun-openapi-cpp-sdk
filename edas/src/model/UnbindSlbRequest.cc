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

#include <alibabacloud/edas/model/UnbindSlbRequest.h>

using AlibabaCloud::Edas::Model::UnbindSlbRequest;

UnbindSlbRequest::UnbindSlbRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/app/unbind_slb_json");
	setMethod(HttpRequest::Method::Post);
}

UnbindSlbRequest::~UnbindSlbRequest()
{}

std::string UnbindSlbRequest::getSlbId()const
{
	return slbId_;
}

void UnbindSlbRequest::setSlbId(const std::string& slbId)
{
	slbId_ = slbId;
	setParameter("SlbId", slbId);
}

std::string UnbindSlbRequest::getAppId()const
{
	return appId_;
}

void UnbindSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UnbindSlbRequest::getDeleteListener()const
{
	return deleteListener_;
}

void UnbindSlbRequest::setDeleteListener(const std::string& deleteListener)
{
	deleteListener_ = deleteListener;
	setParameter("DeleteListener", deleteListener);
}

std::string UnbindSlbRequest::getType()const
{
	return type_;
}

void UnbindSlbRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

