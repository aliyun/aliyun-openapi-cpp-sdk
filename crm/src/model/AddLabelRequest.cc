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

#include <alibabacloud/crm/model/AddLabelRequest.h>

using AlibabaCloud::Crm::Model::AddLabelRequest;

AddLabelRequest::AddLabelRequest() :
	RpcServiceRequest("crm", "2015-04-08", "AddLabel")
{
	setMethod(HttpRequest::Method::Post);
}

AddLabelRequest::~AddLabelRequest()
{}

std::string AddLabelRequest::getLabelSeries()const
{
	return labelSeries_;
}

void AddLabelRequest::setLabelSeries(const std::string& labelSeries)
{
	labelSeries_ = labelSeries;
	setParameter("LabelSeries", labelSeries);
}

std::string AddLabelRequest::getOrganization()const
{
	return organization_;
}

void AddLabelRequest::setOrganization(const std::string& organization)
{
	organization_ = organization;
	setParameter("Organization", organization);
}

std::string AddLabelRequest::getEndTime()const
{
	return endTime_;
}

void AddLabelRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string AddLabelRequest::getPK()const
{
	return pK_;
}

void AddLabelRequest::setPK(const std::string& pK)
{
	pK_ = pK;
	setParameter("PK", pK);
}

std::string AddLabelRequest::getLabelName()const
{
	return labelName_;
}

void AddLabelRequest::setLabelName(const std::string& labelName)
{
	labelName_ = labelName;
	setParameter("LabelName", labelName);
}

std::string AddLabelRequest::getUserName()const
{
	return userName_;
}

void AddLabelRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

