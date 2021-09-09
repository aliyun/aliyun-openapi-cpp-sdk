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

#include <alibabacloud/companyreg/model/SavePayrollSettingRequest.h>

using AlibabaCloud::Companyreg::Model::SavePayrollSettingRequest;

SavePayrollSettingRequest::SavePayrollSettingRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "SavePayrollSetting")
{
	setMethod(HttpRequest::Method::Post);
}

SavePayrollSettingRequest::~SavePayrollSettingRequest()
{}

std::string SavePayrollSettingRequest::getBizId()const
{
	return bizId_;
}

void SavePayrollSettingRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string SavePayrollSettingRequest::getPayrollAutoGrantRule()const
{
	return payrollAutoGrantRule_;
}

void SavePayrollSettingRequest::setPayrollAutoGrantRule(const std::string& payrollAutoGrantRule)
{
	payrollAutoGrantRule_ = payrollAutoGrantRule;
	setParameter("PayrollAutoGrantRule", payrollAutoGrantRule);
}

std::string SavePayrollSettingRequest::getPayrollGrantMode()const
{
	return payrollGrantMode_;
}

void SavePayrollSettingRequest::setPayrollGrantMode(const std::string& payrollGrantMode)
{
	payrollGrantMode_ = payrollGrantMode;
	setParameter("PayrollGrantMode", payrollGrantMode);
}

