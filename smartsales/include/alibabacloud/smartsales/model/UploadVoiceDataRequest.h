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

#ifndef ALIBABACLOUD_SMARTSALES_MODEL_UPLOADVOICEDATAREQUEST_H_
#define ALIBABACLOUD_SMARTSALES_MODEL_UPLOADVOICEDATAREQUEST_H_

#include <alibabacloud/smartsales/SmartSalesExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SmartSales {
namespace Model {
class ALIBABACLOUD_SMARTSALES_EXPORT UploadVoiceDataRequest : public RpcServiceRequest {
public:
	struct VoiceDataList {
		std::string customParamJson;
		std::string clueStatusRemark;
		long beginTime;
		int callChannel;
		int businessResult;
		std::string customCallId;
		long salesPersonId;
		long teamId;
		std::string customerId;
		std::string fileUrl;
		int clientTrackNumber;
		std::string customerName;
		int callType;
		std::string calleeNumber;
		std::string salesPersonName;
		std::string callerNumber;
	};
	UploadVoiceDataRequest();
	~UploadVoiceDataRequest();
	std::string getAgentKey() const;
	void setAgentKey(const std::string &agentKey);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::vector<VoiceDataList> getVoiceDataList() const;
	void setVoiceDataList(const std::vector<VoiceDataList> &voiceDataList);

private:
	std::string agentKey_;
	std::string accessKeyId_;
	std::vector<VoiceDataList> voiceDataList_;
};
} // namespace Model
} // namespace SmartSales
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTSALES_MODEL_UPLOADVOICEDATAREQUEST_H_
