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

#include <alibabacloud/crm/model/AddLabelForBidRequest.h>

using AlibabaCloud::Crm::Model::AddLabelForBidRequest;

AddLabelForBidRequest::AddLabelForBidRequest() :
	RpcServiceRequest("crm", "2015-04-08", "AddLabelForBid")
{
	setMethod(HttpRequest::Method::Post);
}

AddLabelForBidRequest::~AddLabelForBidRequest()
{}

std::string AddLabelForBidRequest::getLabelSeries()const
{
	return labelSeries_;
}

void AddLabelForBidRequest::setLabelSeries(const std::string& labelSeries)
{
	labelSeries_ = labelSeries;
	setParameter("LabelSeries", labelSeries);
}

std::string AddLabelForBidRequest::getEndTime()const
{
	return endTime_;
}

void AddLabelForBidRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string AddLabelForBidRequest::getPK()const
{
	return pK_;
}

void AddLabelForBidRequest::setPK(const std::string& pK)
{
	pK_ = pK;
	setParameter("PK", pK);
}

std::string AddLabelForBidRequest::getLabel()const
{
	return label_;
}

void AddLabelForBidRequest::setLabel(const std::string& label)
{
	label_ = label;
	setParameter("Label", label);
}

