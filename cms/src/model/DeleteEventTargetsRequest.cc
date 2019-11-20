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

#include <alibabacloud/cms/model/DeleteEventTargetsRequest.h>

using AlibabaCloud::Cms::Model::DeleteEventTargetsRequest;

DeleteEventTargetsRequest::DeleteEventTargetsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DeleteEventTargets")
{
	setMethod(HttpRequest::Method::Put);
}

DeleteEventTargetsRequest::~DeleteEventTargetsRequest()
{}

std::string DeleteEventTargetsRequest::getRuleName()const
{
	return ruleName_;
}

void DeleteEventTargetsRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::vector<std::string> DeleteEventTargetsRequest::getIds()const
{
	return ids_;
}

void DeleteEventTargetsRequest::setIds(const std::vector<std::string>& ids)
{
	ids_ = ids;
	for(int dep1 = 0; dep1!= ids.size(); dep1++) {
		setCoreParameter("Ids."+ std::to_string(dep1), ids.at(dep1));
	}
}

