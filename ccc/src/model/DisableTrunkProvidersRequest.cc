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

#include <alibabacloud/ccc/model/DisableTrunkProvidersRequest.h>

using AlibabaCloud::CCC::Model::DisableTrunkProvidersRequest;

DisableTrunkProvidersRequest::DisableTrunkProvidersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DisableTrunkProviders")
{
	setMethod(HttpRequest::Method::Post);
}

DisableTrunkProvidersRequest::~DisableTrunkProvidersRequest()
{}

std::vector<std::string> DisableTrunkProvidersRequest::getProviderName()const
{
	return providerName_;
}

void DisableTrunkProvidersRequest::setProviderName(const std::vector<std::string>& providerName)
{
	providerName_ = providerName;
	for(int dep1 = 0; dep1!= providerName.size(); dep1++) {
		setParameter("ProviderName."+ std::to_string(dep1), providerName.at(dep1));
	}
}

std::string DisableTrunkProvidersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DisableTrunkProvidersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

