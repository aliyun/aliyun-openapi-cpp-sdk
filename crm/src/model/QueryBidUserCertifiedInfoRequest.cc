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

#include <alibabacloud/crm/model/QueryBidUserCertifiedInfoRequest.h>

using AlibabaCloud::Crm::Model::QueryBidUserCertifiedInfoRequest;

QueryBidUserCertifiedInfoRequest::QueryBidUserCertifiedInfoRequest() :
	RpcServiceRequest("crm", "2015-04-08", "QueryBidUserCertifiedInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryBidUserCertifiedInfoRequest::~QueryBidUserCertifiedInfoRequest()
{}

std::string QueryBidUserCertifiedInfoRequest::getBidType()const
{
	return bidType_;
}

void QueryBidUserCertifiedInfoRequest::setBidType(const std::string& bidType)
{
	bidType_ = bidType;
	setParameter("BidType", bidType);
}

std::string QueryBidUserCertifiedInfoRequest::getPK()const
{
	return pK_;
}

void QueryBidUserCertifiedInfoRequest::setPK(const std::string& pK)
{
	pK_ = pK;
	setParameter("PK", pK);
}

