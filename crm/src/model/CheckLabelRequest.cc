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

#include <alibabacloud/crm/model/CheckLabelRequest.h>

using AlibabaCloud::Crm::Model::CheckLabelRequest;

CheckLabelRequest::CheckLabelRequest() :
	RpcServiceRequest("crm", "2015-04-08", "CheckLabel")
{
	setMethod(HttpRequest::Method::Post);
}

CheckLabelRequest::~CheckLabelRequest()
{}

std::string CheckLabelRequest::getLabelSeries()const
{
	return labelSeries_;
}

void CheckLabelRequest::setLabelSeries(const std::string& labelSeries)
{
	labelSeries_ = labelSeries;
	setParameter("LabelSeries", labelSeries);
}

std::string CheckLabelRequest::getPK()const
{
	return pK_;
}

void CheckLabelRequest::setPK(const std::string& pK)
{
	pK_ = pK;
	setParameter("PK", pK);
}

std::string CheckLabelRequest::getLabelName()const
{
	return labelName_;
}

void CheckLabelRequest::setLabelName(const std::string& labelName)
{
	labelName_ = labelName;
	setParameter("LabelName", labelName);
}

