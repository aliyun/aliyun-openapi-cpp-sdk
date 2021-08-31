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

#include <alibabacloud/edas/model/ListEcuByRegionRequest.h>

using AlibabaCloud::Edas::Model::ListEcuByRegionRequest;

ListEcuByRegionRequest::ListEcuByRegionRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/resource/ecu_list");
	setMethod(HttpRequest::Method::Get);
}

ListEcuByRegionRequest::~ListEcuByRegionRequest()
{}

std::string ListEcuByRegionRequest::getAct()const
{
	return act_;
}

void ListEcuByRegionRequest::setAct(const std::string& act)
{
	act_ = act;
	setParameter("Act", act);
}

std::string ListEcuByRegionRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void ListEcuByRegionRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

