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

#include <alibabacloud/retailcloud/model/SubmitInfoRequest.h>

using AlibabaCloud::Retailcloud::Model::SubmitInfoRequest;

SubmitInfoRequest::SubmitInfoRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "SubmitInfo")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitInfoRequest::~SubmitInfoRequest()
{}

std::string SubmitInfoRequest::getRequestId()const
{
	return requestId_;
}

void SubmitInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SubmitInfoRequest::getMainUserId()const
{
	return mainUserId_;
}

void SubmitInfoRequest::setMainUserId(long mainUserId)
{
	mainUserId_ = mainUserId;
	setParameter("MainUserId", std::to_string(mainUserId));
}

std::vector<SubmitInfoRequest::EcsDescList> SubmitInfoRequest::getEcsDescList()const
{
	return ecsDescList_;
}

void SubmitInfoRequest::setEcsDescList(const std::vector<EcsDescList>& ecsDescList)
{
	ecsDescList_ = ecsDescList;
	for(int dep1 = 0; dep1!= ecsDescList.size(); dep1++) {
		auto ecsDescListObj = ecsDescList.at(dep1);
		std::string ecsDescListObjStr = "EcsDescList." + std::to_string(dep1 + 1);
		setParameter(ecsDescListObjStr + ".ResourceId", ecsDescListObj.resourceId);
		setParameter(ecsDescListObjStr + ".BussinessDesc", ecsDescListObj.bussinessDesc);
		setParameter(ecsDescListObjStr + ".MiddleWareDesc", ecsDescListObj.middleWareDesc);
		setParameter(ecsDescListObjStr + ".OtherMiddleWareDesc", ecsDescListObj.otherMiddleWareDesc);
		setParameter(ecsDescListObjStr + ".BussinessType", ecsDescListObj.bussinessType);
		setParameter(ecsDescListObjStr + ".AppType", ecsDescListObj.appType);
		setParameter(ecsDescListObjStr + ".EnvType", ecsDescListObj.envType);
		setParameter(ecsDescListObjStr + ".UserId", ecsDescListObj.userId);
	}
}

long SubmitInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void SubmitInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

