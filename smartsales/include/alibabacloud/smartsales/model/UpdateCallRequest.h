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

#ifndef ALIBABACLOUD_SMARTSALES_MODEL_UPDATECALLREQUEST_H_
#define ALIBABACLOUD_SMARTSALES_MODEL_UPDATECALLREQUEST_H_

#include <alibabacloud/smartsales/SmartSalesExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SmartSales {
namespace Model {
class ALIBABACLOUD_SMARTSALES_EXPORT UpdateCallRequest : public RpcServiceRequest {
public:
	UpdateCallRequest();
	~UpdateCallRequest();
	long getCallId() const;
	void setCallId(long callId);
	std::string getClueStatusRemark() const;
	void setClueStatusRemark(const std::string &clueStatusRemark);
	std::string getAgentKey() const;
	void setAgentKey(const std::string &agentKey);
	int getBusinessResult() const;
	void setBusinessResult(int businessResult);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getCustomCallId() const;
	void setCustomCallId(const std::string &customCallId);

private:
	long callId_;
	std::string clueStatusRemark_;
	std::string agentKey_;
	int businessResult_;
	std::string accessKeyId_;
	std::string customCallId_;
};
} // namespace Model
} // namespace SmartSales
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTSALES_MODEL_UPDATECALLREQUEST_H_
