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

#include <alibabacloud/ledgerdb/model/ModifyLedgerAttributeRequest.h>

using AlibabaCloud::Ledgerdb::Model::ModifyLedgerAttributeRequest;

ModifyLedgerAttributeRequest::ModifyLedgerAttributeRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "ModifyLedgerAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyLedgerAttributeRequest::~ModifyLedgerAttributeRequest()
{}

std::string ModifyLedgerAttributeRequest::getLedgerId()const
{
	return ledgerId_;
}

void ModifyLedgerAttributeRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setBodyParameter("LedgerId", ledgerId);
}

std::string ModifyLedgerAttributeRequest::getLedgerName()const
{
	return ledgerName_;
}

void ModifyLedgerAttributeRequest::setLedgerName(const std::string& ledgerName)
{
	ledgerName_ = ledgerName;
	setBodyParameter("LedgerName", ledgerName);
}

std::string ModifyLedgerAttributeRequest::getLedgerDescription()const
{
	return ledgerDescription_;
}

void ModifyLedgerAttributeRequest::setLedgerDescription(const std::string& ledgerDescription)
{
	ledgerDescription_ = ledgerDescription;
	setBodyParameter("LedgerDescription", ledgerDescription);
}

